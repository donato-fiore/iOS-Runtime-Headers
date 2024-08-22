// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERGENERALCOMMISSIONING_H
#define MTRCLUSTERGENERALCOMMISSIONING_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterGeneralCommissioning : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeBasicCommissioningInfoWithParams:(id)arg0 ;
-(id)readAttributeBreadcrumbWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeLocationCapabilityWithParams:(id)arg0 ;
-(id)readAttributeRegulatoryConfigWithParams:(id)arg0 ;
-(id)readAttributeSupportsConcurrentConnectionWithParams:(id)arg0 ;
-(void)armFailSafeWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)armFailSafeWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)commissioningCompleteWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)commissioningCompleteWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)commissioningCompleteWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)commissioningCompleteWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)setRegulatoryConfigWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)setRegulatoryConfigWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeBreadcrumbWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBreadcrumbWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif