// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERBARRIERCONTROL_H
#define MTRCLUSTERBARRIERCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterBarrierControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeBarrierCapabilitiesWithParams:(id)arg0 ;
-(id)readAttributeBarrierCloseEventsWithParams:(id)arg0 ;
-(id)readAttributeBarrierClosePeriodWithParams:(id)arg0 ;
-(id)readAttributeBarrierCommandCloseEventsWithParams:(id)arg0 ;
-(id)readAttributeBarrierCommandOpenEventsWithParams:(id)arg0 ;
-(id)readAttributeBarrierMovingStateWithParams:(id)arg0 ;
-(id)readAttributeBarrierOpenEventsWithParams:(id)arg0 ;
-(id)readAttributeBarrierOpenPeriodWithParams:(id)arg0 ;
-(id)readAttributeBarrierPositionWithParams:(id)arg0 ;
-(id)readAttributeBarrierSafetyStatusWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(void)barrierControlGoToPercentWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)barrierControlGoToPercentWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)barrierControlStopWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)barrierControlStopWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)barrierControlStopWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)barrierControlStopWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierCloseEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierClosePeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierCommandCloseEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierCommandOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierOpenEventsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeBarrierOpenPeriodWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif