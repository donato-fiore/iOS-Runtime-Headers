// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIKEYBOARDVIEW_H
#define SIRIUIKEYBOARDVIEW_H

@class UIInputView, NSArray, NSString, UITextField;
@protocol UITextFieldDelegate, SiriUIKeyboardViewDelegate;


#import "SiriUIHelpButton.h"
#import "SiriUIAudioRoutePickerButton.h"
#import "SiriUIContentButton.h"

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate>

 {
    SiriUIHelpButton *_helpButton;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIContentButton *_reportBugButton;
    CGFloat _interKeyboardAccessoryViewPadding;
    CGFloat _verticalCompensation;
    NSArray *_originalInstalledLanguageIdentifiers;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SiriUIKeyboardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextField *textField; // ivar: _textField


+(CGFloat)_keyboardAccessoryViewHeight;
+(CGFloat)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(BOOL)arg0 ;
+(CGFloat)heightForWidthSizeClass:(BOOL)arg0 ;
+(id)inputAccessoryViewBackgroundColor;
-(BOOL)_showsReportBugButton;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldClear:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_visibleHeightFromNotification:(id)arg0 ;
-(id)_createHelpButton:(struct CGRect )arg0 ;
-(id)_createTextFieldWithFrame:(struct CGRect )arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 inputViewStyle:(NSInteger)arg1 ;
-(struct CGRect )_defaultFrame;
-(struct CGSize )intrinsicContentSize;
-(struct UIEdgeInsets )safeAreaInsets;
-(void)_audioRouteButtonTapped:(id)arg0 ;
-(void)_configureAudioRoutePickerForAccessibility;
-(void)_configureReportBugButton;
-(void)_configureReportButtonForAccessibility;
-(void)_createReportBugButtonWithTemplateImage:(id)arg0 ;
-(void)_helpButtonLongPressed:(id)arg0 ;
-(void)_helpButtonTapped:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_keyboardWillShow:(id)arg0 ;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(id)arg0 ;
-(void)_reportBugButtonLongPressed;
-(void)_reportBugButtonTapped;
-(void)_undoTextFieldEdit:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)safeAreaInsetsDidChange;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg0 ;
-(void)setShowAudioRoutePicker:(BOOL)arg0 ;
-(void)setText:(id)arg0 ;


@end


#endif