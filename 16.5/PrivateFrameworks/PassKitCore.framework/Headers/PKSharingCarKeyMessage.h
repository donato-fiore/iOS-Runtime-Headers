// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKSHARINGCARKEYMESSAGE_H
#define PKSHARINGCARKEYMESSAGE_H

@class NSDictionary, NSString, NSData;


#import "PKSharingGenericMessage.h"

@interface PKSharingCarKeyMessage : PKSharingGenericMessage

@property (readonly, nonatomic) NSDictionary *carKeySharingDict;
@property (readonly, nonatomic) NSString *friendKeyIdentifier;
@property (readonly, nonatomic) NSString *shareIdentifier;
@property (readonly, nonatomic) NSString *shareSessionIdentifier;
@property (readonly, nonatomic) NSData *underlyingPayload;


+(BOOL)supportsSecureCoding;
-(BOOL)configureWithContent:(id)arg0 ;
-(id)initWithRawMessage:(id)arg0 type:(NSUInteger)arg1 shareIdentifier:(id)arg2 friendKeyIdentifier:(id)arg3 carKeySharingDict:(id)arg4 ;
-(id)messageWithBindingAttestation:(id)arg0 ;


@end


#endif