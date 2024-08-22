// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PDSREQUESTQUEUE_H
#define PDSREQUESTQUEUE_H

@class NSDate, FTMessageDelivery;
@protocol PDSRequestQueueDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PDSRequest.h"
#import "PDSUserTracker.h"

@interface PDSRequestQueue : NSObject

@property (nonatomic) NSInteger authRetries; // ivar: _authRetries
@property (weak, nonatomic) NSObject<PDSRequestQueueDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) id *entryStoreBlock; // ivar: _entryStoreBlock
@property (retain, nonatomic) PDSRequest *inflightRequest; // ivar: _inflightRequest
@property (retain, nonatomic) NSDate *lastReauthAttempt; // ivar: _lastReauthAttempt
@property (retain, nonatomic) FTMessageDelivery *messageDelivery; // ivar: _messageDelivery
@property (nonatomic) NSInteger messageTimeout; // ivar: _messageTimeout
@property (copy, nonatomic) id *pushTokenBlock; // ivar: _pushTokenBlock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) PDSRequest *queuedRequest; // ivar: _queuedRequest
@property (retain, nonatomic) PDSUserTracker *userTracker; // ivar: _userTracker


-(BOOL)_isAuthIssue:(NSInteger)arg0 ;
-(BOOL)enqueueRequest:(id)arg0 ;
-(id)_deviceInfo;
-(id)_hwVersion;
-(id)_machineID;
-(id)_osVersion;
// -(id)initWithMessageDelivery:(id)arg0 userTracker:(id)arg1 queue:(id)arg2 pushTokenBlock:(id)arg3 entryStoreBlock:(unk)arg4  ;
-(void)_cancelPendingRequests;
-(void)_flightRequest:(id)arg0 ;
-(void)_logEntries:(id)arg0 ;
-(void)_logProtoUserPushToken:(id)arg0 ;
-(void)_reAuthAndContinueWithRequest:(id)arg0 forUser:(id)arg1 ;
-(void)_removeDeadEntriesForUser:(id)arg0 withError:(*id)arg1 ;


@end


#endif