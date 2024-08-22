// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPRELAYRESPONSEMESSAGE_H
#define HAPRELAYRESPONSEMESSAGE_H

@class HMFObject, NSData;


#import "HAPRelayRequestMessage.h"

@interface HAPRelayResponseMessage : HMFObject

@property (retain, nonatomic) NSData *body; // ivar: _body
@property (readonly, nonatomic, getter=isEncrypted) BOOL encrypted;
@property (readonly, nonatomic) HAPRelayRequestMessage *request; // ivar: _request
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSUInteger type; // ivar: _type


-(BOOL)_deserializeResponseMessage:(id)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)initWithRequest:(id)arg0 serializedMessage:(id)arg1 ;
-(id)shortDescription;


@end


#endif