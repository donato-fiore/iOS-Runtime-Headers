// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MMCSOPERATIONSTATETIMERANGE_H
#define MMCSOPERATIONSTATETIMERANGE_H

@class NSString, NSDate;
@protocol MMCSOperationStateTimeRange;

#import <Foundation/Foundation.h>


@interface MMCSOperationStateTimeRange : NSObject <MMCSOperationStateTimeRange>



@property (readonly) CGFloat absoluteStart;
@property (readonly) CGFloat absoluteStop;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat duration; // ivar: _duration
@property (readonly) CGFloat executing;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger operationState; // ivar: _operationState
@property (readonly) CGFloat queueing;
@property (readonly) CGFloat relativeStart;
@property (retain, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly) Class superclass;


+(id)describedSortedRanges:(id)arg0 ;
+(id)descriptionWithOperationState:(NSUInteger)arg0 absoluteStart:(CGFloat)arg1 duration:(CGFloat)arg2 ;
+(id)stringForOperationState:(NSUInteger)arg0 ;
-(NSInteger)compareStartTime:(id)arg0 ;
-(NSInteger)compareStopTime:(id)arg0 ;
-(id)initWithOperationState:(NSUInteger)arg0 startDate:(id)arg1 duration:(CGFloat)arg2 ;


@end


#endif