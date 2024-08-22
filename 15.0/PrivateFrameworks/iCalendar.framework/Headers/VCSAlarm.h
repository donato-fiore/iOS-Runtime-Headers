// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VCSALARM_H
#define VCSALARM_H

@class NSString;


#import "VCSEntity.h"
#import "VCSDate.h"

@interface VCSAlarm : VCSEntity

@property (readonly, nonatomic) NSUInteger alarmType; // ivar: _alarmType
@property (readonly, nonatomic) NSString *body; // ivar: _body
@property (readonly, nonatomic) NSString *summary; // ivar: _summary
@property (readonly, nonatomic) VCSDate *triggerDate; // ivar: _triggerDate
@property (readonly, nonatomic) CGFloat triggerDuration; // ivar: _triggerDuration
@property (readonly, nonatomic) NSUInteger triggerType; // ivar: _triggerType


+(id)_componentsWithISO8601DurationString:(id)arg0 ;
-(NSUInteger)entityType;
-(id)dictify;
-(id)initWithLine:(id)arg0 parseState:(id)arg1 property:(struct ? *)arg2 ;
-(void)ensureRelativeAlarmWithStartDate:(id)arg0 ;


@end


#endif