// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMOBILETIMEROBJECT_H
#define HUMOBILETIMEROBJECT_H

@class MTAlarm, MTTimer, NSUUID;

#import <Foundation/Foundation.h>


@interface HUMobileTimerObject : NSObject

@property (readonly, nonatomic) MTAlarm *alarm; // ivar: _alarm
@property (readonly, nonatomic) MTTimer *timer; // ivar: _timer
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


-(BOOL)_alarmIDsMatch:(id)arg0 ;
-(BOOL)_timerIDsMatch:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isIgnorableTimerObject;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithAlarm:(id)arg0 ;
-(id)initWithTimer:(id)arg0 ;


@end


#endif