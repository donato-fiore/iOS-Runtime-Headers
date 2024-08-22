// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDASSISTANTCOMMANDHELPER_H
#define HMDASSISTANTCOMMANDHELPER_H

@class HMFObject, NSString, NSArray, NSMutableArray, NSUUID, HMFMessageDispatcher;
@protocol HMFMessageReceiver, HMFLogging, OS_dispatch_queue;


#import "HMDHome.h"

@interface HMDAssistantCommandHelper : HMFObject <HMFMessageReceiver, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL executingActionSet; // ivar: _executingActionSet
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) HMDHome *home; // ivar: _home
@property (retain, nonatomic) NSArray *mediaRequests; // ivar: _mediaRequests
@property (copy, nonatomic) id *mediaResponseHandler; // ivar: _mediaResponseHandler
@property (retain, nonatomic) NSMutableArray *mediaResponses; // ivar: _mediaResponses
@property (retain, nonatomic) NSUUID *messageId; // ivar: _messageId
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // ivar: _msgDispatcher
@property (nonatomic) NSUInteger numErrors; // ivar: _numErrors
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSArray *requests; // ivar: _requests
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) NSMutableArray *responses; // ivar: _responses
@property (readonly) Class superclass;
@property (retain, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)logCategory;
-(id)initWithQueue:(id)arg0 msgDispatcher:(id)arg1 ;
-(void)__handleAccessoryCharacteristicsChanged:(id)arg0 ;
-(void)_register;
-(void)_reportOperationStartedForAccessory:(id)arg0 ;
-(void)_reportResponses;
-(void)_reportResponsesForMediaRequests;
-(void)addActionSetRequest:(id)arg0 actionSet:(id)arg1 completionHandler:(id)arg2 ;
-(void)addMediaWriteRequests:(id)arg0 withRequestProperty:(id)arg1 completion:(id)arg2 ;
-(void)addReadRequests:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)addWriteRequests:(id)arg0 home:(id)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)handleAccessoryCharacteristicsChangedNotification:(id)arg0 ;
-(void)removeResponses:(id)arg0 ;
-(void)reportOperationStartedForAccessory:(id)arg0 ;
-(void)timeoutAndReportResults;


@end


#endif