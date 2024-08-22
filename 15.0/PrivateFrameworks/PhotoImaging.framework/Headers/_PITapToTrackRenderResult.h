// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PITAPTOTRACKRENDERRESULT_H
#define _PITAPTOTRACKRENDERRESULT_H

@class NURenderResult, PTCinematographyTrack, NSString;
@protocol PITapToTrackResult, NURenderStatistics;



@interface _PITapToTrackRenderResult : NURenderResult <PITapToTrackResult>



@property (readonly, nonatomic) PTCinematographyTrack *completedTrack; // ivar: _completedTrack
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;


-(id)initWithCompletedTrack:(id)arg0 ;


@end


#endif