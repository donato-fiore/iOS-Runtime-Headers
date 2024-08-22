// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef __CFN_TASKMETRICS_H
#define __CFN_TASKMETRICS_H

@class NSUUID, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "__CFN_SessionMetrics.h"
#import "__CFN_TransactionMetrics.h"

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    BOOL _ignoreNextRedirection;
    int _pidForHAR;
    __CFN_SessionMetrics *_sessionMetrics;
    NSUUID *_UUID;
    NSUInteger _identifier;
    NSMutableArray *_transactionMetrics;
    CGFloat _createTime;
    CGFloat _firstResumeTime;
    CGFloat _completeTime;
    NSInteger _options;
    NSInteger _schedulingTier;
    __CFN_TransactionMetrics *_currentTransactionMetrics;
}


@property (readonly) __CFN_TransactionMetrics *_daemon_currentTransactionMetrics;
@property (readonly, nonatomic) NSMutableArray *_daemon_transactionMetrics;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif