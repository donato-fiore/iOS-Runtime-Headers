// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFCLOCKTIMER_H
#define AFCLOCKTIMER_H

@class NSString, NSDate, NSUUID, NSURL;
@protocol AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible;

#import <Foundation/Foundation.h>


@interface AFClockTimer : NSObject <AFClockItem, NSCopying, NSSecureCoding, AFDictionaryConvertible>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSDate *dismissedDate;
@property (readonly, copy, nonatomic) NSDate *dismissedDate; // ivar: _dismissedDate
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, copy, nonatomic) NSDate *fireDate; // ivar: _fireDate
@property (readonly, nonatomic) CGFloat fireTimeInterval; // ivar: _fireTimeInterval
@property (readonly, copy, nonatomic) NSDate *firedDate;
@property (readonly, copy, nonatomic) NSDate *firedDate; // ivar: _firedDate
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFiring;
@property (readonly, nonatomic) BOOL isFiring; // ivar: _isFiring
@property (readonly, nonatomic) NSUUID *itemID;
@property (readonly, nonatomic) NSURL *itemURL;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, copy, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSInteger state; // ivar: _state
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *timerID; // ivar: _timerID
@property (readonly, copy, nonatomic) NSURL *timerURL; // ivar: _timerURL
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)buildDictionaryRepresentation;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithTimerID:(id)arg0 timerURL:(id)arg1 isFiring:(BOOL)arg2 title:(id)arg3 state:(NSInteger)arg4 duration:(CGFloat)arg5 type:(NSInteger)arg6 fireTimeInterval:(CGFloat)arg7 fireDate:(id)arg8 firedDate:(id)arg9 dismissedDate:(id)arg10 lastModifiedDate:(id)arg11 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif