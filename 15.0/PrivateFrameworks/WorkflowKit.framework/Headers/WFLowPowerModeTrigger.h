// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFLOWPOWERMODETRIGGER_H
#define WFLOWPOWERMODETRIGGER_H



#import "WFTrigger.h"

@interface WFLowPowerModeTrigger : WFTrigger

@property (nonatomic) BOOL onDisable; // ivar: _onDisable
@property (nonatomic) BOOL onEnable; // ivar: _onEnable


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isUserInitiated;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphHierarchicalColors;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
+(id)offIcon;
+(id)offLabel;
+(id)onIcon;
+(id)onLabel;
+(id)yellowBatteryHierarchicalColors;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif