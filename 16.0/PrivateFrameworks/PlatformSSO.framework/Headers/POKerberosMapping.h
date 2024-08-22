// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef POKERBEROSMAPPING_H
#define POKERBEROSMAPPING_H

@class NSString;

#import <Foundation/Foundation.h>


@interface POKerberosMapping : NSObject

@property (retain, nonatomic) NSString *clientNameKeyName; // ivar: _clientNameKeyName
@property (retain, nonatomic) NSString *encryptionKeyTypeKeyName; // ivar: _encryptionKeyTypeKeyName
@property (retain, nonatomic) NSString *messageBufferKeyName; // ivar: _messageBufferKeyName
@property (retain, nonatomic) NSString *realmKeyName; // ivar: _realmKeyName
@property (retain, nonatomic) NSString *serviceNameKeyName; // ivar: _serviceNameKeyName
@property (retain, nonatomic) NSString *sessionKeyKeyName; // ivar: _sessionKeyKeyName
@property (retain, nonatomic) NSString *ticketKeyPath; // ivar: _ticketKeyPath


-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif