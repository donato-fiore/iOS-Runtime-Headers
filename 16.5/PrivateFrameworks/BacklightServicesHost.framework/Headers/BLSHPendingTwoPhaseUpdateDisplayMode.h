// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHPENDINGTWOPHASEUPDATEDISPLAYMODE_H
#define BLSHPENDINGTWOPHASEUPDATEDISPLAYMODE_H



#import "BLSHPendingUpdateDisplayMode.h"
#import "BLSHPendingTwoPhaseUpdateDisplayMode.h"

@interface BLSHPendingTwoPhaseUpdateDisplayMode : BLSHPendingUpdateDisplayMode

@property (retain) BLSHPendingTwoPhaseUpdateDisplayMode *next; // ivar: _next
@property (weak) BLSHPendingTwoPhaseUpdateDisplayMode *previous; // ivar: _previous


-(BOOL)isFullyCompleted;
-(BOOL)isStarted;
-(BOOL)isTwoPhaseUpdate;
-(id)description;
-(id)first;
-(id)last;
-(id)rampOperation;
-(id)updateOperation;


@end


#endif