// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCINTERNALAUTHENTICATIONMANAGER_H
#define BCINTERNALAUTHENTICATIONMANAGER_H

@class NSString;
@protocol ACAccountProtocol, ACAccountStoreProtocol;

#import <Foundation/Foundation.h>

#import "BCInternalAuthenticationRequest.h"

@interface BCInternalAuthenticationManager : NSObject {
    BCInternalAuthenticationRequest *_authenticationRequest;
    id<ACAccountProtocol> *_account;
    id<ACAccountStoreProtocol> *_accountStore;
}


@property (readonly, copy, nonatomic) NSString *action;
@property (readonly, nonatomic) BCInternalAuthenticationRequest *authenticationRequest;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, nonatomic) BOOL isUserSignedIn;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *middleName;
@property (readonly, nonatomic) NSInteger state;
@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *username;


-(id)initWithAuthenticationRequest:(id)arg0 ;
-(void)fetchCredentials:(id)arg0 ;


@end


#endif