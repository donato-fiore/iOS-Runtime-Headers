// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIAIRDROPGROUPACTIVITYCELL_H
#define UIAIRDROPGROUPACTIVITYCELL_H

@class UICollectionViewCell, UIView, NSUUID, UILabel, NSArray, UIVisualEffectView;


#import "_UIAirDropProgressView.h"
#import "UIAirDropNode.h"

@interface UIAirDropGroupActivityCell : UICollectionViewCell

@property (retain, nonatomic) _UIAirDropProgressView *circleProgressView; // ivar: _circleProgressView
@property (readonly, nonatomic) CGFloat circleWidth;
@property (nonatomic, getter=isDisabled) BOOL disabled; // ivar: _disabled
@property (retain, nonatomic) UIView *displayNameSlotView; // ivar: _displayNameSlotView
@property (retain, nonatomic) UIView *imageSlotView; // ivar: _imageSlotView
@property (retain, nonatomic) NSUUID *itemIdentifier; // ivar: _itemIdentifier
@property (retain, nonatomic) UILabel *labelForPositioning; // ivar: _labelForPositioning
@property (retain, nonatomic) NSArray *largeTextConstraints; // ivar: _largeTextConstraints
@property (retain, nonatomic) UILabel *nameLabel; // ivar: _nameLabel
@property (retain, nonatomic) UIAirDropNode *node; // ivar: _node
@property (retain, nonatomic) UIView *placeholderView; // ivar: _placeholderView
@property (nonatomic) CGFloat progress; // ivar: _progress
@property (retain, nonatomic) NSArray *regularConstraints; // ivar: _regularConstraints
@property (retain, nonatomic) UILabel *secondLabel; // ivar: _secondLabel
@property (retain, nonatomic) NSArray *secondLabelVisibleConstraintsArray; // ivar: _secondLabelVisibleConstraintsArray
@property (nonatomic) BOOL squareImage; // ivar: _squareImage
@property (nonatomic) BOOL stateBeingRestored; // ivar: _stateBeingRestored
@property (retain, nonatomic) UIView *subtitleSlotView; // ivar: _subtitleSlotView
@property (retain, nonatomic) UIView *titleSlotView; // ivar: _titleSlotView
@property (retain, nonatomic) UIView *transportSlotView; // ivar: _transportSlotView
@property (retain, nonatomic) UIVisualEffectView *vibrantSubtitleView; // ivar: _vibrantSubtitleView
@property (retain, nonatomic) UIVisualEffectView *vibrantTitleView; // ivar: _vibrantTitleView


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_updateForCurrentSizeCategory;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setTransportSlotHidden:(BOOL)arg0 animated:(BOOL)arg1 useDelay:(BOOL)arg2 ;
-(void)setupConstraintsYukon;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateDarkening;


@end


#endif