// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKUPNEXTTHUMBNAILCELL_H
#define NTKUPNEXTTHUMBNAILCELL_H

@class UILayoutGuide, CLKFont, NSArray, NSLayoutConstraint, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"
#import "NTKUpNextImageView.h"
#import "NTKColoringLabel.h"

@interface NTKUpNextThumbnailCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>

 {
    UILayoutGuide *_labelLayoutGuide;
    UILayoutGuide *_imageLayoutGuide;
    NTKUpNextImageView *_imageView;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKColoringLabel *_descriptionLine3Label;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescription3Constraints;
    NSArray *_withoutDescription3Constraints;
    NSLayoutConstraint *_imageLayoutGuideWidthConstraint;
    NSLayoutConstraint *_imageLayoutGuideHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThirdLine;
    BOOL _showingSmallThumbnail;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(struct CGSize )suggestedBodyImageSizeForDevice:(id)arg0 ;
-(id)colorForView:(id)arg0 accented:(BOOL)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 ;
-(id)filterForView:(id)arg0 style:(NSInteger)arg1 fraction:(CGFloat)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureWithContent:(id)arg0 ;
-(void)prepareForReuse;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateConstraints;
-(void)updateMonochromeColor;


@end


#endif