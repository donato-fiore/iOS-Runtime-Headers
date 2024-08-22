// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKSTARRATINGVIEW_H
#define MKSTARRATINGVIEW_H

@class UIView, NSMutableArray, UIImage;



@interface MKStarRatingView : UIView {
    CGFloat _padding;
    NSMutableArray *_ratingViews;
    NSInteger _numReviews;
}


@property (retain, nonatomic) UIImage *emptyStarHighlightedImage; // ivar: _emptyStarHighlightedImage
@property (retain, nonatomic) UIImage *emptyStarImage; // ivar: _emptyStarImage
@property (retain, nonatomic) UIImage *fullStarHighlightedImage; // ivar: _fullStarHighlightedImage
@property (retain, nonatomic) UIImage *fullStarImage; // ivar: _fullStarImage
@property (retain, nonatomic) UIImage *halfStarHighlightedImage; // ivar: _halfStarHighlightedImage
@property (retain, nonatomic) UIImage *halfStarImage; // ivar: _halfStarImage
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (nonatomic) NSUInteger numberOfRatingLevels; // ivar: _numLevels
@property (nonatomic) CGFloat rating; // ivar: _rating
@property (nonatomic) NSInteger starStyle; // ivar: _starStyle


+(id)colorForRating:(CGFloat)arg0 ;
+(id)emptyStarTextAttachmentWithFont:(id)arg0 ;
+(id)fullStarTextAttachmentWithFont:(id)arg0 ;
+(id)halfStarTextAttachmentWithFont:(id)arg0 ;
+(id)ratingAsAttributedString:(CGFloat)arg0 baseFont:(id)arg1 style:(NSInteger)arg2 theme:(id)arg3 ;
+(id)ratingShortAsAttributedString:(CGFloat)arg0 baseFont:(id)arg1 theme:(id)arg2 ;
+(id)textAttachmentimageNamed:(id)arg0 font:(id)arg1 ;
-(CGFloat)verticalAlignmentCenterPercentage;
-(id)imageWithName:(id)arg0 andColor:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(void)_commonInit;
-(void)_layoutStarViewsCreatingIfNeeded:(BOOL)arg0 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)setPadding:(CGFloat)arg0 ;


@end


#endif