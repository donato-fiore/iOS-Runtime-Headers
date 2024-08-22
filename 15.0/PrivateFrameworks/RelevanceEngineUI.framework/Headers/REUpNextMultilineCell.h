// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REUPNEXTMULTILINECELL_H
#define REUPNEXTMULTILINECELL_H

@class UILayoutGuide, UILabel, UIVisualEffectView, UIFont, NSArray;


#import "REUpNextBaseCell.h"
#import "REUpNextImageView.h"
#import "REUpNextAccessoryView.h"

@interface REUpNextMultilineCell : REUpNextBaseCell {
    UILayoutGuide *_contentLayoutGuide;
    UILayoutGuide *_descriptionTextLayoutGuide;
    UILayoutGuide *_bodyImageSizingLayoutGuide;
    BOOL _showingHeader;
    BOOL _showingHeaderImage;
    BOOL _showingThreeLineLayout;
    BOOL _showingAccessory;
    BOOL _showingDescriptionImage;
    BOOL _usingStretchableImage;
    unsigned int _headerImageEdge;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerImageEffectView;
    UIVisualEffectView *_headerVisualEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    REUpNextImageView *_headerImage;
    REUpNextAccessoryView *_accessoryView;
    REUpNextImageView *_descriptionImageView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_headerWithLeftImageConstraints;
    NSArray *_headerWithRightImageConstraints;
    NSArray *_headerWithNoImageConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSArray *_withDescriptionAccessoryConstraints;
    NSArray *_withoutDescriptionAccessoryConstraints;
    NSArray *_withDescriptionImageViewConstraints;
    NSArray *_withStretchableDescriptionImageViewConstraints;
    NSArray *_withoutDescriptionImageViewConstraints;
}




+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)_updateHeaderColor;
-(void)configureWithContent:(id)arg0 ;
-(void)defaultTextColorDidChange;
-(void)updateConstraints;


@end


#endif