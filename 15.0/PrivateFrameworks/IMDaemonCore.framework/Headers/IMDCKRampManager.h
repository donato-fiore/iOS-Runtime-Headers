// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMDCKRAMPMANAGER_H
#define IMDCKRAMPMANAGER_H

@class NSTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface IMDCKRampManager : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ckQueue; // ivar: _ckQueue
@property (retain, nonatomic) NSTimer *retryTimer; // ivar: _retryTimer


+(id)sharedInstance;
-(BOOL)_shouldSendPriorityRequest;
-(id)_CKUtilitiesSharedInstance;
-(id)_rampUpRecordID;
-(id)init;
-(void)_fetchLatestRampStateFromCK:(id)arg0 ;
-(void)_performRampCheckWithRetryAfter:(CGFloat)arg0 ;
-(void)_persistRampFetchServerError:(BOOL)arg0 ;
-(void)_scheduleOperation:(id)arg0 ;
-(void)_writeRampStateAllowed:(BOOL)arg0 promoted:(BOOL)arg1 visible:(BOOL)arg2 fetchHadServerError:(BOOL)arg3 ;
-(void)cachedRampState:(id)arg0 ;
-(void)dealloc;
-(void)fetchLatestRampStateFromCK:(id)arg0 ;


@end


#endif