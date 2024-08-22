// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIREUSABLECONFIRMATIONFOOTERVIEW_H
#define SIRIUIREUSABLECONFIRMATIONFOOTERVIEW_H

@class UIButton, SAUIConfirmationOptions;


#import "SiriUIReusableFooterView.h"
#import "SiriUIKeyline.h"
#import "SiriUISnippetViewController.h"

@interface SiriUIReusableConfirmationFooterView : SiriUIReusableFooterView {
    SiriUIKeyline *_verticalKeyline;
    SiriUISnippetViewController *_snippetViewController;
}


@property (readonly, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (readonly, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) SAUIConfirmationOptions *confirmationOptions; // ivar: _confirmationOptions


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snippetViewController;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )edgeInsets;
-(void)layoutSubviews;
-(void)setSnippetViewController:(id)arg0 ;


@end


#endif