// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDMODECONFIGURATIONSCHEDULETRIGGER_H
#define DNDMODECONFIGURATIONSCHEDULETRIGGER_H

@class NSDate;


#import "DNDModeConfigurationTrigger.h"
#import "DNDScheduleTimePeriod.h"

@interface DNDModeConfigurationScheduleTrigger : DNDModeConfigurationTrigger {
    NSDate *_creationdate;
}


@property (readonly, copy, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, copy, nonatomic) DNDScheduleTimePeriod *timePeriod; // ivar: _timePeriod


+(BOOL)supportsSecureCoding;
+(id)defaultScheduleTrigger;
+(id)triggerWithClientTrigger:(id)arg0 creationDate:(id)arg1 ;
-(BOOL)isEnabled;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTimePeriod:(id)arg0 creationDate:(id)arg1 enabledSetting:(NSUInteger)arg2 ;
-(id)initWithTimePeriod:(id)arg0 enabledSetting:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif