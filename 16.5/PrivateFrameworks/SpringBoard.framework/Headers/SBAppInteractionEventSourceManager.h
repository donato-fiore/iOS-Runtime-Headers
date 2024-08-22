// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPINTERACTIONEVENTSOURCEMANAGER_H
#define SBAPPINTERACTIONEVENTSOURCEMANAGER_H

@class NSString, NSHashTable, NSMapTable;
@protocol SBAppInteractionEventSourceObserving, SBAppInteractionEventSourceProviding;

#import <Foundation/Foundation.h>


@interface SBAppInteractionEventSourceManager : NSObject <SBAppInteractionEventSourceObserving, SBAppInteractionEventSourceProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSMapTable *windowScenesToEventSources; // ivar: _windowScenesToEventSources


+(id)sharedInstance;
-(id)eventSourceForWindowScene:(id)arg0 ;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)eventSource:(id)arg0 applicationsBecameHidden:(id)arg1 ;
-(void)eventSource:(id)arg0 applicationsBecameVisible:(id)arg1 ;
-(void)eventSource:(id)arg0 didBeginTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)eventSource:(id)arg0 didFinishTransitionToMode:(NSInteger)arg1 withLayoutState:(id)arg2 activatingElement:(id)arg3 triggeredBy:(NSInteger)arg4 ;
-(void)eventSource:(id)arg0 keyboardFocusChangedToApplication:(id)arg1 ;
-(void)eventSource:(id)arg0 userDeletedApplications:(id)arg1 ;
-(void)eventSource:(id)arg0 userDeletedWebBookmark:(id)arg1 ;
-(void)eventSource:(id)arg0 userQuitApplicationInSwitcher:(id)arg1 ;
-(void)eventSource:(id)arg0 userRemovedSuggestions:(id)arg1 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 ;
-(void)eventSource:(id)arg0 userTouchedApplication:(id)arg1 pid:(int)arg2 inContext:(unsigned int)arg3 ;
-(void)removeObserver:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif