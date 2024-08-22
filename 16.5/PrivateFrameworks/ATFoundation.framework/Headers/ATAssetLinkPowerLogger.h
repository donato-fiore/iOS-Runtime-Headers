// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATASSETLINKPOWERLOGGER_H
#define ATASSETLINKPOWERLOGGER_H

@class NSMutableDictionary;
@protocol OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATAssetLinkPowerLogger : NSObject

@property (retain, nonatomic) NSMutableDictionary *aggregation; // ivar: _aggregation
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushTimer; // ivar: _flushTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loggerQueue; // ivar: _loggerQueue


+(id)sharedInstance;
-(id)_aggregatesForKey:(id)arg0 createIfNotExistsWithTimestamp:(id)arg1 ;
-(id)init;
-(void)_flushMessagesToPowerlog;
-(void)_incrementCountForAggregates:(id)arg0 key:(id)arg1 ;
-(void)_scheduleFlushTimer;
-(void)logAssetLinkOfType:(NSInteger)arg0 didBeginDownloadingAsset:(id)arg1 ;
-(void)logAssetLinkOfType:(NSInteger)arg0 didFinishAsset:(id)arg1 withError:(id)arg2 ;


@end


#endif