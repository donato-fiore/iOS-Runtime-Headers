// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SFAUTOFILLINPUTVIEW_H
#define _SFAUTOFILLINPUTVIEW_H

@class UIInputView, UILabel, UIButton, NSMutableArray;
@protocol _SFAutoFillInputViewDelegate;


#import "_SFTextSuggestion.h"

@interface _SFAutoFillInputView : UIInputView {
    _SFTextSuggestion *_suggestion;
    UILabel *_explanationLabel;
    UIButton *_keyboardButton;
    UIButton *_otherPasswordsButton;
    UIButton *_fillCredentialButton;
    NSMutableArray *_dynamicConstraints;
}


@property (weak, nonatomic) NSObject<_SFAutoFillInputViewDelegate> *delegate; // ivar: _delegate


-(id)initWithHostString:(id)arg0 credentialSource:(id)arg1 suggestion:(id)arg2 ;
-(void)_fillCredential:(id)arg0 ;
-(void)_showMorePasswords:(id)arg0 ;
-(void)_showStandardKeyboard:(id)arg0 ;
-(void)_updateFillCredentialButtonLabelMetrics;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif