// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKAPPLEHOMEKEYCARDVIEW_H
#define PKAPPLEHOMEKEYCARDVIEW_H

@class UILabel;


#import "PKTexturedCardView.h"

@interface PKAppleHomeKeyCardView : PKTexturedCardView {
    UILabel *_titleLabel;
}




-(id)initWithStyle:(NSInteger)arg0 text:(id)arg1 font:(id)arg2 textColor:(id)arg3 ;
-(void)layoutSubviews;


@end


#endif