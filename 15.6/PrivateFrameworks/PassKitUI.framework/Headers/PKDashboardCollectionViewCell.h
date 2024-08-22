// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDASHBOARDCOLLECTIONVIEWCELL_H
#define PKDASHBOARDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIView;



@interface PKDashboardCollectionViewCell : UICollectionViewCell {
    UIView *_separatorView;
    BOOL _bottomSeparatorVisible;
    NSUInteger _maskType;
    CGRect _previousMaskBounds;
    NSUInteger _previousMaskType;
    BOOL _customHorizontalInset;
    CGFloat _horizontalInset;
}


@property (nonatomic) CGFloat horizontalInset;
@property (nonatomic) NSUInteger maskType;
@property (nonatomic) BOOL showsBottomSeparator; // ivar: _showsBottomSeparator
@property (nonatomic) BOOL wantsCustomAppearance; // ivar: _wantsCustomAppearance
@property (nonatomic) BOOL wantsDefaultHighlightBehavior; // ivar: _wantsDefaultHighlightBehavior


+(CGFloat)defaultHorizontalInset;
+(id)defaultBackgroundColor;
-(CGFloat)_bottomSeparatorAlpha;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setBottomSeparatorVisible:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)updateMask;


@end


#endif