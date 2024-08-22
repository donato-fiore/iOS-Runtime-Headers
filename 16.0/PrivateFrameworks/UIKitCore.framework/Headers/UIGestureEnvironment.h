// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIGESTUREENVIRONMENT_H
#define UIGESTUREENVIRONMENT_H

@class NSMutableSet, NSMutableArray, NSMapTable;
@protocol BSInvalidatable;

#import <Foundation/Foundation.h>

#import "UIGestureGraph.h"

@interface UIGestureEnvironment : NSObject {
    *__CFRunLoopObserver _gestureEnvironmentUpdateObserver;
    NSMutableSet *_gestureRecognizersNeedingUpdate;
    NSMutableSet *_gestureRecognizersNeedingReset;
    NSMutableSet *_gestureRecognizersNeedingRemoval;
    NSMutableArray *_dirtyGestureRecognizers;
    NSMutableSet *_gestureRecognizersBlockedFromReset;
    NSUInteger _lastBlockedResetEvaluationMachTime;
    id<BSInvalidatable> *_blockedResetStateCaptureToken;
    NSMutableArray *_delayedTouches;
    NSMutableArray *_delayedTouchesToSend;
    NSMutableArray *_delayedPresses;
    NSMutableArray *_delayedPressesToSend;
    NSMutableArray *_preUpdateActions;
    BOOL _dirtyGestureRecognizersUnsorted;
    BOOL _updateExclusivity;
    BOOL _isUpdatingGestureEnvironment;
    UIGestureGraph *_dependencyGraph;
    NSMapTable *_nodesByGestureRecognizer;
}




-(id)init;
-(void)addGestureRecognizer:(id)arg0 ;
-(void)dealloc;
-(void)removeGestureRecognizer:(id)arg0 ;


@end


#endif