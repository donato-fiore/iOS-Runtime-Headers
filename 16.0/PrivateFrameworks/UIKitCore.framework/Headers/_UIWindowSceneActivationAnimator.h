// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWINDOWSCENEACTIVATIONANIMATOR_H
#define _UIWINDOWSCENEACTIVATIONANIMATOR_H

@class NSMutableArray, CAMatchMoveAnimation;

#import <Foundation/Foundation.h>

#import "UIWindowSceneActivationConfiguration.h"
#import "UIView.h"
#import "_UIPortalView.h"

@interface _UIWindowSceneActivationAnimator : NSObject

@property (readonly, nonatomic) NSMutableArray *alongsideAnimations; // ivar: _alongsideAnimations
@property (readonly, nonatomic) NSMutableArray *alongsideCompletions; // ivar: _alongsideCompletions
@property (retain, nonatomic) UIWindowSceneActivationConfiguration *configuration; // ivar: _configuration
@property (nonatomic) BOOL deparented; // ivar: _deparented
@property (retain, nonatomic) UIView *deparentingPortalAlphaSourceView; // ivar: _deparentingPortalAlphaSourceView
@property (retain, nonatomic) UIView *deparentingWrapper; // ivar: _deparentingWrapper
@property (nonatomic) UIRectCornerRadii expectedCornerRadii; // ivar: _expectedCornerRadii
@property (nonatomic) CGRect expectedFrame; // ivar: _expectedFrame
@property (retain, nonatomic) CAMatchMoveAnimation *incomingSceneAnchorAnimation; // ivar: _incomingSceneAnchorAnimation
@property (retain, nonatomic) _UIPortalView *incomingScenePortalView; // ivar: _incomingScenePortalView
@property (nonatomic) BOOL isDeallocating; // ivar: _isDeallocating
@property (retain, nonatomic) UIView *morphContainerView; // ivar: _morphContainerView
@property (nonatomic) NSInteger state; // ivar: _state


-(BOOL)animateWithSourcePreview:(id)arg0 velocity:(CGFloat)arg1 ;
-(CGFloat)_startingShadowIntensity;
-(NSInteger)_preferredCollapsedShadowStyle;
-(id)_previewForIncomingScenePortal;
-(id)_sourceViewContainer;
-(id)initWithConfiguration:(id)arg0 ;
-(void)_cleanUp;
-(void)_performAllAlongsideAnimations:(id)arg0 ;
-(void)_performAllAlongsideCompletions;
-(void)_sendBSAction:(id)arg0 ;
-(void)_sendCompletionActionCallingAlongsideCompletions:(BOOL)arg0 ;
-(void)addAnimations:(id)arg0 ;
-(void)addCompletion:(id)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)deparent;
-(void)prewarmWithCompletion:(id)arg0 ;
-(void)reparent;


@end


#endif