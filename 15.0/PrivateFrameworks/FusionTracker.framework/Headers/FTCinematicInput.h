// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTCINEMATICINPUT_H
#define FTCINEMATICINPUT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "FTCinematicTapRequest.h"

@interface FTCinematicInput : NSObject

@property (nonatomic) BOOL detectorDidRun; // ivar: _detectorDidRun
@property (nonatomic) NSInteger highPriorityTrackId; // ivar: _highPriorityTrackId
@property (retain, nonatomic) NSArray *observations; // ivar: _observations
@property (nonatomic) ? sourceFrameTimestamp; // ivar: _sourceFrameTimestamp
@property (nonatomic) CGPoint tapPosition; // ivar: _tapPosition
@property (retain, nonatomic) FTCinematicTapRequest *tapRequest; // ivar: _tapRequest


-(id)init;
-(struct vector<ft::Observation, std::allocator<ft::Observation>> )mapToInternalObservations;


@end


#endif