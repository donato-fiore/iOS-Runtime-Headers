// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REUPNEXTTHUMBNAILCELL_H
#define REUPNEXTTHUMBNAILCELL_H

@class UILayoutGuide, UIImageView, UILabel, UIVisualEffectView, UIFont, NSArray, NSLayoutConstraint;


#import "REUpNextBaseCell.h"

@interface REUpNextThumbnailCell : REUpNextBaseCell {
    UILayoutGuide *_labelLayoutGuide;
    UIImageView *_imageView;
    UILabel *_headerLabel;
    UILabel *_descriptionLine1Label;
    UILabel *_descriptionLine2Label;
    UIVisualEffectView *_headerEffectView;
    UIVisualEffectView *_descriptionLine1EffectView;
    UIVisualEffectView *_descriptionLine2EffectView;
    UIVisualEffectView *_imageEffectView;
    UIFont *_standardFont;
    UIFont *_italicFont;
    UIFont *_boldFont;
    NSArray *_withHeaderConstraints;
    NSArray *_withoutHeaderConstraints;
    NSArray *_withDescription2Constraints;
    NSArray *_withoutDescription2Constraints;
    NSLayoutConstraint *_imageWidthConstraint;
    NSLayoutConstraint *_imageHeightConstraint;
    BOOL _showingHeader;
    BOOL _showingThreeLineLayout;
}




+(void)initialize;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)primaryEffectViews;
-(id)secondaryEffectViews;
-(void)configureWithContent:(id)arg0 ;
-(void)defaultTextColorDidChange;
-(void)updateConstraints;


@end


#endif