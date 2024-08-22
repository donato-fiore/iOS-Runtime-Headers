// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIROOTSCENEWINDOW_H
#define UIROOTSCENEWINDOW_H

@class UIRootWindow, NSString, FBSDisplayConfiguration;
@protocol UIMutableTransformerDelegate;


#import "UIView.h"
#import "UIMutableTransformer.h"

@interface UIRootSceneWindow : UIRootWindow <UIMutableTransformerDelegate>



@property (readonly, nonatomic) UIView *_sceneContainerView; // ivar: _sceneContainerView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayConfiguration *displayConfiguration; // ivar: _displayConfiguration
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIMutableTransformer *sceneTransformer; // ivar: _sceneTransformer
@property (readonly) Class superclass;


+(BOOL)_isSecure;
-(BOOL)_appearsInLoupe;
-(BOOL)_shouldPrepareScreenForWindow;
-(BOOL)_usesWindowServerHitTesting;
-(BOOL)canBecomeKeyWindow;
-(id)_focusResponder;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithDisplay:(id)arg0 ;
-(id)initWithDisplayConfiguration:(id)arg0 ;
-(id)initWithScreen:(id)arg0 ;
-(void)_updateTransforms;
-(void)dealloc;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)transformsDidChange:(id)arg0 ;


@end


#endif