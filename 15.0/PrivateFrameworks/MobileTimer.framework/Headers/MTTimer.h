// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTTIMER_H
#define MTTIMER_H

@class NSString, NSDate, NSDictionary, NSUUID, NSURL;
@protocol MTScheduleable, MTDictionarySerializable, MTTimerIntentSupport, MTSerializable, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding, MTTimerTime;

#import <Foundation/Foundation.h>

#import "MTSound.h"

@interface MTTimer : NSObject <MTScheduleable, MTDictionarySerializable, MTTimerIntentSupport, MTSerializable, NAEquatable, NSCopying, NSMutableCopying, NSSecureCoding>



@property (copy, nonatomic) id *currentDateProvider; // ivar: _currentDateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDate *dismissedDate; // ivar: _dismissedDate
@property (readonly, nonatomic) NSString *displayTitle;
@property (readonly, nonatomic) CGFloat duration;
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) NSDate *fireDate;
@property (copy, nonatomic) NSObject<MTTimerTime> *fireTime; // ivar: _fireTime
@property (copy, nonatomic) NSDate *firedDate; // ivar: _firedDate
@property (readonly, nonatomic, getter=isFiring) BOOL firing;
@property (readonly, nonatomic) BOOL hasDefaultTitle;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) CGFloat remainingTime;
@property (readonly, nonatomic) CGFloat remainingTime;
@property (readonly, nonatomic) NSDictionary *siriContext;
@property (copy, nonatomic) NSDictionary *siriContext; // ivar: _siriContext
@property (copy, nonatomic) MTSound *sound; // ivar: _sound
@property (readonly, nonatomic) NSUInteger state;
@property (nonatomic) NSUInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *timerID;
@property (readonly, nonatomic) NSUUID *timerID; // ivar: _timerID
@property (readonly, nonatomic) NSString *timerIDString;
@property (readonly, nonatomic) NSURL *timerURL;
@property (readonly, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type;


+(BOOL)stateChangeIsAllowableFromState:(NSUInteger)arg0 toState:(NSUInteger)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)_timerTimeForState:(NSUInteger)arg0 remainingTime:(CGFloat)arg1 currentDateProvider:(id)arg2 ;
+(id)currentTimerFromTimers:(id)arg0 ;
+(id)descriptionForState:(NSUInteger)arg0 ;
-(BOOL)_isEqualToTimer:(id)arg0 checkLastModified:(BOOL)arg1 ;
-(BOOL)isCurrentTimer;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualIgnoringLastModifiedDate:(id)arg0 ;
-(BOOL)isEqualToTimer:(id)arg0 ;
-(BOOL)shouldBeScheduled;
-(NSInteger)compare:(id)arg0 ;
-(id)_initCommon;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)identifier;
-(id)initFromDeserializer:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 duration:(CGFloat)arg1 ;
-(id)initWithState:(NSUInteger)arg0 duration:(CGFloat)arg1 currentDateProvider:(id)arg2 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)nextTrigger;
-(id)nextTriggerAfterDate:(id)arg0 ;
-(id)timerByRestarting;
-(id)timerByUpdatingWithState:(NSUInteger)arg0 ;
-(id)upcomingTriggersAfterDate:(id)arg0 ;
-(void)_copyStateOntoTimer:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)serializeWithSerializer:(id)arg0 ;


@end


#endif