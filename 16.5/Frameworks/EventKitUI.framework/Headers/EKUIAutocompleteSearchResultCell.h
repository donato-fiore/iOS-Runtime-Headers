// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKUIAUTOCOMPLETESEARCHRESULTCELL_H
#define EKUIAUTOCOMPLETESEARCHRESULTCELL_H



#import "EKUITableViewCellWithPrimaryAndSecondaryFonts.h"

@interface EKUIAutocompleteSearchResultCell : EKUITableViewCellWithPrimaryAndSecondaryFonts



+(CGFloat)cellHeightForResult:(id)arg0 forWidth:(CGFloat)arg1 ;
+(CGFloat)verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg0 ;
+(CGFloat)verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg0 ;
+(CGFloat)verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg0 ;
+(id)primaryTextColor;
+(id)secondaryTextColor;
+(id)secondaryTextLabelFont;
-(CGFloat)_verticalSpacingBottomToBaselineForBottomLabel;
-(CGFloat)verticalSpacingTopToBaselineForBottomLabel;
-(CGFloat)verticalSpacingTopToBaselineForTopLabel;
-(CGFloat)verticalSpacingTopToColorDot;
-(id)_createLabelWithColor:(id)arg0 ;
-(id)createPrimaryLabel;
-(id)createSecondaryLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_updateContentForSizeCategoryChange:(id)arg0 ;
-(void)setLabelFonts;
-(void)setupConstraints;
-(void)updateWithResult:(id)arg0 ;


@end


#endif