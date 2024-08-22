// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBASSISTANTGESTURECONFIGURATION_H
#define SBASSISTANTGESTURECONFIGURATION_H

@class NSString, NSHashTable, SiriPresentationSpringBoardMainScreenViewController;
@protocol SBAssistantGestureConfigurationObserving;

#import <Foundation/Foundation.h>


@interface SBAssistantGestureConfiguration : NSObject <SBAssistantGestureConfigurationObserving>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger homeAffordanceSuppression;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic) BOOL shouldDismissForSwipesOutsideContent;
@property (readonly, nonatomic) BOOL shouldDismissForTapsOutsideContent;
@property (readonly, nonatomic) BOOL shouldPassTouchesThroughToSpringBoard;
@property (readonly, nonatomic) BOOL shouldShareHomeGesture;
@property (readonly, nonatomic) BOOL shouldShowHomeAffordance;
@property (readonly, nonatomic) SiriPresentationSpringBoardMainScreenViewController *siriPresentationViewController; // ivar: _siriPresentationViewController
@property (nonatomic) NSInteger siriWantsHomeAffordanceSuppression; // ivar: _siriWantsHomeAffordanceSuppression
@property (nonatomic) BOOL siriWantsToShowHomeAffordance; // ivar: _siriWantsToShowHomeAffordance
@property (readonly) Class superclass;


-(id)initWithSiriPresentationViewController:(id)arg0 ;
-(void)_makeObserversPerformBlock:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateHomeAffordanceSuppression:(NSInteger)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateHomeGestureSharing:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldDismissForSwipesOutsideContent:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldDismissForTapsOutsideContent:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldPassTouchesThroughToSpringBoard:(BOOL)arg1 ;
-(void)assistantGestureConfiguration:(id)arg0 didUpdateShouldShowHomeAffordance:(BOOL)arg1 ;
-(void)removeObserver:(id)arg0 ;
-(void)shouldDismissForGestureAtLocation:(struct CGPoint )arg0 completion:(id)arg1 ;


@end


#endif