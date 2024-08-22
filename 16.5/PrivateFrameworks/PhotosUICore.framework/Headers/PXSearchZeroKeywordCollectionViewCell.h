// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSEARCHZEROKEYWORDCOLLECTIONVIEWCELL_H
#define PXSEARCHZEROKEYWORDCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UIImageView, UILabel;


#import "PXRoundedCornerOverlayView.h"

@interface PXSearchZeroKeywordCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) PXRoundedCornerOverlayView *imageCornerOverlayView; // ivar: _imageCornerOverlayView
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) UILabel *textLabel; // ivar: _textLabel


+(BOOL)cellLabelTextNeedsMultipleLines:(id)arg0 cellWidth:(CGFloat)arg1 ;
+(CGFloat)_calculateHeightNeededForTextLabelWithNumberOfLines:(NSUInteger)arg0 ;
+(CGFloat)expectedNumberOfCellsVisibleWithAccessibilityText:(BOOL)arg0 withInset:(struct UIEdgeInsets )arg1 cellSpacing:(CGFloat)arg2 screenWidth:(CGFloat)arg3 ;
+(CGFloat)verticalSpacing;
+(id)attributedStringForCellLabelWithString:(id)arg0 ;
+(id)reuseIdentifier;
+(id)thumbnailWidthInterpolator;
+(struct CGSize )_thumbnailSizeWithMetric:(CGFloat)arg0 ;
+(struct CGSize )cellSizeForAccessibilityTextWithTextLabelNumberOfLines:(NSUInteger)arg0 collectionInset:(struct UIEdgeInsets )arg1 collectionCellSpacing:(CGFloat)arg2 screenWidth:(CGFloat)arg3 ;
+(struct CGSize )cellSizeForAccessibilityTextWithoutTextLabelUsingCollectionInset:(struct UIEdgeInsets )arg0 collectionCellSpacing:(CGFloat)arg1 screenWidth:(CGFloat)arg2 ;
+(struct CGSize )cellSizeWithTextLabelNumberOfLines:(NSUInteger)arg0 ;
+(struct CGSize )cellSizeWithoutTextLabel;
+(struct CGSize )thumbnailSize;
+(struct CGSize )thumbnailSizeForAccessibilityTextUsingCollectionInset:(struct UIEdgeInsets )arg0 cellSpacing:(CGFloat)arg1 screenWidth:(CGFloat)arg2 ;
-(id)focusEffect;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;


@end


#endif