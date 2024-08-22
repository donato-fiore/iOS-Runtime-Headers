// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PITAPTOTRACKRENDERJOB_H
#define PITAPTOTRACKRENDERJOB_H

@class NURenderJob, PTCinematographyTrack;



@interface PITapToTrackRenderJob : NURenderJob

@property BOOL clientRequestedStop; // ivar: _clientRequestedStop
@property (retain, nonatomic) PTCinematographyTrack *completedTrack; // ivar: _completedTrack
@property (nonatomic) CGPoint normalizedImagePoint; // ivar: _normalizedImagePoint
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (nonatomic) ? startTime; // ivar: _startTime


-(BOOL)prepare:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputVideo;
-(BOOL)wantsRenderStage;
-(id)result;
-(id)scalePolicy;
-(void)_reportProgressAtTime:(struct ? )arg0 rect:(struct CGRect )arg1 confidence:(float)arg2 ;


@end


#endif