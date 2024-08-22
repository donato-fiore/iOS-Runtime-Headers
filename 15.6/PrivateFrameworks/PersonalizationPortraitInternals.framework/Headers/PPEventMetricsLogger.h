// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PPEVENTMETRICSLOGGER_H
#define PPEVENTMETRICSLOGGER_H

@class NSString, NSMutableArray;
@protocol NSSecureCoding, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPEventMetricsLogger : NSObject <NSSecureCoding>

 {
    _opaque_pthread_mutex_t _lock;
    NSString *_path;
    NSMutableArray *_loggedInteractionsSummary;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    NSObject<OS_dispatch_queue> *_interactionsWriteQueue;
    CGFloat _storeCreationDate;
}




+(BOOL)supportsSecureCoding;
+(id)defaultLogger;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logEventInteractionForEventHighlight:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)sendRTCLogsWithCompletion:(id)arg0 ;


@end


#endif