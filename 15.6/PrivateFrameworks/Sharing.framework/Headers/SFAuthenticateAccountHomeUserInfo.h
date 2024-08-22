// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFAUTHENTICATEACCOUNTHOMEUSERINFO_H
#define SFAUTHENTICATEACCOUNTHOMEUSERINFO_H

@class NSUUID;

#import <Foundation/Foundation.h>


@interface SFAuthenticateAccountHomeUserInfo : NSObject

@property (readonly, nonatomic) NSUUID *homeUniqueIdentifier; // ivar: _homeUniqueIdentifier
@property (readonly, nonatomic) NSUUID *userUniqueIdentifier; // ivar: _userUniqueIdentifier


-(id)initWithHomeUUID:(id)arg0 userUUID:(id)arg1 ;


@end


#endif