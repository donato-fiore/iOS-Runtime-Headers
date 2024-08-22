// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFCLOCKALARM_H
#define AFCLOCKALARM_H

@class NSUUID, NSURL, NSString, NSDate;
@protocol AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFClockAlarm : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy, nonatomic) NSUUID *alarmID; // ivar: _alarmID
@property (readonly, copy, nonatomic) NSURL *alarmURL; // ivar: _alarmURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate; // ivar: _dismissedDate
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *firedDate; // ivar: _firedDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger hour; // ivar: _hour
@property (readonly, nonatomic) BOOL isEnabled; // ivar: _isEnabled
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, nonatomic) BOOL isFiring; // ivar: _isFiring
@property (readonly, nonatomic) BOOL isSnoozed; // ivar: _isSnoozed
@property (readonly, nonatomic) NSUUID *itemID;
@property (readonly, nonatomic) NSURL *itemURL;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSUInteger minute; // ivar: _minute
@property (readonly, nonatomic) NSUInteger repeatOptions; // ivar: _repeatOptions
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithAlarmID:(id)arg0 alarmURL:(id)arg1 isFiring:(BOOL)arg2 title:(id)arg3 type:(NSUInteger)arg4 hour:(NSUInteger)arg5 minute:(NSUInteger)arg6 repeatOptions:(NSUInteger)arg7 isEnabled:(BOOL)arg8 isSnoozed:(BOOL)arg9 firedDate:(id)arg10 dismissedDate:(id)arg11 lastModifiedDate:(id)arg12 ;
-(id)initWithBuilder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif