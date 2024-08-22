// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNWALKINGTURNBYTURNLOCATIONTRACKER_H
#define MNWALKINGTURNBYTURNLOCATIONTRACKER_H



#import "MNTurnByTurnLocationTracker.h"

@interface MNWalkingTurnByTurnLocationTracker : MNTurnByTurnLocationTracker {
    int _detectedTransportType;
    ? _detectedTransportTypeOrigin;
}




-(BOOL)_allowSwitchToTransportType:(int)arg0 forLocation:(id)arg1 ;
-(id)_newMapMatcherForRoute:(id)arg0 ;
-(id)initWithNavigationSession:(id)arg0 ;
-(int)_detectedMotionForLocation:(id)arg0 ;
-(int)transportType;


@end


#endif