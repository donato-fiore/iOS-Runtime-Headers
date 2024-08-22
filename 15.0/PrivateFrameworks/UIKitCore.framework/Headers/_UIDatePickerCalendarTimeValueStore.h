// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIDATEPICKERCALENDARTIMEVALUESTORE_H
#define _UIDATEPICKERCALENDARTIMEVALUESTORE_H


#import <Foundation/Foundation.h>

#import "_UIDatePickerCalendarTimeFormat.h"

@interface _UIDatePickerCalendarTimeValueStore : NSObject

@property (nonatomic) NSInteger decrementBehaviour; // ivar: _decrementBehaviour
@property (nonatomic) NSUInteger hourValue;
@property (readonly, nonatomic) *NSUInteger inputBuffer; // ivar: _inputBuffer
@property (nonatomic) BOOL isPM; // ivar: _isPM
@property (nonatomic) NSInteger minuteInterval; // ivar: _minuteInterval
@property (nonatomic) NSUInteger minuteValue;
@property (readonly, nonatomic) _UIDatePickerCalendarTimeFormat *timeFormat; // ivar: _timeFormat


-(BOOL)roundToMinuteInterval;
-(NSUInteger)__integerInBufferWithRange:(struct _NSRange )arg0 ;
-(NSUInteger)digitsInScope:(NSInteger)arg0 ;
-(id)initWithTimeFormat:(id)arg0 ;
-(id)initWithTimeFormat:(id)arg0 minuteInterval:(NSInteger)arg1 decrementBehaviour:(NSInteger)arg2 ;
-(void)__setIntegerInBuffer:(NSUInteger)arg0 range:(struct _NSRange )arg1 ;
-(void)_removeLastDigitInRange:(struct _NSRange )arg0 ;
-(void)_setDigits:(NSUInteger)arg0 count:(NSUInteger)arg1 inRange:(struct _NSRange )arg2 append:(BOOL)arg3 ;
-(void)_verifyInputWithScope:(NSInteger)arg0 ;
-(void)dealloc;
-(void)decrementDigitForScope:(NSInteger)arg0 ;
-(void)incrementDigitForScope:(NSInteger)arg0 ;
-(void)removeLastDigitInScope:(NSInteger)arg0 ;
-(void)setDigits:(NSUInteger)arg0 count:(NSUInteger)arg1 inScope:(NSInteger)arg2 append:(BOOL)arg3 ;


@end


#endif