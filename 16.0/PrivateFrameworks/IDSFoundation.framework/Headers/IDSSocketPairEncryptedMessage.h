// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IDSSOCKETPAIRENCRYPTEDMESSAGE_H
#define IDSSOCKETPAIRENCRYPTEDMESSAGE_H

@class NSData;


#import "IDSSocketPairMessage.h"

@interface IDSSocketPairEncryptedMessage : IDSSocketPairMessage {
    NSData *_data;
}


@property (readonly, nonatomic) NSData *data;


-(id)_nonHeaderData;
-(id)initWithCommand:(unsigned char)arg0 underlyingData:(id)arg1 ;
-(id)initWithData:(id)arg0 ;
-(unsigned char)command;


@end


#endif