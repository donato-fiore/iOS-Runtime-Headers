// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFAUTHENTICATEACCOUNTRESULT_H
#define SFAUTHENTICATEACCOUNTRESULT_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface SFAuthenticateAccountResult : NSObject

@property (readonly, nonatomic) NSArray *authenticatedAccounts; // ivar: _authenticatedAccounts
@property (readonly, nonatomic) NSArray *knownHomeUserIdentifiers; // ivar: _knownHomeUserIdentifiers


-(id)initWithAuthenticatedAccounts:(id)arg0 knownHomeUserIdentifiers:(id)arg1 ;


@end


#endif