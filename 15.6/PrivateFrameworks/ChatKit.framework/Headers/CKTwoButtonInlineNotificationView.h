// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTWOBUTTONINLINENOTIFICATIONVIEW_H
#define CKTWOBUTTONINLINENOTIFICATIONVIEW_H

@class UIView, UILabel, NSString, UIButton, UIImage;


#import "CKInlineNotificationView.h"

@interface CKTwoButtonInlineNotificationView : CKInlineNotificationView {
    UIView *_contentView;
}


@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIButton *failureButton; // ivar: _failureButton
@property (retain, nonatomic) UILabel *headerLabel; // ivar: _headerLabel
@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) UIView *horizontalDivider; // ivar: _horizontalDivider
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UIButton *leftButton; // ivar: _leftButton
@property (nonatomic) BOOL leftButtonIsGrayedOut;
@property (retain, nonatomic) NSString *leftButtonText;
@property (retain, nonatomic) UIView *leftGrayoutView; // ivar: _leftGrayoutView
@property (retain, nonatomic) UIButton *rightButton; // ivar: _rightButton
@property (nonatomic) BOOL rightButtonIsGrayedOut;
@property (retain, nonatomic) NSString *rightButtonText;
@property (retain, nonatomic) UIView *rightGrayoutView; // ivar: _rightGrayoutView
@property (retain, nonatomic) UIView *verticalDivider; // ivar: _verticalDivider


-(CGFloat)_heightForBottomBoxWithContainerWidth:(CGFloat)arg0 startingYOffset:(CGFloat)arg1 leftButtonFrame:(struct CGRect *)arg2 rightButtonFrame:(struct CGRect *)arg3 dividerFrame:(struct CGRect *)arg4 leftGrayoutViewFrame:(struct CGRect *)arg5 rightGrayoutViewFrame:(struct CGRect *)arg6 ;
-(CGFloat)_heightForTopBoxWithContainerWidth:(CGFloat)arg0 failureButtonFrame:(struct CGRect *)arg1 labelFrame:(struct CGRect *)arg2 descriptionFrame:(struct CGRect *)arg3 ;
-(id)contentView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )contentViewSizeThatFits:(struct CGSize )arg0 ;
-(void)_handleContentSizeCategoryDidChange:(id)arg0 ;
-(void)_handleTouchDown:(id)arg0 ;
-(void)_handleTouchUpInside:(id)arg0 ;
-(void)_handleTouchUpOutside:(id)arg0 ;
-(void)_updateFonts;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif