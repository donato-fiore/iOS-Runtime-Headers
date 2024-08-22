// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIAUTOCOMPLETEOCCURRENCETABLEVIEWCELL_H
#define EKUIAUTOCOMPLETEOCCURRENCETABLEVIEWCELL_H

@class UIImageView, UILabel, NSArray, UIColor, NSString, NSAttributedString;


#import "EKUIAutocompleteSearchResultCell.h"

@interface EKUIAutocompleteOccurrenceTableViewCell : EKUIAutocompleteSearchResultCell {
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
    NSAttributedString *_eventFoundIn;
    NSArray *_ekUIAutocompleteOccurrenceTableViewCellConstraints;
}




+(BOOL)_shouldShowOtherTimeZoneForResult:(id)arg0 ;
+(CGFloat)cellHeightForResult:(id)arg0 forWidth:(CGFloat)arg1 ;
+(id)_foundInStringForResult:(id)arg0 pasteboardEvent:(BOOL)arg1 ;
+(id)_inviteeStringForResult:(id)arg0 ;
+(id)_locationStringForResult:(id)arg0 ;
+(id)_timeStringForResult:(id)arg0 usingTimeZone:(id)arg1 ;
+(id)_titleStringForResult:(id)arg0 ;
+(id)reuseIdentifier;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)_addConstraintsForLabel:(id)arg0 belowView:(id)arg1 toArray:(id)arg2 ;
-(void)setLabelFonts;
-(void)setupConstraints;
-(void)updateWithResult:(id)arg0 ;


@end


#endif