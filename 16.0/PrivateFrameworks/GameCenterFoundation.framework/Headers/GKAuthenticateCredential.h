// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKAUTHENTICATECREDENTIAL_H
#define GKAUTHENTICATECREDENTIAL_H

@class NSString;


#import "GKInternalRepresentation.h"

@interface GKAuthenticateCredential : GKInternalRepresentation

@property (retain, nonatomic) NSString *accountName; // ivar: _accountName
@property (retain, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (retain, nonatomic) NSString *playerID; // ivar: _playerID


+(id)secureCodedPropertyKeys;
-(id)init;


@end


#endif