// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBCLICKGESTURERECOGNIZER_H
#define SBCLICKGESTURERECOGNIZER_H

@class NSMutableArray, NSMutableSet;


#import "SBPressGestureRecognizer.h"

@interface SBClickGestureRecognizer : SBPressGestureRecognizer {
    NSUInteger _recognizedClicksCount;
    BOOL _gestureWasRecognized;
    BOOL _allPressBeganReceived;
    NSMutableArray *_shortcutPressTypesSubsets;
    NSMutableSet *_receivedPressBeganTypes;
    NSMutableSet *_receivedPressEndedTypes;
}


@property (nonatomic) BOOL allPressesUpRequired; // ivar: _allPressesUpRequired
@property (nonatomic) CGFloat maximumBetweenClicksDelay; // ivar: _maximumBetweenClicksDelay
@property (nonatomic) CGFloat maximumClickDownDuration; // ivar: _maximumClickDownDuration
@property (nonatomic) CGFloat maximumClickFormationDuration; // ivar: _maximumClickFormationDuration
@property (nonatomic) NSUInteger numberOfClicksRequired; // ivar: _numberOfClicksRequired


-(BOOL)_areRequiredPressTypesContainedInSet:(id)arg0 ;
-(BOOL)didReceiveRequiredPressBeganCount;
-(BOOL)didReceiveRequiredPressEndedCount;
-(id)gestureStateInfoForUnbalancedPressBeganCount:(NSInteger)arg0 previousCount:(NSInteger)arg1 ;
-(id)initWithTarget:(id)arg0 action:(SEL)arg1 ;
-(void)_notePressReceivedWithType:(NSInteger)arg0 phase:(NSInteger)arg1 ;
-(void)addShortcutWithPressTypes:(id)arg0 ;
-(void)reset;
-(void)resetShortcutsTracking;


@end


#endif