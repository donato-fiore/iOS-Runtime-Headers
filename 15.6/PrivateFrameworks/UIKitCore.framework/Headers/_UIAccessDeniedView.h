// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIACCESSDENIEDVIEW_H
#define _UIACCESSDENIEDVIEW_H

@class NSString;


#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"

@interface _UIAccessDeniedView : UIView {
    UIImageView *_lockView;
    UILabel *_titleLabel;
    UILabel *_messageLabel;
}


@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


-(id)_textColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif