// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LRRSAMPLEREPLAYRESULT_H
#define LRRSAMPLEREPLAYRESULT_H

@class NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface LRRSampleReplayResult : NSObject

@property (copy, nonatomic) NSDictionary *comparatorResults; // ivar: _comparatorResults
@property (nonatomic) NSInteger errorCode; // ivar: _errorCode
@property (nonatomic) BOOL evaluated; // ivar: _evaluated
@property (nonatomic) unsigned int repetitionCount; // ivar: _repetitionCount
@property (copy, nonatomic) NSString *replayedRequestId; // ivar: _replayedRequestId
@property (nonatomic) CGFloat requestEndTs; // ivar: _requestEndTs
@property (nonatomic) CGFloat requestStartTs; // ivar: _requestStartTs
@property (copy, nonatomic) NSString *sourceRequestId; // ivar: _sourceRequestId
@property (copy, nonatomic) NSString *strRequestEnd; // ivar: _strRequestEnd
@property (copy, nonatomic) NSString *strRequestStart; // ivar: _strRequestStart
@property (nonatomic) CGFloat timeRequestInterval; // ivar: _timeRequestInterval
@property (nonatomic) BOOL userWasHabitualInSameWeek; // ivar: _userWasHabitualInSameWeek


-(id)init;


@end


#endif