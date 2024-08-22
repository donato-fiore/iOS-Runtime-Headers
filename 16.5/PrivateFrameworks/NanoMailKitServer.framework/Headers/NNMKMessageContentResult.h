// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NNMKMESSAGECONTENTRESULT_H
#define NNMKMESSAGECONTENTRESULT_H


#import <Foundation/Foundation.h>

#import "NNMKProtoMessageContentSync.h"

@interface NNMKMessageContentResult : NSObject

@property (nonatomic) BOOL alreadySyncedWithCurrentPriority; // ivar: _alreadySyncedWithCurrentPriority
@property (nonatomic) NSInteger compressedTextDataLength; // ivar: _compressedTextDataLength
@property (nonatomic) BOOL isContentCompletelySynced; // ivar: _isContentCompletelySynced
@property (nonatomic) BOOL isNotificationPriority; // ivar: _isNotificationPriority
@property (nonatomic) BOOL isUserRequest; // ivar: _isUserRequest
@property (nonatomic) BOOL messageDoesNotExist; // ivar: _messageDoesNotExist
@property (retain, nonatomic) NNMKProtoMessageContentSync *protoMessageContentSync; // ivar: _protoMessageContentSync
@property (nonatomic) NSUInteger resendInterval; // ivar: _resendInterval




@end


#endif