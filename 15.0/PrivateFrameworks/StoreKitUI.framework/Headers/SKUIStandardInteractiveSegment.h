// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISTANDARDINTERACTIVESEGMENT_H
#define SKUISTANDARDINTERACTIVESEGMENT_H

@class UIControl, UIView, UIImage, UIImageView, CAMediaTimingFunction, UILabel, NSAttributedString, NSString;
@protocol SKUIInteractiveSegmenting;



@interface SKUIStandardInteractiveSegment : UIControl <SKUIInteractiveSegmenting>

 {
    UIView *_borderAndBackgroundContainerView;
    UIImage *_backgroundImage;
    UIImage *_borderImage;
    UIImageView *_borderImageView;
    BOOL _hasDirtyTitleLabelSize;
    BOOL _hasSetRelativeSelectionProgress;
    BOOL _hasValidCorneredImages;
    UIImageView *_highlightedBackgroundImageView;
    NSInteger _highlightTransactionCount;
    CAMediaTimingFunction *_inverseProgressTimingFunction;
    UIImageView *_selectedBackgroundImageView;
    CAMediaTimingFunction *_progressTimingFunction;
    CGFloat _relativeSelectionProgress;
    NSInteger _segmentPosition;
    UILabel *_titleLabel;
    NSAttributedString *_titleLabelAttributedString;
    CGSize _titleLabelSize;
}


@property (copy, nonatomic) NSAttributedString *attributedTitle; // ivar: _attributedTitle
@property (nonatomic) UIEdgeInsets contentEdgeInsets; // ivar: _contentEdgeInsets
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat relativeSelectionProgress;
@property (nonatomic) NSInteger segmentPosition;
@property (readonly) Class superclass;


+(CGFloat)defaultHeight;
-(CGFloat)_normalizedSelectionProgressForRelativeSelectionProgress:(CGFloat)arg0 ;
-(NSUInteger)_cornersForSegmentPosition:(NSInteger)arg0 ;
-(id)_backgroundImage;
-(id)_borderImage;
-(id)_createCorneredImageWithScale:(CGFloat)arg0 forBorder:(BOOL)arg1 ;
-(id)_inverseProgressTimingFunction;
-(id)_progressTimingFunction;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )_titleLabelSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applySelectionProgress;
-(void)_reloadCorneredImages;
-(void)_setNeedsReloadCorneredImages;
-(void)_updateBorderAndBackgroundContainerViewTinting;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)tintColorDidChange;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif