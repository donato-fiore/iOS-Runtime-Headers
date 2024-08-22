// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFALARMTRIGGER_H
#define WFALARMTRIGGER_H

@class NSArray;


#import "WFTrigger.h"

@interface WFAlarmTrigger : WFTrigger

@property (copy, nonatomic) NSArray *alarmIDs; // ivar: _alarmIDs
@property (nonatomic) NSInteger alarmState; // ivar: _alarmState
@property (nonatomic) NSInteger alarmType; // ivar: _alarmType
@property (copy, nonatomic) NSArray *cachedAlarmDescriptions; // ivar: _cachedAlarmDescriptions


+(BOOL)isAllowedToRunAutomatically;
+(BOOL)supportsSecureCoding;
+(NSInteger)triggerBacking;
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