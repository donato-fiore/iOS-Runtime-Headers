// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POWSTRUSTRESPONSE_H
#define POWSTRUSTRESPONSE_H

@class NSString, NSDate;

#import <Foundation/Foundation.h>


@interface POWSTrustResponse : NSObject

@property (retain, nonatomic) NSString *assertion; // ivar: _assertion
@property (retain, nonatomic) NSDate *created; // ivar: _created
@property (retain, nonatomic) NSString *endpointURN; // ivar: _endpointURN
@property (retain, nonatomic) NSDate *expires; // ivar: _expires
@property (nonatomic, getter=isFault) BOOL fault; // ivar: _fault
@property (retain, nonatomic) NSString *faultCodeValue; // ivar: _faultCodeValue
@property (retain, nonatomic) NSString *faultReason; // ivar: _faultReason
@property (retain, nonatomic) NSString *faultSubCodeValue; // ivar: _faultSubCodeValue
@property (retain, nonatomic) NSString *keyIdentifier; // ivar: _keyIdentifier
@property (retain, nonatomic) NSString *nonce; // ivar: _nonce
@property (retain, nonatomic) NSString *securityExtensionPrefix; // ivar: _securityExtensionPrefix
@property (retain, nonatomic) NSDate *tokenExpires; // ivar: _tokenExpires
@property (retain, nonatomic) NSString *tokenType; // ivar: _tokenType


-(BOOL)isCredentialFault;


@end


#endif