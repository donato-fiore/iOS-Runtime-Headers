// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDNDTRIGGER_H
#define WFDNDTRIGGER_H



#import "WFTrigger.h"

@interface WFDNDTrigger : WFTrigger

@property (nonatomic) BOOL onDisable; // ivar: _onDisable
@property (nonatomic) BOOL onEnable; // ivar: _onEnable


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