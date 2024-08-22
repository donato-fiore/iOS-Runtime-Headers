// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRMESSAGINGCLUSTERMESSAGECONFIRMATIONPARAMS_H
#define MTRMESSAGINGCLUSTERMESSAGECONFIRMATIONPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface MTRMessagingClusterMessageConfirmationParams : NSObject

@property (retain, nonatomic) NSNumber *confirmationTime; // ivar: _confirmationTime
@property (retain, nonatomic) NSNumber *messageConfirmationControl; // ivar: _messageConfirmationControl
@property (retain, nonatomic) NSNumber *messageId; // ivar: _messageId
@property (retain, nonatomic) NSData *messageResponse; // ivar: _messageResponse
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs


-(id)description;
-(id)init;


@end


#endif