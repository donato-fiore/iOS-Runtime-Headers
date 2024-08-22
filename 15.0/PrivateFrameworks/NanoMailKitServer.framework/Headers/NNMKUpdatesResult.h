// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKUPDATESRESULT_H
#define NNMKUPDATESRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "NNMKProtoMessageStatusUpdates.h"

@interface NNMKUpdatesResult : NSObject

@property (retain, nonatomic) NSArray *messageIdsToDelete; // ivar: _messageIdsToDelete
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriority; // ivar: _messageIdsWithDefaultPriority
@property (retain, nonatomic) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel; // ivar: _messageIdsWithDefaultPriorityAndProtectedChannel
@property (retain, nonatomic) NSArray *messageIdsWithNotificationPriority; // ivar: _messageIdsWithNotificationPriority
@property (retain, nonatomic) NSArray *messagesToAdd; // ivar: _messagesToAdd
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority; // ivar: _protoMessageUpdatesWithDefaultPriority
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel; // ivar: _protoMessageUpdatesWithDefaultPriorityAndProtectedChannel
@property (retain, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority; // ivar: _protoMessageUpdatesWithNotificationPriority




@end


#endif