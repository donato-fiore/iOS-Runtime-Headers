// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDEXISTINGMESSAGEWITHMESSAGEIDHEADER_H
#define EDEXISTINGMESSAGEWITHMESSAGEIDHEADER_H

@class ECAngleBracketIDHash, ECServerMessage;

#import <Foundation/Foundation.h>


@interface EDExistingMessageWithMessageIDHeader : NSObject

@property (readonly, nonatomic) ECAngleBracketIDHash *messageIDHash; // ivar: _messageIDHash
@property (readonly, nonatomic) NSInteger messagePersistentID; // ivar: _messagePersistentID
@property (readonly, nonatomic) ECServerMessage *serverMessage; // ivar: _serverMessage


-(id)initWithMessageIDHash:(id)arg0 serverMessage:(id)arg1 messagePersistentID:(NSInteger)arg2 ;


@end


#endif