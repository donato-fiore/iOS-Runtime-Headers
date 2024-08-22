// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUBANNERCELL_H
#define HUBANNERCELL_H

@class UICollectionViewCell, UIButton, NSString, UILabel, UIView, UIImageView, HFItem, NSArray;
@protocol UIGestureRecognizerDelegate, HUGridCellProtocol, HUBannerCellProtocol, HUBannerCellDelegate, HUResizableCellDelegate;


#import "HUIconView.h"
#import "HUGridStatusBannerCellLayoutOptions.h"

@interface HUBannerCell : UICollectionViewCell <UIGestureRecognizerDelegate, HUGridCellProtocol, HUBannerCellProtocol>



@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // ivar: _cellContentsHidden
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUBannerCellDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (retain, nonatomic) UILabel *footerViewLabel; // ivar: _footerViewLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) HUGridStatusBannerCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) UIView *lineView; // ivar: _lineView
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) CGFloat pointerRegionMargin;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(BOOL)requiresConstraintBasedLayout;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)isCellSizeSubclassSmallPhone;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_dismissButtonTapped:(id)arg0 ;
-(void)_footerViewTapped:(id)arg0 ;
-(void)_setupCommonCellAppearance;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)setBackgroundColor;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;
-(void)setupCustomCellAppearence;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif