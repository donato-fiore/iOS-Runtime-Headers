// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFINDINTERACTION_H
#define UIFINDINTERACTION_H

@class NSString;
@protocol UIInteraction, UIFindInteractionDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UITextSearchOptions.h"
#import "UIFindSession.h"
#import "_UIFindNavigatorHarness.h"

@interface UIFindInteraction : NSObject <UIInteraction>

 {
    UIView *_alternateHostView;
    NSUInteger _lastUsedHostingStrategy;
}


@property (readonly, nonatomic) UITextSearchOptions *_configuredSearchOptions;
@property (weak, nonatomic, getter=_hostView, setter=_setHostView:) UIView *_hostView;
@property (readonly, nonatomic) UIFindSession *activeFindSession; // ivar: _activeFindSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<UIFindInteractionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) _UIFindNavigatorHarness *findNavigatorHarness; // ivar: _findNavigatorHarness
@property (readonly, nonatomic, getter=isFindNavigatorVisible) BOOL findNavigatorVisible;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *optionsMenuProvider; // ivar: _optionsMenuProvider
@property (copy, nonatomic) NSString *replacementText; // ivar: _replacementText
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;
@property (readonly, weak, nonatomic) UIView *view; // ivar: _view


+(id)_globalFindBuffer;
+(void)_setGlobalFindBuffer:(id)arg0 ;
-(NSUInteger)_computedHostingStrategy;
-(NSUInteger)_currentHostingStrategy;
-(id)_createActiveFindSessionIfNecessary;
-(id)_currentFindNavigatorController;
-(id)_findNavigatorHosting;
-(id)_findNavigatorHostingForStrategy:(NSUInteger)arg0 ;
-(id)_findNavigatorSceneComponent;
-(id)initWithSessionDelegate:(id)arg0 ;
-(id)searchableObject;
-(void)_didBeginActiveFindSession;
-(void)_didEndActiveFindSession;
-(void)_keyboardDidChangePlacementNotification:(id)arg0 ;
-(void)_presentFindNavigatorShowingReplace:(BOOL)arg0 ;
-(void)_recomputeHostingStrategyIfNecessary;
-(void)_systemInputAssistantCenterVisibilityChanged:(id)arg0 ;
-(void)didMoveToView:(id)arg0 ;
-(void)dismissFindNavigator;
-(void)findNext;
-(void)findPrevious;
-(void)presentFindNavigatorShowingReplace:(BOOL)arg0 ;
-(void)setSearchableObject:(id)arg0 ;
-(void)updateResultCount;
-(void)willMoveToView:(id)arg0 ;


@end


#endif