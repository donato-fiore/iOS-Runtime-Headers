// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFBATTERYLEVELTRIGGER_H
#define WFBATTERYLEVELTRIGGER_H



#import "WFTrigger.h"

@interface WFBatteryLevelTrigger : WFTrigger

@property (nonatomic) NSUInteger level; // ivar: _level
@property (nonatomic) NSUInteger selection; // ivar: _selection


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
+(id)displayGlyphHierarchicalColors;
+(id)displayGlyphName;
+(id)localizedDisplayExplanation;
+(id)localizedDisplayName;
-(BOOL)hasValidConfiguration;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif