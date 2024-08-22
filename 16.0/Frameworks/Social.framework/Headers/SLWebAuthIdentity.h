// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLWEBAUTHIDENTITY_H
#define SLWEBAUTHIDENTITY_H

@class NSString;

#import <Foundation/Foundation.h>


@interface SLWebAuthIdentity : NSObject

@property (readonly, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) NSString *idToken; // ivar: _idToken
@property (readonly, nonatomic) NSString *refreshToken; // ivar: _refreshToken
@property (readonly, nonatomic) NSString *token; // ivar: _token
@property (readonly, nonatomic) NSString *username; // ivar: _username
@property (readonly, nonatomic) NSString *youTubeUsername; // ivar: _youTubeUsername


-(id)initWithUsername:(id)arg0 token:(id)arg1 displayName:(id)arg2 refreshToken:(id)arg3 youTubeUsername:(id)arg4 idToken:(id)arg5 ;


@end


#endif