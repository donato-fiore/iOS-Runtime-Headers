// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMESSAGEDELIVERY_DUALMODE_H
#define FTMESSAGEDELIVERY_DUALMODE_H

@class NSString, NSArray, IDSBaseMessage;
@protocol FTMessageDeliveryProtocol, FTMessageQueueDelegate;

#import <Foundation/Foundation.h>

#import "FTMessageDelivery.h"
#import "FTMessageQueue.h"

@interface FTMessageDelivery_DualMode : NSObject <FTMessageDeliveryProtocol, FTMessageQueueDelegate>

 {
    FTMessageDelivery *_httpDelivery;
    FTMessageDelivery *_apsDelivery;
    FTMessageQueue *_dualModeQueue;
    NSString *_userAgentString;
}


@property (readonly) NSArray *allMessages;
@property (readonly) BOOL busy;
@property (readonly) IDSBaseMessage *currentMessage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) BOOL hasQueuedItems;
@property (readonly) NSUInteger hash;
@property BOOL logToRegistration;
@property NSUInteger maxConcurrentMessages;
@property (readonly) NSInteger maxLargeMessageSize;
@property (readonly) NSInteger maxMessageSize;
@property (readonly) NSArray *queuedMessages;
@property BOOL retryInAirplaneMode;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *userAgent;


-(BOOL)_isInBackoffMode;
-(BOOL)_shouldUseDualDeliveryForMessage:(id)arg0 ;
-(BOOL)sendMessage:(id)arg0 ;
-(NSInteger)_randomPercentageChanceForDualDelivery;
-(id)initWithPreferedType:(NSInteger)arg0 ;
-(void)_enterBackOffMode;
-(void)cancelMessage:(id)arg0 ;
-(void)dequeueMessageIfNeeded;
-(void)handleTranslationAndDeliveryOnAPS:(id)arg0 ;
-(void)invalidate;
-(void)queue:(id)arg0 hitTimeoutForMessage:(id)arg1 ;


@end


#endif