// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UISHAREGROUPACTIVITYCELL_H
#define UISHAREGROUPACTIVITYCELL_H

@class UICollectionViewCell, UIImageView, UIView, NSUUID, UILabel, NSArray, UIVisualEffectView;


#import "_UIHostActivityProxy.h"

@interface UIShareGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *activityImageView; // ivar: _activityImageView
@property (retain, nonatomic) _UIHostActivityProxy *activityProxy; // ivar: _activityProxy
@property (retain, nonatomic) UIView *badgeSlotView; // ivar: _badgeSlotView
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) UIView *imageSlotView; // ivar: _imageSlotView
@property (retain, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) UILabel *labelForPositioning; // ivar: _labelForPositioning
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (nonatomic, getter=isLongPressable) BOOL longPressable; // ivar: _longPressable
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (retain, nonatomic) UIVisualEffectView *vibrantLabelView; // ivar: _vibrantLabelView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupConstraints;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDarkening;


@end


#endif