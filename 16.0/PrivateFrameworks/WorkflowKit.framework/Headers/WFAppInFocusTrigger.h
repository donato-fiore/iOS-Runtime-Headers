// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFAPPINFOCUSTRIGGER_H
#define WFAPPINFOCUSTRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFAppInFocusTrigger : WFTrigger

@property (nonatomic) BOOL onBackground; // ivar: _onBackground
@property (nonatomic) BOOL onFocus; // ivar: _onFocus
@property (copy, nonatomic) NSArray *selectedBundleIdentifiers; // ivar: _selectedBundleIdentifiers


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphName;
+(id)displayGlyphTintColor;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)offIcon;
+(id)offIconTintColor;
+(id)offLabel;
+(id)onIcon;
+(id)onIconTintColor;
+(id)onLabel;
+(id)tintColor;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif