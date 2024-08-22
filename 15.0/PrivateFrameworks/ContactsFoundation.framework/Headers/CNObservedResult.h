// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNOBSERVEDRESULT_H
#define CNOBSERVEDRESULT_H


#import <Foundation/Foundation.h>


@interface CNObservedResult : NSObject

@property (readonly) BOOL isResultEvent;
@property (readonly) NSUInteger logTime; // ivar: _logTime
@property (readonly) id *logValue;
@property (readonly) NSUInteger time; // ivar: _time
@property (readonly) NSUInteger tolerance; // ivar: _tolerance
@property (readonly) id *value; // ivar: _value


+(BOOL)rangeWouldOverflowWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
+(BOOL)rangeWouldUnderflowWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
+(id)completionResultWithTime:(NSUInteger)arg0 ;
+(id)completionResultWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
+(id)completionResultWithTimeInterval:(CGFloat)arg0 tolerance:(CGFloat)arg1 ;
+(id)failureWithError:(id)arg0 time:(NSUInteger)arg1 ;
+(id)failureWithError:(id)arg0 time:(NSUInteger)arg1 tolerance:(NSUInteger)arg2 ;
+(id)failureWithError:(id)arg0 timeInterval:(CGFloat)arg1 tolerance:(CGFloat)arg2 ;
+(id)resultWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 value:(id)arg2 ;
+(id)resultWithTime:(NSUInteger)arg0 value:(id)arg1 ;
+(id)resultWithTimeInterval:(CGFloat)arg0 tolerance:(CGFloat)arg1 value:(id)arg2 ;
+(struct _NSRange )overflowSafeRangeWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
+(struct _NSRange )rangeWithExactTime:(NSUInteger)arg0 ;
+(struct _NSRange )rangeWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
+(struct _NSRange )underflowSafeRangeWithTime:(NSUInteger)arg0 tolerance:(NSUInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)formattedTimeString;
-(id)initWithValue:(id)arg0 time:(NSUInteger)arg1 tolerance:(NSUInteger)arg2 ;


@end


#endif