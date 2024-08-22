// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSIDENTITYPROVIDERRESPONSE_H
#define VSIDENTITYPROVIDERRESPONSE_H

@class VSAccount, VSAccountMetadata, VSOptional;

#import <Foundation/Foundation.h>


@interface VSIdentityProviderResponse : NSObject

@property (retain, nonatomic) VSAccount *account; // ivar: _account
@property (copy, nonatomic) VSAccountMetadata *accountMetadata; // ivar: _accountMetadata
@property (nonatomic) BOOL didCreateAccount; // ivar: _didCreateAccount
@property (retain, nonatomic) VSOptional *logoLoadOperation; // ivar: _logoLoadOperation


-(id)description;
-(id)init;


@end


#endif