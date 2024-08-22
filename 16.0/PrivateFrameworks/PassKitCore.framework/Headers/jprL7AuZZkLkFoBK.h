// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef JPRL7AUZZKLKFOBK_H
#define JPRL7AUZZKLKFOBK_H

@class NSString, NSData, NSSet;

#import <Foundation/Foundation.h>


@interface jprL7AuZZkLkFoBK : NSObject

@property (retain, nonatomic) NSString *FPANSuffix; // ivar: _FPANSuffix
@property (copy, nonatomic) NSString *callerID; // ivar: _callerID
@property (retain, nonatomic) NSData *challengeResponse; // ivar: _challengeResponse
@property (retain, nonatomic) NSString *emailAddress; // ivar: _emailAddress
@property (nonatomic) NSUInteger eventFrequency; // ivar: _eventFrequency
@property (retain, nonatomic) NSData *hostChallenge; // ivar: _hostChallenge
@property (retain, nonatomic) NSSet *identities; // ivar: _identities
@property (nonatomic) NSUInteger passwordSetting; // ivar: _passwordSetting
@property (retain, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (retain, nonatomic) NSString *seid; // ivar: _seid
@property (retain, nonatomic) NSString *serverEndpointIdentifier; // ivar: _serverEndpointIdentifier


-(id)initWithServerEndpointIdentifier:(id)arg0 ;


@end


#endif