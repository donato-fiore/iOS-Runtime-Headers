// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EKUIAUTOCOMPLETEOCCURRENCETABLEVIEWCELL_H
#define EKUIAUTOCOMPLETEOCCURRENCETABLEVIEWCELL_H

@class UIImageView, UILabel, NSArray, UIColor, NSString, NSAttributedString;


#import "EKUITableViewCellWithPrimaryAndSecondaryFonts.h"

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUITableViewCellWithPrimaryAndSecondaryFonts {
    UIImageView *_colorDotView;
    UILabel *_titleTextLabel;
    UILabel *_locationTextLabel;
    UILabel *_timeTextLabelWithThisTimeZone;
    UILabel *_timeTextLabelWithResultTimeZone;
    UILabel *_inviteesTextLabel;
    UILabel *_foundInTextLabel;
    NSArray *_secondaryLabels;
    UIColor *_eventCalendarColor;
    NSString *_eventTitle;
    NSAttributedString *_eventLocation;
    NSString *_eventTimeWithThisTimeZone;
    NSString *_eventTimeWithResultTimeZone;
    NSString *_eventInvitees;
    NSString *_eventFoundIn;
    NSArray *_ekUIAutocompleteOccurrenceTableViewCellConstraints;
}




+(BOOL)_shouldShowOtherTimeZoneForResult:(id)arg0 ;
+(CGFloat)_verticalSpacingBottomToBaselineForBottomLabelWithPrimaryFont:(id)arg0 ;
+(CGFloat)_verticalSpacingTopToBaselineForBottomLabelWithSecondaryFont:(id)arg0 ;
+(CGFloat)_verticalSpacingTopToBaselineForTopLabelWithPrimaryFont:(id)arg0 ;
+(CGFloat)cellHeightForResult:(id)arg0 forWidth:(CGFloat)arg1 ;
+(id)_foundInStringForResult:(id)arg0 ;
+(id)_inviteeStringForResult:(id)arg0 ;
+(id)_locationStringForResult:(id)arg0 ;
+(id)_timeStringForResult:(id)arg0 usingTimeZone:(id)arg1 ;
+(id)_titleStringForResult:(id)arg0 ;
+(id)primaryTextColor;
+(id)reuseIdentifier;
+(id)secondaryTextColor;
+(id)secondaryTextLabelFont;
-(CGFloat)_verticalSpacingBottomToBaselineForBottomLabel;
-(CGFloat)_verticalSpacingTopToBaselineForBottomLabel;
-(CGFloat)_verticalSpacingTopToBaselineForTopLabel;
-(CGFloat)_verticalSpacingTopToColorDot;
-(id)_createLabelWithColor:(id)arg0 ;
-(id)_createPrimaryLabel;
-(id)_createSecondaryLabel;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addConstraintsForLabel:(id)arg0 belowView:(id)arg1 toArray:(id)arg2 ;
-(void)_setLabelFonts;
-(void)_setupConstraints;
-(void)_updateContentForSizeCategoryChange:(id)arg0 ;
-(void)updateWithResult:(id)arg0 ;


@end


#endif