// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISHAREGROUPACTIVITYCELL_H
#define UISHAREGROUPACTIVITYCELL_H

@class UICollectionViewCell, UIImageView, UIView, NSUUID, UIImage, UILabel, NSArray, NSString, UIVisualEffectView;


#import "_UIHostActivityProxy.h"

@interface UIShareGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *activityImageView; // ivar: _activityImageView
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy; // ivar: _activityProxy
@property (nonatomic) unsigned int badgeSlotID; // ivar: _badgeSlotID
@property (retain, nonatomic) UIView *badgeSlotView; // ivar: _badgeSlotView
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (nonatomic) unsigned int imageSlotID; // ivar: _imageSlotID
@property (retain, nonatomic) UIView *imageSlotView; // ivar: _imageSlotView
@property (nonatomic) BOOL isPulsing; // ivar: _isPulsing
@property (retain, nonatomic) UILabel *labelForPositioning; // ivar: _labelForPositioning
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (nonatomic, getter=isLongPressable) BOOL longPressable; // ivar: _longPressable
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) unsigned int titleSlotID; // ivar: _titleSlotID
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (retain, nonatomic) UIVisualEffectView *vibrantLabelView; // ivar: _vibrantLabelView


-(id)_createTitleLabel;
-(id)_placeholderString;
-(id)createTargetedPreview;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateBadgeSlotView;
-(void)_updateConstraints;
-(void)_updateDarkening;
-(void)_updateImageView;
-(void)_updateTitleView;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)startPulsing;
-(void)stopPulsing;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif