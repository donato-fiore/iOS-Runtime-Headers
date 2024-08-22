// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __CFN_TASKMETRICS_H
#define __CFN_TASKMETRICS_H

@class NSUUID, NSMutableArray, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "__CFN_TransactionMetrics.h"

@interface __CFN_TaskMetrics : NSObject <NSSecureCoding>

 {
    os_unfair_lock_s _lock;
    BOOL _ignoreNextRedirection;
    int _pidForHAR;
    NSUUID *_UUID;
    NSUInteger _identifier;
    NSMutableArray *_transactionMetrics;
    CGFloat _createTime;
    CGFloat _firstResumeTime;
    CGFloat _completeTime;
    NSInteger _options;
    NSString *_sourceApplicationBundleIdentifier;
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