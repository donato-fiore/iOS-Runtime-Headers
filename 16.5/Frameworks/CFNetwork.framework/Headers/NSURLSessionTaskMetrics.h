// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSURLSESSIONTASKMETRICS_H
#define NSURLSESSIONTASKMETRICS_H

@class NSDateInterval, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "__CFN_TaskMetrics.h"

@interface NSURLSessionTaskMetrics : NSObject <NSSecureCoding>

 {
    __CFN_TaskMetrics *__metrics;
}


@property (readonly) NSUInteger redirectCount;
@property (readonly, copy) NSDateInterval *taskInterval;
@property (readonly, copy) NSArray *transactionMetrics;


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif