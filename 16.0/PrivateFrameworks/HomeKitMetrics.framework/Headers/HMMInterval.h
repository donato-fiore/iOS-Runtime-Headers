// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMMINTERVAL_H
#define HMMINTERVAL_H

@class NSString, NSNumber;

#import <Foundation/Foundation.h>


@interface HMMInterval : NSObject

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