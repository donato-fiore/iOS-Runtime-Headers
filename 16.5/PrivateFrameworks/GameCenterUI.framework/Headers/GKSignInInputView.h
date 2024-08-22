// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKSIGNININPUTVIEW_H
#define GKSIGNININPUTVIEW_H

@class UIView, NSLayoutConstraint;



@interface GKSignInInputView : UIView

@property (retain, nonatomic) NSLayoutConstraint *bottomToSignInBaselineConstraint; // ivar: _bottomToSignInBaselineConstraint
@property (retain, nonatomic) NSLayoutConstraint *inputViewHeightConstraint; // ivar: _inputViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *promptTextToProgressIndicatorTopConstraint; // ivar: _promptTextToProgressIndicatorTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *signInBaselineToPromptTextTopConstraint; // ivar: _signInBaselineToPromptTextTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *signInFormToSignInLabelTopConstraint; // ivar: _signInFormToSignInLabelTopConstraint
@property (retain, nonatomic) NSLayoutConstraint *signInInputViewHeightConstraint; // ivar: _signInInputViewHeightConstraint
@property (retain, nonatomic) NSLayoutConstraint *topToSignInBaselineConstraint; // ivar: _topToSignInBaselineConstraint


-(id)allVariableConstraints;
-(void)setupConstraintConstantsForOrientation:(NSInteger)arg0 ;


@end


#endif