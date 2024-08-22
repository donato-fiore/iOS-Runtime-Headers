// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SXVISIBILITYMONITOR_H
#define SXVISIBILITYMONITOR_H

@class NFStateMachineState, NSString, NSMutableArray, NFStateMachine;
@protocol SXVisibilityReporting, SXVisibilityMonitoring, SXVisiblePercentageProviding;

#import <Foundation/Foundation.h>


@interface SXVisibilityMonitor : NSObject <SXVisibilityReporting, SXVisibilityMonitoring>



@property (readonly, nonatomic) BOOL appeared; // ivar: _appeared
@property (readonly, nonatomic) NFStateMachineState *appearedState; // ivar: _appearedState
@property (readonly, nonatomic) NFStateMachineState *appearingState; // ivar: _appearingState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSMutableArray *didAppearBlocks; // ivar: _didAppearBlocks
@property (readonly, nonatomic) NSMutableArray *didDisappearBlocks; // ivar: _didDisappearBlocks
@property (readonly, nonatomic) NFStateMachineState *disappearedState; // ivar: _disappearedState
@property (readonly, nonatomic) NFStateMachineState *disappearingState; // ivar: _disappearingState
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger lockCount; // ivar: _lockCount
@property (readonly, nonatomic) BOOL locked;
@property (readonly, weak, nonatomic) id *object; // ivar: _object
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly, nonatomic) NFStateMachine *stateMachine; // ivar: _stateMachine
@property (readonly) Class superclass;
@property (nonatomic) CGFloat visiblePercentage; // ivar: _visiblePercentage
@property (readonly, nonatomic) NSMutableArray *visiblePercentageBlocks; // ivar: _visiblePercentageBlocks
@property (readonly, nonatomic) NSObject<SXVisiblePercentageProviding> *visiblePercentageProvider; // ivar: _visiblePercentageProvider
@property (readonly, nonatomic) NSMutableArray *willAppearBlocks; // ivar: _willAppearBlocks
@property (readonly, nonatomic) NSMutableArray *willDisappearBlocks; // ivar: _willDisappearBlocks


-(id)initWithObject:(id)arg0 visiblePercentageProvider:(id)arg1 ;
-(void)determineVisiblePercentage;
-(void)didAppear;
-(void)didDisappear;
-(void)lock;
-(void)onDidAppear:(id)arg0 ;
-(void)onDidDisappear:(id)arg0 ;
-(void)onVisiblePercentageChange:(id)arg0 ;
-(void)onWillAppear:(id)arg0 ;
-(void)onWillDisappear:(id)arg0 ;
-(void)unlock;
-(void)updateVisibility;
-(void)willAppear;
-(void)willDisappear;


@end


#endif