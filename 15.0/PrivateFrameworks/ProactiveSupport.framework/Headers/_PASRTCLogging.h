// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _PASRTCLOGGING_H
#define _PASRTCLOGGING_H

@class NSString, NSMutableArray;
@protocol NSSecureCoding, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface _PASRTCLogging : NSObject <NSSecureCoding>

 {
    _opaque_pthread_mutex_t _lock;
    NSString *_path;
    NSObject<OS_dispatch_source> *_persistenceTimerSource;
    CGFloat _storeCreationDate;
    NSMutableArray *_aggregators;
}


@property (retain) NSMutableArray *logQueue; // ivar: _logQueue


+(BOOL)supportsSecureCoding;
+(CGFloat)round:(CGFloat)arg0 toSignificantFigures:(NSInteger)arg1 ;
+(NSUInteger)bucketizeInteger:(NSUInteger)arg0 withBucketSize:(NSUInteger)arg1 limit:(NSUInteger)arg2 ;
+(NSUInteger)numberOfDaysBetweenDate:(id)arg0 andDate:(id)arg1 ;
+(id)dateByAppendingDaysToCurrentDate:(CGFloat)arg0 ;
+(id)loggerForPath:(id)arg0 ;
-(BOOL)_removeSentLogsAndResetStoreAge:(id)arg0 ;
-(BOOL)_storeToDisk;
-(BOOL)resetLogs;
-(CGFloat)_storeAge;
-(id)_createRTCReportingWithClientName:(id)arg0 serviceName:(id)arg1 assetVersion:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFileName:(id)arg0 ;
-(id)whitelistedLogFromLog:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enqueueRTCLog:(id)arg0 category:(unsigned short)arg1 type:(unsigned short)arg2 ;
-(void)expireLogs;
-(void)logAggregateEvent:(id)arg0 category:(unsigned short)arg1 type:(unsigned short)arg2 ;
-(void)registerBeforeSendProcessor:(id)arg0 ;
-(void)sendRTCLogsWithClientName:(id)arg0 serviceName:(id)arg1 assetVersion:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)updateAndScheduleDiskWrite;


@end


#endif