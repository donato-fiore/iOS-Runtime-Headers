// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLSTATE_H
#define SCLSTATE_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCLState : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) NSUInteger activeState; // ivar: _activeState
@property (readonly, nonatomic, getter=isInSchedule) BOOL inSchedule; // ivar: _inSchedule
@property (readonly, nonatomic, getter=isScheduleEnabled) BOOL scheduleEnabled; // ivar: _scheduleEnabled


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithActive:(BOOL)arg0 scheduleEnabled:(BOOL)arg1 inSchedule:(BOOL)arg2 ;
-(id)initWithActiveState:(NSUInteger)arg0 scheduleEnabled:(BOOL)arg1 inSchedule:(BOOL)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif