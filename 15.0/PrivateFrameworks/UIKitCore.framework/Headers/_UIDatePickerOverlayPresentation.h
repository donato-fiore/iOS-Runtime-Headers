// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKEROVERLAYPRESENTATION_H
#define _UIDATEPICKEROVERLAYPRESENTATION_H

@protocol _UIDatePickerOverlayPresentationDelegate;

#import <Foundation/Foundation.h>

#import "UIView.h"
#import "UIDatePicker.h"
#import "_UIDatePickerContainerViewController.h"
#import "_UIDatePickerOverlayPlatterView.h"

@interface _UIDatePickerOverlayPresentation : NSObject

@property (retain, nonatomic) UIView *accessoryView; // ivar: _accessoryView
@property (nonatomic) BOOL accessoryViewIgnoresDefaultInsets; // ivar: _accessoryViewIgnoresDefaultInsets
@property (readonly, weak, nonatomic) UIDatePicker *activeDatePicker; // ivar: _activeDatePicker
@property (readonly, nonatomic) NSInteger activeMode; // ivar: _activeMode
@property (nonatomic) NSInteger alignment; // ivar: _alignment
@property (retain, nonatomic) _UIDatePickerContainerViewController *containerViewController; // ivar: _containerViewController
@property (nonatomic) BOOL defersAutomaticKeyboardAvoidanceAdjustments; // ivar: _defersAutomaticKeyboardAvoidanceAdjustments
@property (weak, nonatomic) NSObject<_UIDatePickerOverlayPresentationDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *dismissHandler; // ivar: _dismissHandler
@property (nonatomic) BOOL ignoresPassthroughOnSourceView; // ivar: _ignoresPassthroughOnSourceView
@property (readonly, nonatomic) BOOL isPresentingOverlay;
@property (nonatomic) NSInteger overlayAnchor; // ivar: _overlayAnchor
@property (retain, nonatomic) _UIDatePickerOverlayPlatterView *platterView; // ivar: _platterView
@property (readonly, nonatomic) CGRect resolvedSourceRect;
@property (nonatomic) CGRect sourceRect; // ivar: _sourceRect
@property (readonly, weak, nonatomic) UIView *sourceView; // ivar: _sourceView


-(CGFloat)_layoutArbiterAnchorAlignmentOffset;
-(NSInteger)_overlayAlignment;
-(NSUInteger)_overlayAlignmentEdge;
-(id)initWithSourceView:(id)arg0 ;
-(struct CGPoint )_adjustedAnchorPointForFrame:(struct CGRect )arg0 alignment:(NSUInteger)arg1 anchorPoint:(struct CGPoint )arg2 ;
-(struct CGPoint )_normalizedSourcePointForAnchorPoint:(struct CGPoint )arg0 menuFrame:(struct CGRect )arg1 ;
-(struct CGRect )_adjustedFrameForInputSize:(struct CGSize )arg0 outputFrame:(struct CGRect )arg1 ;
-(struct CGRect )resolvedSourceBounds;
-(struct _UIDatePickerOverlayPlatterLayout )_computedLayoutForPlatterView:(id)arg0 ;
-(void)_prepareDatePickerPresentationWithCompletion:(id)arg0 ;
-(void)_presentNewDatePicker:(id)arg0 ;
-(void)_transitionToDatePicker:(id)arg0 ;
-(void)activateEmptyPresentationWithMode:(NSInteger)arg0 onDismiss:(id)arg1 ;
// -(void)animateDismissalWithAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)animatePresentWithAnimations:(id)arg0 completion:(unk)arg1  ;
// -(void)animateTransitionWithAnimations:(id)arg0 completion:(unk)arg1  ;
-(void)dismissPresentationAnimated:(BOOL)arg0 ;
-(void)presentDatePicker:(id)arg0 mode:(NSInteger)arg1 sourceRect:(struct CGRect )arg2 onDismiss:(id)arg3 ;
-(void)presentDatePicker:(id)arg0 onDismiss:(id)arg1 ;
-(void)retargetCurrentPresentationToSourceView;


@end


#endif