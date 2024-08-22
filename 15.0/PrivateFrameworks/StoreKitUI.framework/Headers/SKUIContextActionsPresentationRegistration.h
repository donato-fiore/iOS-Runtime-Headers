// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUICONTEXTACTIONSPRESENTATIONREGISTRATION_H
#define SKUICONTEXTACTIONSPRESENTATIONREGISTRATION_H

@class UIViewPropertyAnimator, NSString, UILongPressGestureRecognizer, UIPreviewInteraction, NSTimer, UIViewController;
@protocol UIGestureRecognizerDelegate, UIPreviewInteractionDelegate;

#import <Foundation/Foundation.h>

#import "SKUIContextActionsViewController.h"

@interface SKUIContextActionsPresentationRegistration : NSObject <UIGestureRecognizerDelegate, UIPreviewInteractionDelegate>



@property (retain, nonatomic) UIViewPropertyAnimator *commitPhasePropertyAnimator; // ivar: _commitPhasePropertyAnimator
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (retain, nonatomic) SKUIContextActionsViewController *orbContextActionsViewController; // ivar: _orbContextActionsViewController
@property (retain, nonatomic) UIPreviewInteraction *previewInteraction; // ivar: _previewInteraction
@property (nonatomic) BOOL previewInteractionDidEnd; // ivar: _previewInteractionDidEnd
@property (retain, nonatomic) NSTimer *previewInteractionTimeout; // ivar: _previewInteractionTimeout
@property (retain, nonatomic) UIViewPropertyAnimator *previewPhasePropertyAnimator; // ivar: _previewPhasePropertyAnimator
@property (readonly) Class superclass;
@property (retain, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)previewInteractionShouldBegin:(id)arg0 ;
-(id)initWithViewController:(id)arg0 handler:(id)arg1 ;
-(void)_presentFromGestureRecognizer:(id)arg0 ;
-(void)cleanupPreviewInteraction:(id)arg0 ;
-(void)dealloc;
-(void)longPressGestureRecognizerTriggered:(id)arg0 ;
-(void)previewInteraction:(id)arg0 didUpdatePreviewTransition:(CGFloat)arg1 ended:(BOOL)arg2 ;
-(void)previewInteractionDidCancel:(id)arg0 ;


@end


#endif