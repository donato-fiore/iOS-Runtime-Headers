// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MRPROTOCOLMESSAGE_H
#define MRPROTOCOLMESSAGE_H

@class NSData, NSString, NSError, PBCodable;

#import <Foundation/Foundation.h>

#import "MRProtocolClientConnection.h"
#import "MRProtocolMessageOptions.h"

@interface MRProtocolMessage : NSObject {
    NSData *_protobufData;
    BOOL _replied;
}


@property (weak, nonatomic) MRProtocolClientConnection *clientConnection; // ivar: _clientConnection
@property (readonly, nonatomic) NSString *description;
@property (readonly, nonatomic) NSUInteger encryptionType;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (nonatomic) BOOL isIncomingReply; // ivar: _isIncomingReply
@property (nonatomic) BOOL isOutgoingReply; // ivar: _isOutgoingReply
@property (readonly, nonatomic) NSData *protobufData;
@property (copy, nonatomic) NSString *replyIdentifier; // ivar: _replyIdentifier
@property (readonly, nonatomic) BOOL shouldLog;
@property (nonatomic) NSUInteger timestamp; // ivar: _timestamp
@property (retain, nonatomic) MRProtocolMessageOptions *transportOptions; // ivar: _transportOptions
@property (readonly, nonatomic) NSUInteger type;
@property (retain, nonatomic) PBCodable *underlyingCodableMessage; // ivar: _underlyingCodableMessage
@property (copy, nonatomic) NSString *uniqueIdentifier; // ivar: _uniqueIdentifier


+(NSUInteger)currentProtocolVersion;
+(id)protocolMessageWithProtobufData:(id)arg0 error:(*id)arg1 ;
-(BOOL)reply;
-(BOOL)replyWithMessage:(id)arg0 ;
-(id)init;
-(id)initWithUnderlyingCodableMessage:(id)arg0 error:(id)arg1 ;
-(void)dealloc;


@end


#endif