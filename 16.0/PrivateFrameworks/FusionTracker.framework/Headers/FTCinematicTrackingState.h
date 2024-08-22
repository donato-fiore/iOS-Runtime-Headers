// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTCINEMATICTRACKINGSTATE_H
#define FTCINEMATICTRACKINGSTATE_H


#import <Foundation/Foundation.h>

#import "FTCinematicHighPriorityTrackerState.h"
#import "FTCinematicInput.h"

@interface FTCinematicTrackingState : NSObject {
    ? _tracker;
    NSUInteger _commitToken;
    ? _frame;
    BOOL _isTapToTrackOverlapWithIspMitigationEnabled;
}


@property (readonly, nonatomic) FTCinematicHighPriorityTrackerState *highPriorityTrackerState; // ivar: _highPriorityTrackerState
@property (readonly, nonatomic) FTCinematicInput *input; // ivar: _input


+(?)stateWithTracker:(?)arg0 frameinput;
-(id)commit;


@end


#endif