// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIACTIVITYACTIONGROUPCELL_H
#define UIACTIVITYACTIONGROUPCELL_H

@class NSLayoutConstraint, UIImageView, UIView, UIColor, NSUUID, UIImage, UIStackView, NSString;


#import "UIActivityActionCell.h"
#import "_UIHostActivityProxy.h"
#import "_UIActivityActionCellBadgeView.h"
#import "_UIActivityActionCellTitleLabel.h"

@interface UIActivityActionGroupCell : UIActivityActionCell {
    NSLayoutConstraint *_titleLabelHeightAnchor;
}


@property (retain, nonatomic) UIImageView *activityImageView; // ivar: _activityImageView
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy; // ivar: _activityProxy
@property (retain, nonatomic) UIView *activitySlotView; // ivar: _activitySlotView
@property (retain, nonatomic) _UIActivityActionCellBadgeView *badgeViewIfLoaded; // ivar: _badgeViewIfLoaded
@property (retain, nonatomic) UIColor *contentTintColor; // ivar: _contentTintColor
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) unsigned int imageSlotID; // ivar: _imageSlotID
@property (retain, nonatomic) UIStackView *imageStackView; // ivar: _imageStackView
@property (nonatomic) CGFloat platterTextHeight; // ivar: _platterTextHeight
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (retain, nonatomic) UIImage *statusImage; // ivar: _statusImage
@property (retain, nonatomic) UIColor *statusImageTintColor; // ivar: _statusImageTintColor
@property (retain, nonatomic) UIImageView *statusImageViewIfLoaded; // ivar: _statusImageViewIfLoaded
@property (copy, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *subtitleLabelIfLoaded; // ivar: _subtitleLabelIfLoaded
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) unsigned int titleSlotID; // ivar: _titleSlotID
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (retain, nonatomic) UIStackView *titleStackView; // ivar: _titleStackView


-(id)badgeView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBadgeWithText:(id)arg0 textColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)_updateContentTintColor;
-(void)_updateImageView;
-(void)_updateStatusImageView;
-(void)_updateTitleHeight;
-(void)_updateTitleView;
-(void)prepareForReuse;
-(void)setBadgeText:(id)arg0 textColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)setDisabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif