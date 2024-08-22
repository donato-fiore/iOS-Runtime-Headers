// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VTUIVOICESELECTIONVIEW_H
#define VTUIVOICESELECTIONVIEW_H

@class UIView, UIButton, NSString;
@protocol VTUIVoiceSelectionContaining;


#import "VTUIEnrollmentBaseView.h"

@interface VTUIVoiceSelectionView : VTUIEnrollmentBaseView <VTUIVoiceSelectionContaining>

 {
    UIView *_footerView;
    BOOL _allowsRandomSelection;
    BOOL _shouldShowContinueButton;
}


@property (retain, nonatomic) UIButton *chooseRandomVoiceButton; // ivar: _chooseRandomVoiceButton
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)footerView;
-(id)initWithAllowsRandomVoiceSelection:(BOOL)arg0 showContinueButton:(BOOL)arg1 ;
-(void)_setupButtons;
-(void)tintColorDidChange;


@end


#endif