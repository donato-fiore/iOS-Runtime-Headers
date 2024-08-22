// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LBFBUCKET_H
#define LBFBUCKET_H

@class NSDate, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface LBFBucket : NSObject

@property (nonatomic) NSUInteger bucketIndex; // ivar: _bucketIndex
@property (readonly, nonatomic) NSDate *endTime; // ivar: _endTime
@property (retain, nonatomic) NSMutableDictionary *eventTree; // ivar: _eventTree
@property (readonly, nonatomic) NSDate *startTime; // ivar: _startTime


-(id)flattenEvents;
-(id)initWithInterval:(id)arg0 endTimestamp:(id)arg1 index:(NSUInteger)arg2 ;


@end


#endif