// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPMESSAGINGCLUSTERMESSAGECONFIRMATIONPARAMS_H
#define CHIPMESSAGINGCLUSTERMESSAGECONFIRMATIONPARAMS_H

@class NSNumber, NSData;

#import <Foundation/Foundation.h>


@interface CHIPMessagingClusterMessageConfirmationParams : NSObject

@property (retain, nonatomic) NSNumber *confirmationTime; // ivar: _confirmationTime
@property (retain, nonatomic) NSNumber *messageConfirmationControl; // ivar: _messageConfirmationControl
@property (retain, nonatomic) NSNumber *messageId; // ivar: _messageId
@property (retain, nonatomic) NSData *messageResponse; // ivar: _messageResponse


-(id)init;


@end


#endif