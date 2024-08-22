// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBANNERVIEW_H
#define HUBANNERVIEW_H

@class UIView, UIButton, NSString, UILabel, UIImageView, HFItem, NSArray;
@protocol UIGestureRecognizerDelegate, UITextViewDelegate, HUGridCellProtocol, HUBannerViewDelegate, HUResizableCellDelegate;


#import "HUIconView.h"
#import "HUGridBannerCellLayoutOptions.h"

@interface HUBannerView : UIView <UIGestureRecognizerDelegate, UITextViewDelegate, HUGridCellProtocol>



@property (nonatomic, getter=areCellContentsHidden) BOOL cellContentsHidden; // ivar: _cellContentsHidden
@property (retain, nonatomic) UIButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HUBannerViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UILabel *descriptionLabel; // ivar: _descriptionLabel
@property (nonatomic) BOOL disableHighlighting; // ivar: _disableHighlighting
@property (retain, nonatomic) UIButton *dismissButton; // ivar: _dismissButton
@property (retain, nonatomic) UIView *footerView; // ivar: _footerView
@property (retain, nonatomic) UILabel *footerViewLabel; // ivar: _footerViewLabel
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *iconImageView; // ivar: _iconImageView
@property (retain, nonatomic) HUIconView *iconView; // ivar: _iconView
@property (retain, nonatomic) HFItem *item; // ivar: _item
@property (retain, nonatomic) NSArray *layoutConstraints; // ivar: _layoutConstraints
@property (retain, nonatomic) HUGridBannerCellLayoutOptions *layoutOptions; // ivar: _layoutOptions
@property (retain, nonatomic) UIView *lineView; // ivar: _lineView
@property (nonatomic, getter=isPointerInteractionEnabled) BOOL pointerInteractionEnabled;
@property (nonatomic) CGFloat pointerRegionMargin;
@property (nonatomic, getter=isRearranging) BOOL rearranging;
@property (weak, nonatomic) NSObject<HUResizableCellDelegate> *resizingDelegate;
@property (readonly) Class superclass;
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)_dismissButtonTapped:(id)arg0 ;
-(void)_footerViewTapped:(id)arg0 ;
-(void)_subclass_updateConstraints;
-(void)prepareForReuse;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;
-(void)updateUIWithAnimation:(BOOL)arg0 ;


@end


#endif