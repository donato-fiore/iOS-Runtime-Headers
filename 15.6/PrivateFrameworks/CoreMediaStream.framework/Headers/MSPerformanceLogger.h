// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPERFORMANCELOGGER_H
#define MSPERFORMANCELOGGER_H



#import "MSASModelBase.h"

@interface MSPerformanceLogger : MSASModelBase



+(id)sharedLogger;
+(void)nukeCompletionBlock:(id)arg0 ;
-(BOOL)dbQueueUpgradeFromDatabaseVersion:(int)arg0 currentVersion:(int)arg1 ;
-(id)init;
-(void)_logSqliteErrorLine:(int)arg0 ;
-(void)dbQueueDiscardOperation:(id)arg0 itemGUID:(id)arg1 ;
-(void)discardOperation:(id)arg0 itemGUID:(id)arg1 ;
-(void)startOperation:(id)arg0 itemGUID:(id)arg1 ;
-(void)stopOperation:(id)arg0 itemGUID:(id)arg1 ;
-(void)summarizeOperation:(id)arg0 itemGUID:(id)arg1 formatBlock:(id)arg2 ;


@end


#endif