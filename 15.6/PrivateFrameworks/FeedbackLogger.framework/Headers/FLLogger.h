// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FLLOGGER_H
#define FLLOGGER_H

@class NSDistributedNotificationCenter, NSMutableDictionary;
@protocol FLLoggingContext, OS_os_log, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FLLogger : NSObject

@property (retain, nonatomic) NSObject<FLLoggingContext> *context; // ivar: _context
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (retain, nonatomic) NSDistributedNotificationCenter *notificationCenter; // ivar: _notificationCenter
@property (nonatomic) NSUInteger persistentStoreCacheTTL; // ivar: _persistentStoreCacheTTL
@property (retain, nonatomic) NSObject<OS_dispatch_source> *persistentStoreCacheTTLTimer; // ivar: _persistentStoreCacheTTLTimer
@property (retain, nonatomic) NSMutableDictionary *persistentStores; // ivar: _persistentStores


+(id)categoryForSiriPayload:(id)arg0 ;
+(id)readSiriCategoryFrom:(id)arg0 recursive:(BOOL)arg1 ;
+(id)sharedLogger;
-(id)__dispatched_persistentStoreWithId:(id)arg0 category:(id)arg1 ;
-(id)_nextTimerFireDate;
-(id)dataUploadStoreIdForApplicationIdentifier:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)parsecCategoryForPayload:(id)arg0 ;
-(id)parsecPersistentStoreForBundleID:(id)arg0 ;
-(id)parsecStoreId;
-(id)pathForStore:(id)arg0 ;
-(id)registerSiriInstrumentationObserver:(id)arg0 observer:(id)arg1 ;
-(id)siriReadingStoreForBundleID:(id)arg0 ;
-(id)siriStoreIdForBundleId:(id)arg0 ;
-(id)siriWritingStoreForBundleID:(id)arg0 category:(id)arg1 ;
-(id)uploadHeaders;
-(void)_cancelStoreCacheTimer;
-(void)_cleanPersistantStores;
-(void)_closeAllStores;
-(void)_resetStoreCacheTimer;
-(void)closeAllStores;
-(void)closeStoreForApplicationFromNotification:(id)arg0 ;
-(void)closeStoreForBundleID:(id)arg0 ;
-(void)dealloc;
-(void)removeSiriInstrumentationObserver:(id)arg0 ;
-(void)report:(id)arg0 application:(id)arg1 ;
-(void)report:(id)arg0 application:(id)arg1 onComplete:(id)arg2 ;
-(void)reportDataUploadEvent:(id)arg0 application:(id)arg1 completion:(id)arg2 ;
-(void)reportParsecFeedback:(id)arg0 completion:(id)arg1 ;
-(void)reportSiriInstrumentationEvent:(id)arg0 forBundleID:(id)arg1 completion:(id)arg2 ;
-(void)scheduleImmediateUpload;
-(void)setValue:(id)arg0 forUploadHeaderNamed:(id)arg1 ;
-(void)write:(id)arg0 category:(id)arg1 toStoreWithID:(id)arg2 completion:(id)arg3 ;


@end


#endif