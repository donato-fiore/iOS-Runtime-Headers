// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDINTERVAL_H
#define HMDINTERVAL_H

@class HMFObject, NSString, NSNumber;



@interface HMDInterval : HMFObject

@property (readonly) NSString *allNumbersIntervalString;
@property (readonly) NSNumber *end; // ivar: _end
@property (readonly) NSString *negativeInfinityIntervalString;
@property (readonly) NSString *positiveInfinityIntervalString;
@property (readonly) NSString *standardIntervalString;
@property (readonly) NSNumber *start; // ivar: _start


+(id)closedClosedIntervalFromStart:(id)arg0 toEnd:(id)arg1 ;
+(id)closedOpenIntervalFromStart:(id)arg0 toEnd:(id)arg1 ;
+(id)intervalForSingleValue:(id)arg0 ;
+(id)negativeInfinityStart;
+(id)openClosedIntervalFromStart:(id)arg0 toEnd:(id)arg1 ;
+(id)openOpenIntervalFromStart:(id)arg0 toEnd:(id)arg1 ;
+(id)positiveInfinityEnd;
+(void)initialize;
-(id)description;
-(id)initFromStart:(id)arg0 toEnd:(id)arg1 ;
-(id)labelString;


@end


#endif