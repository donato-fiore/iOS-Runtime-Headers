// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERLEVELCONTROL_H
#define MTRCLUSTERLEVELCONTROL_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterLevelControl : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCurrentFrequencyWithParams:(id)arg0 ;
-(id)readAttributeCurrentLevelWithParams:(id)arg0 ;
-(id)readAttributeDefaultMoveRateWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributeMaxFrequencyWithParams:(id)arg0 ;
-(id)readAttributeMaxLevelWithParams:(id)arg0 ;
-(id)readAttributeMinFrequencyWithParams:(id)arg0 ;
-(id)readAttributeMinLevelWithParams:(id)arg0 ;
-(id)readAttributeOffTransitionTimeWithParams:(id)arg0 ;
-(id)readAttributeOnLevelWithParams:(id)arg0 ;
-(id)readAttributeOnOffTransitionTimeWithParams:(id)arg0 ;
-(id)readAttributeOnTransitionTimeWithParams:(id)arg0 ;
-(id)readAttributeOptionsWithParams:(id)arg0 ;
-(id)readAttributeRemainingTimeWithParams:(id)arg0 ;
-(id)readAttributeStartUpCurrentLevelWithParams:(id)arg0 ;
-(void)moveToClosestFrequencyWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToClosestFrequencyWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToLevelWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToLevelWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveToLevelWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveToLevelWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)moveWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)moveWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stepWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stepWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stopWithOnOffWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)stopWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeDefaultMoveRateWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOffTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOnLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOnOffTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOnTransitionTimeWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeOptionsWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 ;
-(void)writeAttributeStartUpCurrentLevelWithValue:(id)arg0 expectedValueInterval:(id)arg1 params:(id)arg2 ;


@end


#endif