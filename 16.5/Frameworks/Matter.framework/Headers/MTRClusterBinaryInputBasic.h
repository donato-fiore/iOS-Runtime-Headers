// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERBINARYINPUTBASIC_H
#define MTRCLUSTERBINARYINPUTBASIC_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterBinaryInputBasic : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeActiveTextWithParams:(id)arg0 ;
-(id)readAttributeApplicationTypeWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeDescriptionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeInactiveTextWithParams:(id)arg0 ;
-(id)readAttributeOutOfServiceWithParams:(id)arg0 ;
-(id)readAttributePolarityWithParams:(id)arg0 ;
-(id)readAttributePresentValueWithParams:(id)arg0 ;
-(id)readAttributeReliabilityWithParams:(id)arg0 ;
-(id)readAttributeStatusFlagsWithParams:(id)arg0 ;
-(void)writeAttributeActiveTextWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeActiveTextWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeDescriptionWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeDescriptionWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeInactiveTextWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeInactiveTextWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOutOfServiceWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOutOfServiceWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributePresentValueWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributePresentValueWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeReliabilityWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeReliabilityWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif