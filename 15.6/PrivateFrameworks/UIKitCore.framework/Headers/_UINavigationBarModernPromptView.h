// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVIGATIONBARMODERNPROMPTVIEW_H
#define _UINAVIGATIONBARMODERNPROMPTVIEW_H

@class UIFont, NSString;


#import "UIView.h"
#import "UILabel.h"
#import "UIColor.h"

@interface _UINavigationBarModernPromptView : UIView {
    UILabel *_promptLabel;
    UIFont *_font;
}


@property (copy, nonatomic) NSString *prompt; // ivar: _prompt
@property (readonly, nonatomic) CGFloat promptHeight;
@property (copy, nonatomic) UIColor *textColor; // ivar: _textColor


-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updatePromptLabel;


@end


#endif