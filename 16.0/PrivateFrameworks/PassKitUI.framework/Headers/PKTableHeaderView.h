// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTABLEHEADERVIEW_H
#define PKTABLEHEADERVIEW_H

@class UIView, UILabel, UIButton, UIActivityIndicatorView, LAUICheckmarkLayer, UIImageView;



@interface PKTableHeaderView : UIView {
    CGSize _originalImageViewSize;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    BOOL _isTemplateLayout;
}


@property (nonatomic) BOOL accessoryViewsDisabled; // ivar: _accessoryViewsDisabled
@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // ivar: _activityIndicator
@property (nonatomic) CGFloat bottomPadding; // ivar: _bottomPadding
@property (readonly, nonatomic) LAUICheckmarkLayer *checkmarkLayer; // ivar: _checkmarkLayer
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat maximumHeight; // ivar: _maximumHeight
@property (nonatomic) CGFloat minimumHeight; // ivar: _minimumHeight
@property (nonatomic) BOOL shouldReserveSubtitleHeight; // ivar: _shouldReserveSubtitleHeight
@property (nonatomic) NSUInteger style; // ivar: _style
@property (readonly, nonatomic) UILabel *subtitleLabel;
@property (readonly, nonatomic) UILabel *titleLabel;
@property (nonatomic) CGFloat topPadding; // ivar: _topPadding


-(BOOL)_hasAccessibilityLargeText;
-(id)_subtitleFont;
-(id)_titleFont;
-(id)actionButton;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 ;
-(struct CGSize )_layoutWithBounds:(struct CGRect )arg0 imageHeightAdjustment:(CGFloat)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateAccessoryViews;
-(void)_updateCheckmarkColor;
-(void)_updateFonts;
-(void)_updateImageView;
-(void)layoutSubviews;
-(void)setActionTitle:(id)arg0 ;
-(void)setPassSnapshot:(id)arg0 withSize:(struct CGSize )arg1 animated:(BOOL)arg2 needsCorners:(BOOL)arg3 ;
-(void)setPassSnapshotUsingDefaultSize:(id)arg0 animated:(BOOL)arg1 needsCorners:(BOOL)arg2 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif