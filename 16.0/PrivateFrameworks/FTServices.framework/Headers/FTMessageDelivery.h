// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMESSAGEDELIVERY_H
#define FTMESSAGEDELIVERY_H

@class IMTimer, NSArray, IDSBaseMessage, NSNumber, NSString;
@protocol FTMessageQueueDelegate;

#import <Foundation/Foundation.h>

#import "FTMessageQueue.h"

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate>

 {
    unsigned int _retries;
    FTMessageQueue *_queue;
    IMTimer *_timer;
}


@property (readonly) NSArray *allMessages;
@property (readonly) BOOL busy;
@property (readonly) IDSBaseMessage *currentMessage;
@property (nonatomic) BOOL disallowRetry; // ivar: _disallowRetry
@property (readonly) BOOL hasQueuedItems;
@property BOOL logToRegistration; // ivar: _logToRegistration
@property NSUInteger maxConcurrentMessages; // ivar: _maxConcurrentMessages
@property (readonly) NSInteger maxLargeMessageSize;
@property (readonly) NSInteger maxMessageSize;
@property (copy) NSNumber *protocolVersion;
@property (readonly) NSArray *queuedMessages;
@property BOOL retryInAirplaneMode; // ivar: _retryInAirplaneMode
@property (copy) NSString *userAgent; // ivar: _userAgent


+(Class)APNSMessageDeliveryClass;
+(Class)HTTPMessageDeliveryClass;
+(id)_errorForTDMessageDeliveryStatus:(NSInteger)arg0 userInfo:(id)arg1 ;
+(id)alloc;
-(BOOL)_sendMessageAsynchronously:(id)arg0 error:(*id)arg1 ;
-(BOOL)sendMessage:(id)arg0 ;
-(id)_queue;
-(id)init;
-(void)_clearRetryTimer;
-(void)_correctServerTimestampForDriftOnMessage:(id)arg0 currentDate:(id)arg1 ;
-(void)_informDelegateAboutMessage:(id)arg0 error:(id)arg1 result:(id)arg2 resultCode:(NSInteger)arg3 ;
-(void)_retryTimerHit:(id)arg0 ;
-(void)_setRetryTimer:(CGFloat)arg0 ;
-(void)_signMessage:(id)arg0 useDataSignatures:(BOOL)arg1 body:(id)arg2 queryString:(id)arg3 intoDictionary:(id)arg4 ;
-(void)cancelMessage:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)networkStateChanged;
-(void)queue:(id)arg0 hitTimeoutForMessage:(id)arg1 ;


@end


#endif