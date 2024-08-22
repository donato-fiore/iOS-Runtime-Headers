// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTEXTINLINENOTIFICATIONVIEW_H
#define CKTEXTINLINENOTIFICATIONVIEW_H

@class UIView, NSString, UIButton;


#import "CKInlineNotificationView.h"

@interface CKTextInlineNotificationView : CKInlineNotificationView {
    UIView *_contentView;
}


@property (retain, nonatomic) UIView *greyOutView; // ivar: _greyOutView
@property (nonatomic) BOOL greyedOut;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) UIButton *textButton; // ivar: _textButton


-(id)contentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentViewSizeThatFits:(struct CGSize )arg0 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleTouchDown:(id)arg0 ;
-(void)_handleTouchUpInside:(id)arg0 ;
-(void)_handleTouchUpOutside:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif