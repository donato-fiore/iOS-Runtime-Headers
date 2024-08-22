// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOALARM_H
#define SOALARM_H

@class NSUUID, NSURL, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOAlarm : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *alarmID; // ivar: _alarmID
@property (readonly, copy, nonatomic) NSURL *alarmURL; // ivar: _alarmURL
@property (readonly, nonatomic) NSUInteger hour; // ivar: _hour
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isFiring; // ivar: _isFiring
@property (readonly, nonatomic) NSUInteger minute; // ivar: _minute
@property (readonly, nonatomic) NSUInteger repeatSchedule; // ivar: _repeatSchedule
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithAlarmID:(id)arg0 alarmURL:(id)arg1 title:(id)arg2 hour:(NSUInteger)arg3 minute:(NSUInteger)arg4 repeatSchedule:(NSUInteger)arg5 isEnabled:(BOOL)arg6 isFiring:(BOOL)arg7 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif