// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CMMOTIONALARM_H
#define CMMOTIONALARM_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "CMMotionAlarmManager.h"

@interface CMMotionAlarm : NSObject <NSSecureCoding>



@property (nonatomic) NSUInteger alarmId; // ivar: _alarmId
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) unsigned int duration; // ivar: _duration
@property (retain, nonatomic) CMMotionAlarmManager *manager; // ivar: _manager
@property (readonly, retain, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL repeats; // ivar: _repeats
@property (nonatomic) int state; // ivar: _state
@property (readonly, nonatomic) unsigned int type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)acknowledgeWithError:(*id)arg0 ;
-(BOOL)isValid;
-(BOOL)unregisterWithError:(*id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 type:(unsigned int)arg1 duration:(unsigned int)arg2 repeats:(BOOL)arg3 ;
-(id)initWithName:(id)arg0 type:(unsigned int)arg1 duration:(unsigned int)arg2 repeats:(BOOL)arg3 alarmId:(NSUInteger)arg4 bundleId:(id)arg5 state:(int)arg6 ;
-(void)copyPropertiesFromAlarm:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif