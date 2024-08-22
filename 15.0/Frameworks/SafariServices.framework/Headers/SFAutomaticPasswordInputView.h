// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTOMATICPASSWORDINPUTVIEW_H
#define SFAUTOMATICPASSWORDINPUTVIEW_H

@class UIInputView;
@protocol SFAutomaticPasswordInputViewDelegate, SFAutomaticPasswordInputViewSizing;


#import "SFAutomaticPasswordExplanationView.h"

@interface SFAutomaticPasswordInputView : UIInputView {
    SFAutomaticPasswordExplanationView *_explanationView;
}


@property (weak, nonatomic) NSObject<SFAutomaticPasswordInputViewDelegate> *delegate; // ivar: _delegate
@property (weak, nonatomic) NSObject<SFAutomaticPasswordInputViewSizing> *inputViewSizing; // ivar: _inputViewSizing
@property (nonatomic) NSInteger keyboardAppearance;
@property (readonly, nonatomic) NSInteger keyboardType; // ivar: _keyboardType
@property (nonatomic) BOOL shouldAllowSelfSizing; // ivar: _shouldAllowSelfSizing


-(BOOL)allowsSelfSizing;
-(id)initWithInputViewStyle:(NSInteger)arg0 keyboardType:(NSInteger)arg1 ;
-(struct CGSize )intrinsicContentSize;
-(void)_useCustomPasswordButtonAction:(id)arg0 ;
-(void)_useStrongPasswordButtonAction:(id)arg0 ;


@end


#endif