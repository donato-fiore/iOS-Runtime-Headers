// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBINPUTUISCENECONTROLLER_H
#define SBINPUTUISCENECONTROLLER_H

@class FBScene, UIKBArbiterClientFocusContext, NSString;
@protocol _UIKeyboardArbiterSceneDelegate;


#import "SBSystemUISceneController.h"
#import "SBSingleSceneController.h"
#import "SBTraitsPipelineManager.h"
#import "SBKeyboardHomeAffordanceAssertion.h"
#import "SBTraitsSingleSceneWindow.h"

@interface SBInputUISceneController : SBSystemUISceneController <_UIKeyboardArbiterSceneDelegate>

 {
    SBSingleSceneController *_sceneController;
    FBScene *_inputUIScene;
    UIKBArbiterClientFocusContext *_focusContext;
    SBTraitsPipelineManager *_currentTraitsPipelineManager;
    SBKeyboardHomeAffordanceAssertion *_homeAffordanceAssertion;
    NSUInteger _focusChangeCounter;
    BOOL _isKeyboardShowing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBTraitsSingleSceneWindow *hostingWindow;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisibleForSpringBoard) BOOL visibleForSpringBoard;


+(BOOL)_shouldControlInputUIScene;
+(id)_setupInfo;
-(id)_targetSceneForKeyboardFocusedSceneIdentity:(id)arg0 ;
-(id)_traitsPipelineManagerForScene:(id)arg0 ;
-(id)initWithSceneWorkspaceIdentifier:(id)arg0 clientProcessIdentity:(id)arg1 traitsRole:(id)arg2 jobLabel:(id)arg3 level:(CGFloat)arg4 ;
-(void)_acquireHomeAffordanceAssertionIfAppropriate;
-(void)_createInputUIScene;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_relinquishHomeAffordanceAssertionIfNeeded;
-(void)dealloc;
-(void)focusContextDidChange:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif