// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEIKEV2PACKET_H
#define NEIKEV2PACKET_H

@class NSArray;
@protocol NEPrettyDescription;

#import <Foundation/Foundation.h>

#import "NEIKEv2IKESPI.h"
#import "NEIKEv2EncryptedPayload.h"

@interface NEIKEv2Packet : NSObject <NEPrettyDescription>

 {
    BOOL _decrypted;
    BOOL _isFragmented;
    BOOL _isInbound;
    BOOL _isResponse;
    BOOL _isInitiator;
    unsigned int _fragmentNumber;
    unsigned int _totalFragments;
    int _messageID;
    NSArray *_packetDatagrams;
    NSArray *_rawPayloads;
    NEIKEv2IKESPI *_initiatorSPI;
    NEIKEv2IKESPI *_responderSPI;
    NEIKEv2EncryptedPayload *_encryptedPayload;
    NSArray *_customPayloads;
    NSArray *_notifications;
}


@property (readonly) BOOL decrypted;
@property (readonly) unsigned int fragmentNumber;
@property (readonly) BOOL isFragmented;
@property (readonly) unsigned int totalFragments;


+(BOOL)encryptPayloads;
+(NSUInteger)exchangeType;
+(id)copyTypeDescription;
-(id)copyShortDescription;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(void)filloutPayloads;
-(void)gatherPayloads;


@end


#endif