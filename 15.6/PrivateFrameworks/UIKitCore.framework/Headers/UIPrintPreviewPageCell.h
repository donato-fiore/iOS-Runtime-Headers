// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIPRINTPREVIEWPAGECELL_H
#define UIPRINTPREVIEWPAGECELL_H

@class NSString;
@protocol UIGestureRecognizerDelegate, UIPrintPreviewDelegate;


#import "UICollectionViewCell.h"
#import "UIView.h"
#import "UIImageView.h"
#import "UILabel.h"
#import "UITapGestureRecognizer.h"

@interface UIPrintPreviewPageCell : UICollectionViewCell <UIGestureRecognizerDelegate>



@property (retain, nonatomic) UIView *checkmarkBackgroundImageView; // ivar: _checkmarkBackgroundImageView
@property (retain, nonatomic) UIView *checkmarkImageView; // ivar: _checkmarkImageView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UIView *dimmingView; // ivar: _dimmingView
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize imageSize; // ivar: _imageSize
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) CGFloat minPageWidth; // ivar: _minPageWidth
@property (nonatomic) NSInteger pageCount; // ivar: _pageCount
@property (nonatomic) NSInteger pageIndex; // ivar: _pageIndex
@property (retain, nonatomic) UILabel *pageLabel; // ivar: _pageLabel
@property (retain, nonatomic) UIView *pageLabelAndChekmarkView; // ivar: _pageLabelAndChekmarkView
@property (retain, nonatomic) UIView *pageLabelBackgroundBlurView; // ivar: _pageLabelBackgroundBlurView
@property (weak, nonatomic) NSObject<UIPrintPreviewDelegate> *printPrevieweDelegate; // ivar: _printPrevieweDelegate
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer


-(BOOL)locationInTapTargetOfPageLabelBadge:(struct CGPoint )arg0 ;
-(id)accessibilityHint;
-(id)accessibilityValue;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pageLabelText:(NSInteger)arg0 ;
-(void)addPageLabelAndImageView:(BOOL)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)layoutSubviews;
-(void)pageBadgeTapped:(id)arg0 ;
-(void)prepareForReuse;
-(void)setInRange:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif