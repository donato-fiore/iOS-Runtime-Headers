// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PSCAPACITYBARCELL_H
#define PSCAPACITYBARCELL_H

@class NSMutableArray, NSLayoutConstraint, UILabel, UIStackView, NSArray, UIFont, UIColor, NSString;


#import "PSTableCell.h"
#import "PSCapacityBarView.h"
#import "PSCapacityBarLegendView.h"

@interface PSCapacityBarCell : PSTableCell {
    CGFloat _tableWidth;
    NSMutableArray *_normalConstraints;
    NSMutableArray *_largeConstraints;
    NSMutableArray *_legendConstraints;
    NSMutableArray *_commonConstraints;
    NSLayoutConstraint *_barHeightConstraint;
    UILabel *_titleLabel;
    UILabel *_sizeLabel;
    UILabel *_loadingLabel;
    PSCapacityBarView *_barView;
    UIStackView *_legendView;
    NSArray *_legends;
    PSCapacityBarLegendView *_otherLegend;
    UIFont *_legendFont;
    UIFont *_bigFont;
    UIColor *_legendTextColor;
    BOOL _hideLegend;
    BOOL _showOtherLegend;
    BOOL _forceLoading;
    BOOL _sizesAreMem;
    NSString *_sizeFormat;
}




+(id)specifierWithTitle:(id)arg0 ;
+(id)specifierWithTitle:(id)arg0 useStandardFontSizeForSizeLabel:(BOOL)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 specifier:(id)arg2 ;
-(id)usageString:(id)arg0 ;
-(void)addHorizontalLegends;
-(void)addVerticalLegends;
-(void)createCommonConstraints;
-(void)createLargeConstraints;
-(void)createLegends:(id)arg0 ;
-(void)createNormalConstraints;
-(void)initializeViews;
-(void)refreshCellContentsWithSpecifier:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateConstraints;


@end


#endif