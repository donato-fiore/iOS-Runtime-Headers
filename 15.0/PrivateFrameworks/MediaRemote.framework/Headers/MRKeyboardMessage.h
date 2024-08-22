// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MRKEYBOARDMESSAGE_H
#define MRKEYBOARDMESSAGE_H

@class NSData;


#import "MRProtocolMessage.h"
#import "MRTextEditingAttributes.h"

@interface MRKeyboardMessage : MRProtocolMessage {
    MRTextEditingAttributes *_attributes;
}


@property (readonly, nonatomic) MRTextEditingAttributes *attributes;
@property (readonly, nonatomic) NSData *encryptedTextCyphertext;
@property (readonly, nonatomic) NSUInteger state;


+(id)encryptedMessageWithState:(NSUInteger)arg0 text:(id)arg1 attributes:(id)arg2 usingCryptoSession:(id)arg3 ;
-(NSUInteger)type;
-(id)decryptedTextUsingCryptoSession:(id)arg0 ;
-(id)initWithState:(NSUInteger)arg0 encryptedTextCyphertext:(id)arg1 attributes:(id)arg2 ;


@end


#endif