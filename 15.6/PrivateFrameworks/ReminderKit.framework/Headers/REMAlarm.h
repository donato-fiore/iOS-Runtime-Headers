// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMALARM_H
#define REMALARM_H

@class NSDate, NSString;
@protocol REMObjectIDProviding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "REMObjectID.h"
#import "REMAlarmTrigger.h"

@interface REMAlarm : NSObject <REMObjectIDProviding, NSSecureCoding>



@property (retain, nonatomic) NSDate *acknowledgedDate; // ivar: _acknowledgedDate
@property (retain, nonatomic) NSString *alarmUID; // ivar: _alarmUID
@property (retain, nonatomic) REMObjectID *objectID; // ivar: _objectID
@property (retain, nonatomic) NSString *originalAlarmUID; // ivar: _originalAlarmUID
@property (readonly, nonatomic) REMObjectID *remObjectID;
@property (retain, nonatomic) REMAlarmTrigger *trigger; // ivar: _trigger


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
+(id)newObjectID;
+(id)objectIDWithUUID:(id)arg0 ;
-(BOOL)isAcknowledged;
-(BOOL)isContentEqual:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOriginal;
-(BOOL)isSnooze;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAlarm:(id)arg0 objectID:(id)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTrigger:(id)arg0 ;
-(id)initWithTrigger:(id)arg0 objectID:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif