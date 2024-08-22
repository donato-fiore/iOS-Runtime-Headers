// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBASSISTANTSCENECONTROLLER_H
#define SBASSISTANTSCENECONTROLLER_H

@class NSString, NSHashTable;
@protocol SBAssistantObserver, SBAssistantSceneControlling;

#import <Foundation/Foundation.h>

#import "SBAssistantRootViewController.h"
#import "SBWindow.h"
#import "SBWindowScene.h"

@interface SBAssistantSceneController : NSObject <SBAssistantObserver, SBAssistantSceneControlling>



@property (readonly, nonatomic) SBAssistantRootViewController *assistantRootViewController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) SBWindow *window;
@property (readonly, weak, nonatomic) SBWindowScene *windowScene; // ivar: _windowScene


-(id)initWithWindowScene:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)assistantDidAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantDidDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantWillAppear:(id)arg0 windowScene:(id)arg1 ;
-(void)assistantWillDisappear:(id)arg0 windowScene:(id)arg1 ;
-(void)dismissAssistantViewIfNecessary;
-(void)dismissAssistantViewIfNecessaryForGestureTranslation:(struct CGPoint )arg0 velocity:(struct CGPoint )arg1 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 ;
-(void)dismissAssistantViewIfNecessaryWithAnimation:(NSInteger)arg0 completion:(id)arg1 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif