// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFEMAILTRIGGER_H
#define WFEMAILTRIGGER_H

@class NSArray, NSString;


#import "WFTrigger.h"

@interface WFEmailTrigger : WFTrigger

@property (retain, nonatomic) NSArray *selectedAccountDescriptions; // ivar: _selectedAccountDescriptions
@property (retain, nonatomic) NSArray *selectedAccountIdentifiers; // ivar: _selectedAccountIdentifiers
@property (retain, nonatomic) NSArray *selectedRecipients; // ivar: _selectedRecipients
@property (retain, nonatomic) NSArray *selectedSenders; // ivar: _selectedSenders
@property (retain, nonatomic) NSString *selectedSubject; // ivar: _selectedSubject


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)displayGlyphTintColor;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)mailBlue;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedDescriptionWithConfigurationSummaryWithCount:(NSUInteger)arg0 ;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif