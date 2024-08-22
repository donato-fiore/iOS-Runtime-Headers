// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVPLAYBACKCOORDINATOR_H
#define AVPLAYBACKCOORDINATOR_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AVPlaybackCoordinator : NSObject

@property (readonly, nonatomic) NSArray *otherParticipants;
@property (readonly, nonatomic) NSArray *suspensionReasons;


+(void)initialize;
-(BOOL)pauseSnapsToMediaTimeOfOriginator;
-(NSInteger)participantLimitForWaitingOutSuspensionsWithReason:(id)arg0 ;
-(id)_currentWaitingPoliciesArray;
-(id)beginSuspensionForReason:(id)arg0 ;
-(id)init;
-(id)initInternal;
-(struct ? )expectedItemTimeAtHostTime:(struct ? )arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 ;
-(void)_endSuspension:(struct OpaqueFigTimelineCoordinatorSuspension *)arg0 proposingNewTime:(struct ? )arg1 ;
-(void)setParticipantLimit:(NSInteger)arg0 forWaitingOutSuspensionsWithReason:(id)arg1 ;
-(void)setPauseSnapsToMediaTimeOfOriginator:(BOOL)arg0 ;


@end


#endif