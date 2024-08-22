// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKCOMPOSENAVBARMANAGER_H
#define CKCOMPOSENAVBARMANAGER_H

@class UIButton, UIView;

#import <Foundation/Foundation.h>

#import "CKNavbarCanvasViewController.h"
#import "CKComposeNavbarManagerContentView.h"
#import "CKComposeNavbarCanvasViewController.h"

@interface CKComposeNavbarManager : NSObject

@property (retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController; // ivar: _avatarNavbarCanvasViewController
@property (readonly, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) CKComposeNavbarManagerContentView *composeContentView; // ivar: _composeContentView
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, nonatomic) UIView *customStatusBackgroundView; // ivar: _customStatusBackgroundView
@property (retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController; // ivar: _defaultNavbarCanvasViewController


-(id)initForBusinessChat:(BOOL)arg0 ;
-(void)_setupAvatarNavBarViewControllerWithConversation:(id)arg0 shouldShowBackButtonView:(BOOL)arg1 ;
-(void)_setupDefaultNavbarCanvasViewControllerForBusinessChat:(BOOL)arg0 ;
-(void)commitTransitionAnimationWithConversation:(id)arg0 shouldShowBackButtonView:(BOOL)arg1 ;
-(void)dealloc;
-(void)setCanvasViewControllerDelegate:(id)arg0 ;
-(void)updateContentsForConversation:(id)arg0 ;
-(void)updateTitle:(id)arg0 animated:(BOOL)arg1 ;


@end


#endif