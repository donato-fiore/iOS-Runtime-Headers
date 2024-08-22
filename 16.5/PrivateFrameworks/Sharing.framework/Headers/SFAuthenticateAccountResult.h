// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFAUTHENTICATEACCOUNTRESULT_H
#define SFAUTHENTICATEACCOUNTRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFAuthenticateAccountResult : NSObject

@property (readonly, nonatomic) NSArray *authenticatedAccounts; // ivar: _authenticatedAccounts
@property (readonly, nonatomic) BOOL isVoiceProfileAvailable; // ivar: _isVoiceProfileAvailable
@property (readonly, nonatomic) NSArray *knownHomeUserIdentifiers; // ivar: _knownHomeUserIdentifiers


-(id)initWithAuthenticatedAccounts:(id)arg0 knownHomeUserIdentifiers:(id)arg1 isVoiceProfileAvailable:(BOOL)arg2 ;


@end


#endif