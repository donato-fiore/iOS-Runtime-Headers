// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTRCLUSTERMEDIAPLAYBACK_H
#define MTRCLUSTERMEDIAPLAYBACK_H



#import "MTRCluster.h"
#import "MTRDevice.h"

@interface MTRClusterMediaPlayback : MTRCluster

@property (readonly, nonatomic) MTRDevice *device; // ivar: _device
@property (readonly, nonatomic) unsigned short endpoint; // ivar: _endpoint


-(id)initWithDevice:(id)arg0 endpoint:(unsigned short)arg1 queue:(id)arg2 ;
-(id)initWithDevice:(id)arg0 endpointID:(id)arg1 queue:(id)arg2 ;
-(id)readAttributeAcceptedCommandListWithParams:(id)arg0 ;
-(id)readAttributeAttributeListWithParams:(id)arg0 ;
-(id)readAttributeClusterRevisionWithParams:(id)arg0 ;
-(id)readAttributeCurrentStateWithParams:(id)arg0 ;
-(id)readAttributeDurationWithParams:(id)arg0 ;
-(id)readAttributeFeatureMapWithParams:(id)arg0 ;
-(id)readAttributeGeneratedCommandListWithParams:(id)arg0 ;
-(id)readAttributePlaybackSpeedWithParams:(id)arg0 ;
-(id)readAttributeSampledPositionWithParams:(id)arg0 ;
-(id)readAttributeSeekRangeEndWithParams:(id)arg0 ;
-(id)readAttributeSeekRangeStartWithParams:(id)arg0 ;
-(id)readAttributeStartTimeWithParams:(id)arg0 ;
-(void)fastForwardWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)fastForwardWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)fastForwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)fastForwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)nextWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)nextWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)nextWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)nextWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)pauseWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)pauseWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)pauseWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)pauseWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)playWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)playWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)playWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)playWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)previousWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)previousWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)previousWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)previousWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)rewindWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)rewindWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)rewindWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)rewindWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)seekWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)seekWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)skipBackwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)skipBackwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)skipForwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)skipForwardWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)startOverWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)startOverWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)startOverWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;
-(void)startOverWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopPlaybackWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completionHandler:(id)arg2 ;
-(void)stopPlaybackWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completionHandler:(id)arg3 ;
-(void)stopWithExpectedValues:(id)arg0 expectedValueInterval:(id)arg1 completion:(id)arg2 ;
-(void)stopWithParams:(id)arg0 expectedValues:(id)arg1 expectedValueInterval:(id)arg2 completion:(id)arg3 ;


@end


#endif