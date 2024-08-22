// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFMESSAGETRIGGER_H
#define WFMESSAGETRIGGER_H

@class NSString, NSArray;


#import "WFTrigger.h"

@interface WFMessageTrigger : WFTrigger

@property (retain, nonatomic) NSString *selectedContents; // ivar: _selectedContents
@property (retain, nonatomic) NSArray *selectedSenders; // ivar: _selectedSenders
@property (retain, nonatomic) NSArray *selectedSendersStrings; // ivar: _selectedSendersStrings


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyph;
+(id)displayGlyphTintColor;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)messagesGreen;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedDescriptionWithConfigurationSummaryWithCount:(NSUInteger)arg0 ;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif