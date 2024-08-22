// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UINAVBARPROMPT_H
#define _UINAVBARPROMPT_H

@class NSString;


#import "UIView.h"
#import "UILabel.h"
#import "UINavigationBar.h"

@interface _UINavBarPrompt : UIView {
    UILabel *_label;
    UINavigationBar *_navBar;
}


@property (copy, nonatomic) NSString *prompt;


-(id)initWithNavBar:(id)arg0 ;
-(struct CGRect )_labelFrame;
-(struct CGSize )_updateLabelTextColorAndFontReturningShadowOffset;
-(void)layoutSubviews;


@end


#endif