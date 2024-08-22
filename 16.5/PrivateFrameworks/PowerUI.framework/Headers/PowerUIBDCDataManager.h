// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWERUIBDCDATAMANAGER_H
#define POWERUIBDCDATAMANAGER_H

@class NSMutableArray;
@protocol OS_dispatch_semaphore, OS_os_log;

#import <Foundation/Foundation.h>


@interface PowerUIBDCDataManager : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *bdcCallbackSemaphore; // ivar: _bdcCallbackSemaphore
@property (nonatomic) os_unfair_lock_s bdcDataLock; // ivar: _bdcDataLock
@property (retain, nonatomic) NSMutableArray *dataQueue; // ivar: _dataQueue
@property (retain, nonatomic) NSObject<OS_os_log> *log; // ivar: _log


+(id)sharedInstance;
-(BOOL)promptBDCToQueryState:(id)arg0 ;
-(id)bdcSemaphoreToUse;
-(id)getBDCDataDictTemplate;
-(id)getNextBDCDataDict;
-(id)init;


@end


#endif