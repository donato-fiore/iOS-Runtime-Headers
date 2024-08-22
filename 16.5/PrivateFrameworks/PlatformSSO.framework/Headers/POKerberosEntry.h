// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POKERBEROSENTRY_H
#define POKERBEROSENTRY_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface POKerberosEntry : NSObject

@property (retain, nonatomic) NSString *clientName; // ivar: _clientName
@property (nonatomic) int encryptionKeyType; // ivar: _encryptionKeyType
@property (retain, nonatomic) NSData *messageBuffer; // ivar: _messageBuffer
@property (retain, nonatomic) NSString *realm; // ivar: _realm
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (retain, nonatomic) NSData *sessionKey; // ivar: _sessionKey
@property (retain) NSString *ticketKeyPath; // ivar: _ticketKeyPath


-(BOOL)hasAllRequiredValues;
-(id)dataRepresentation;
-(id)dictionaryRepresentation;
-(id)initWithData:(id)arg0 ;


@end


#endif