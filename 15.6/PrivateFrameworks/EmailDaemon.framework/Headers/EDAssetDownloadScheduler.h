// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDASSETDOWNLOADSCHEDULER_H
#define EDASSETDOWNLOADSCHEDULER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDAssetDownloadScheduler : NSObject

@property (nonatomic) NSInteger _backOffFactor; // ivar: _backOffFactor
@property (nonatomic) NSInteger _failureInterval; // ivar: _failureInterval
@property (copy, nonatomic) id *_handler; // ivar: _handler
@property (copy, nonatomic) NSString *_identifier; // ivar: _identifier
@property (copy, nonatomic) NSString *_lastFailureIntervalKey; // ivar: _lastFailureIntervalKey
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_queue; // ivar: _queue
@property (nonatomic) NSInteger _regularInterval; // ivar: _regularInterval
@property (readonly, nonatomic) id *activityHandlerBlock;


-(NSInteger)_nextFailureInterval;
-(id)_xpcCriteriaForInterval:(NSInteger)arg0 ;
-(id)initWithIdentifier:(id)arg0 handler:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 regularInterval:(NSInteger)arg1 failureInterval:(NSInteger)arg2 backOffFactor:(NSInteger)arg3 handler:(id)arg4 ;
-(void)_rescheduleAfterFailureActivity:(id)arg0 ;
-(void)_rescheduleAfterSuccessActivity:(id)arg0 ;
-(void)_stopSchedulingActivity:(id)arg0 ;


@end


#endif