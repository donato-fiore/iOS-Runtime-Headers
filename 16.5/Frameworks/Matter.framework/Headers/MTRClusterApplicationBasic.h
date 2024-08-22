// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERAPPLICATIONBASIC_H
#define MTRCLUSTERAPPLICATIONBASIC_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterApplicationBasic : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAllowedVendorListWithParams:(id)arg0 ;
-(id)readAttributeApplicationNameWithParams:(id)arg0 ;
-(id)readAttributeApplicationVersionWithParams:(id)arg0 ;
-(id)readAttributeApplicationWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeProductIDWithParams:(id)arg0 ;
-(id)readAttributeStatusWithParams:(id)arg0 ;
-(id)readAttributeVendorIDWithParams:(id)arg0 ;
-(id)readAttributeVendorNameWithParams:(id)arg0 ;


@end


#endif