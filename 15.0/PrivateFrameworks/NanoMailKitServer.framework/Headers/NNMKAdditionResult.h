// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKADDITIONRESULT_H
#define NNMKADDITIONRESULT_H

@class NSMutableArray;

#import <Foundation/Foundation.h>

#import "NNMKProtoMessageAdditions.h"

@interface NNMKAdditionResult : NSObject

@property (retain, nonatomic) NSMutableArray *messageIdsWithDefaultPriority; // ivar: _messageIdsWithDefaultPriority
@property (retain, nonatomic) NSMutableArray *messageIdsWithNotificationPriority; // ivar: _messageIdsWithNotificationPriority
@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority; // ivar: _protoMessagesWithDefaultPriority
@property (retain, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority; // ivar: _protoMessagesWithNotificationPriority
@property (nonatomic) BOOL receivedOldMessages; // ivar: _receivedOldMessages
@property (nonatomic) NSUInteger resendInterval; // ivar: _resendInterval




@end


#endif