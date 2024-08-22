// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDATEPICKERCONTENTVIEW_H
#define UIDATEPICKERCONTENTVIEW_H



#import "UIView.h"
#import "_UIDatePickerMode.h"
#import "UILabel.h"

@interface UIDatePickerContentView : UIView {
    ? _datePickerContentViewFlags;
}


@property (nonatomic) BOOL isAmPm;
@property (retain, nonatomic) _UIDatePickerMode *mode; // ivar: _mode
@property (nonatomic) NSInteger titleAlignment; // ivar: _titleAlignment
@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) CGFloat titleLabelMaxX; // ivar: _titleLabelMaxX
@property (nonatomic) BOOL useDigitFont;


-(BOOL)_canBeReusedInPickerView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithMode:(id)arg0 ;
-(void)layoutSubviews;


@end


#endif