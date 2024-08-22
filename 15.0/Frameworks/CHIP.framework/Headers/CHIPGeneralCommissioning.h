// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CHIPGENERALCOMMISSIONING_H
#define CHIPGENERALCOMMISSIONING_H



#import "CHIPCluster.h"

@interface CHIPGeneralCommissioning : CHIPCluster

@property (readonly) GeneralCommissioningCluster cppCluster; // ivar: _cppCluster


-(struct ClusterBase *)getCluster;
-(void)armFailSafe:(unsigned short)arg0 breadcrumb:(NSUInteger)arg1 timeoutMs:(unsigned int)arg2 responseHandler:(id)arg3 ;
-(void)commissioningComplete:(id)arg0 ;
-(void)readAttributeBreadcrumbWithResponseHandler:(id)arg0 ;
-(void)readAttributeClusterRevisionWithResponseHandler:(id)arg0 ;
-(void)readAttributeFabricIdWithResponseHandler:(id)arg0 ;
-(void)setRegulatoryConfig:(unsigned char)arg0 countryCode:(id)arg1 breadcrumb:(NSUInteger)arg2 timeoutMs:(unsigned int)arg3 responseHandler:(id)arg4 ;
-(void)writeAttributeBreadcrumbWithValue:(NSUInteger)arg0 responseHandler:(id)arg1 ;


@end


#endif