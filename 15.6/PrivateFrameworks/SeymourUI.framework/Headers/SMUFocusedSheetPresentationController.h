// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMUFOCUSEDSHEETPRESENTATIONCONTROLLER_H
#define SMUFOCUSEDSHEETPRESENTATIONCONTROLLER_H

@class UISheetPresentationController, UIBlurEffect, UIVisualEffectView, NSString;
@protocol SMUFocusedSheetPresentationController;



@interface SMUFocusedSheetPresentationController : UISheetPresentationController <SMUFocusedSheetPresentationController>



@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // ivar: _backgroundBlurEffect
@property (readonly, nonatomic) UIVisualEffectView *blurredBackgroundView; // ivar: _blurredBackgroundView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPresentedViewController:(id)arg0 presentingViewController:(id)arg1 ;
-(void)dismissalTransitionDidEnd:(BOOL)arg0 ;
-(void)dismissalTransitionWillBegin;
-(void)presentationTransitionDidEnd:(BOOL)arg0 ;
-(void)presentationTransitionWillBegin;


@end


#endif