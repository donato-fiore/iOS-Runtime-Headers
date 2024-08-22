// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDMODERNTRANSPORTMESSAGECONTEXT_H
#define HMDMODERNTRANSPORTMESSAGECONTEXT_H

@class NSString, HMFMessageDestination, HMFTimer, NSUUID, NSSet;
@protocol HMFTimerDelegate, HMDDateProvider, HMDTimerProvider;

#import <Foundation/Foundation.h>

#import "HMDRemoteMessage.h"
#import "HMDModernTransportMessageContextOptions.h"

@interface HMDModernTransportMessageContext : NSObject <HMFTimerDelegate>



@property (copy) id *completionHandler; // ivar: _completionHandler
@property (readonly) NSObject<HMDDateProvider> *dateProvider; // ivar: _dateProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMFMessageDestination *destination;
@property (nonatomic) BOOL didNotifyDeviceReachability; // ivar: _didNotifyDeviceReachability
@property (readonly, nonatomic) BOOL didSucceedSending; // ivar: _didSucceedSending
@property (readonly, nonatomic) BOOL expectsResponse;
@property (copy) id *fallbackCompletionBlock; // ivar: _fallbackCompletionBlock
@property (retain) HMFTimer *fallbackTimer; // ivar: _fallbackTimer
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSSet *inProgressTransports; // ivar: _inProgressTransports
@property (readonly) HMDRemoteMessage *message; // ivar: _message
@property (readonly, nonatomic) NSUUID *messageID;
@property (readonly, nonatomic) HMDModernTransportMessageContextOptions *options; // ivar: _options
@property (readonly, copy, nonatomic) NSSet *remainingTransports; // ivar: _remainingTransports
@property CGFloat requestStartTime; // ivar: _requestStartTime
@property (copy) id *responseCompletionBlock; // ivar: _responseCompletionBlock
@property (retain) HMFTimer *responseTimer; // ivar: _responseTimer
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat timeout;
@property (readonly) NSObject<HMDTimerProvider> *timerProvider; // ivar: _timerProvider


// -(id)initWithMessage:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 dateProvider:(unk)arg3 timerProvider:(id)arg4  ;
-(id)preparedMessageWithTimeout:(CGFloat)arg0 ;
-(void)completeSendingOverTransport:(id)arg0 withError:(id)arg1 ;
-(void)done;
-(void)startResponseTimerWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)startSendingOverTransport:(id)arg0 ;
-(void)startTransportFallbackTimerWithTimeInterval:(CGFloat)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(void)timerDidFire:(id)arg0 ;


@end


#endif