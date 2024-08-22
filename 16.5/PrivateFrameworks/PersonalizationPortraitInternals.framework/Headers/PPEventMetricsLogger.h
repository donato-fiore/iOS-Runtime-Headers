// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


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
+(NSUInteger)numberOfDaysBetweenDate:(id)arg0 andDate:(id)arg1 ;
+(id)defaultLogger;
-(BOOL)_incrementInteractionForEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(BOOL)_removeInteractionsSummaryLogsFromLogsAndResetStoreAge:(id)arg0 ;
-(BOOL)resetLogs;
-(BOOL)storeToDisk;
-(CGFloat)_storeAge;
-(id)_createRTCReporting;
-(id)_descriptionForActionType:(unsigned short)arg0 ;
-(id)_descriptionForInterface:(unsigned short)arg0 ;
-(id)_descriptionForPPRTCCategory:(unsigned short)arg0 ;
-(id)_interactionAttributesForEventHighlight:(id)arg0 ;
-(id)_interactionKeyForInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 ;
-(id)allowedLogFromLog:(id)arg0 ;
-(id)eventsAndExtraordinaryEventsDictFromDate:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(id)loggedInteractionsSummaryMetrics;
-(id)logsToSend;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)logEventInteractionForEventHighlight:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logEventInteractionForEventWithEventIdentifier:(id)arg0 interface:(unsigned short)arg1 actionType:(unsigned short)arg2 ;
-(void)logNewInteractionSummaryWithDictionary:(id)arg0 ;
-(void)sendRTCLogsWithCompletion:(id)arg0 ;
-(void)updateAndScheduleDiskWrite;


@end


#endif