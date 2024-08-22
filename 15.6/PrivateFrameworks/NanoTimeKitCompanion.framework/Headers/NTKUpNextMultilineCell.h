// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKUPNEXTMULTILINECELL_H
#define NTKUPNEXTMULTILINECELL_H

@class UILayoutGuide, UIView, CLKFont, NSArray, NSString;
@protocol CLKMonochromeFilterProvider;


#import "NTKUpNextBaseCell.h"
#import "NTKColoringLabel.h"
#import "NTKUpNextImageView.h"

@interface NTKUpNextMultilineCell : NTKUpNextBaseCell <CLKMonochromeFilterProvider>

 {
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    BOOL _showingHeader;
    BOOL _showingHeaderImage;
    BOOL _showingThirdLine;
    BOOL _showingDescriptionAccessory;
    BOOL _showingImageAccessory;
    BOOL _showingDescriptionImage;
    BOOL _usingStretchableImage;
    unsigned int _headerImageEdge;
    NTKColoringLabel *_headerLabel;
    NTKColoringLabel *_descriptionLine1Label;
    NTKColoringLabel *_descriptionLine2Label;
    NTKUpNextImageView *_headerImage;
    UIView *_accessoryView;
    NTKUpNextImageView *_descriptionImageView;
    CLKFont *_standardFont;
    CLKFont *_italicFont;
    CLKFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withAccessoryConstraints;
    NSArray *_withoutAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
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
-(void)setFilterProvider:(id)arg0 ;
-(void)setPaused:(BOOL)arg0 ;
-(void)transitionToMonochromeWithFraction:(CGFloat)arg0 ;
-(void)updateConstraints;
-(void)updateMonochromeColor;


@end


#endif