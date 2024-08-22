// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFAPPINBACKGROUNDTRIGGER_H
#define WFAPPINBACKGROUNDTRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFAppInBackgroundTrigger : WFTrigger

@property (copy, nonatomic) NSArray *selectedBundleIdentifiers; // ivar: _selectedBundleIdentifiers


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)awakeAfterUsingCoder:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif