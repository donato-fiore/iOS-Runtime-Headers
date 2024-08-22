// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIACTIVITYACTIONGROUPCELL_H
#define UIACTIVITYACTIONGROUPCELL_H

@class NSLayoutConstraint, UIImageView, UIView, UIStackView, NSUUID, UILabel;


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
@property (readonly, nonatomic) _UIActivityActionCellBadgeView *badgeView;
@property (retain, nonatomic) _UIActivityActionCellBadgeView *badgeViewIfLoaded; // ivar: _badgeViewIfLoaded
@property (retain, nonatomic) UIStackView *imageStackView; // ivar: _imageStackView
@property (retain, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) UIView *platterView; // ivar: _platterView
@property (nonatomic) NSUInteger sequence; // ivar: _sequence
@property (readonly, nonatomic) UIImageView *statusImageView;
@property (retain, nonatomic) UIImageView *statusImageViewIfLoaded; // ivar: _statusImageViewIfLoaded
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *subtitleLabelIfLoaded; // ivar: _subtitleLabelIfLoaded
@property (retain, nonatomic) _UIActivityActionCellTitleLabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (retain, nonatomic) UIStackView *titleStackView; // ivar: _titleStackView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setDisabled:(BOOL)arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif