// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVALERTVIEW_H
#define _TVALERTVIEW_H

@class UIView, UILabel, NSArray, NSString;


#import "_TVImageView.h"
#import "TVImageProxy.h"

@interface _TVAlertView : UIView {
    _TVImageView *_imageView;
    UILabel *_messageLabel;
    UILabel *_titleLabel;
    NSArray *_additionalLabelViews;
}


@property (copy, nonatomic) NSArray *additionalLabels; // ivar: _additionalLabels
@property (retain, nonatomic) TVImageProxy *imageProxy; // ivar: _imageProxy
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (copy, nonatomic) NSString *title; // ivar: _title


+(id)_newLabelWithText:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif