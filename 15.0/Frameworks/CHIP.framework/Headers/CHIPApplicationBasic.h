// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPAPPLICATIONBASIC_H
#define CHIPAPPLICATIONBASIC_H



#import "CHIPCluster.h"

@interface CHIPApplicationBasic : CHIPCluster

@property (readonly) ApplicationBasicCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)readAttributeApplicationIdWithResponseHandler:(id)arg0 ;
-(void)readAttributeApplicationNameWithResponseHandler:(id)arg0 ;
-(void)readAttributeApplicationSatusWithResponseHandler:(id)arg0 ;
-(void)readAttributeCatalogVendorIdWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeProductIdWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorIdWithResponseHandler:(id)arg0 ;
-(void)readAttributeVendorNameWithResponseHandler:(id)arg0 ;


@end


#endif