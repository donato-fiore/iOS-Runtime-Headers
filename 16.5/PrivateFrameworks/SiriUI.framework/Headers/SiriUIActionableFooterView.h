// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SIRIUIACTIONABLEFOOTERVIEW_H
#define SIRIUIACTIONABLEFOOTERVIEW_H

@class UIButton, NSString;
@protocol SiriUIActionableFooterViewDelegate;


#import "SiriUIReusableFooterView.h"
#import "SiriUIKeyline.h"
#import "SiriUISnippetViewController.h"

@interface SiriUIActionableFooterView : SiriUIReusableFooterView {
    UIButton *_button;
    SiriUIKeyline *_keyline;
    SiriUISnippetViewController *_snippetViewController;
}


@property (weak, nonatomic) NSObject<SiriUIActionableFooterViewDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL hasKeyline; // ivar: _hasKeyline
@property (copy, nonatomic) NSString *title;


+(CGFloat)defaultHeight;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)snippetViewController;
-(struct UIEdgeInsets )edgeInsets;
-(void)_buttonTapped:(id)arg0 ;
-(void)layoutSubviews;
-(void)setSnippetViewController:(id)arg0 ;


@end


#endif