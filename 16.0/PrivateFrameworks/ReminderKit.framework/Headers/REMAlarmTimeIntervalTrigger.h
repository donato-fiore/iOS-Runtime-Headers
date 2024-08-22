// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REMALARMTIMEINTERVALTRIGGER_H
#define REMALARMTIMEINTERVALTRIGGER_H

@protocol NSSecureCoding;


#import "REMAlarmTrigger.h"

@interface REMAlarmTimeIntervalTrigger : REMAlarmTrigger <NSSecureCoding>



@property (nonatomic) CGFloat timeInterval; // ivar: _timeInterval


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isTemporal;
-(NSUInteger)hash;
-(id)_deepCopy;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 timeInterval:(CGFloat)arg1 ;
-(id)initWithTimeInterval:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif