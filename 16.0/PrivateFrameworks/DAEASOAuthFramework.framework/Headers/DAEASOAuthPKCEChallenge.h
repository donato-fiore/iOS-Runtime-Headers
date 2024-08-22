// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DAEASOAUTHPKCECHALLENGE_H
#define DAEASOAUTHPKCECHALLENGE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface DAEASOAuthPKCEChallenge : NSObject

@property (retain, nonatomic) NSString *codeChallenge; // ivar: _codeChallenge
@property (nonatomic) NSInteger codeChallengeMethod; // ivar: _codeChallengeMethod
@property (retain, nonatomic) NSString *codeVerifier; // ivar: _codeVerifier


+(id)base64URLEncode:(id)arg0 ;
+(id)convertToString:(NSInteger)arg0 ;
+(id)newCodeVerifier;
-(id)codeChallengeFromVerifier:(id)arg0 withCodeChallengeMethod:(NSInteger)arg1 ;
-(id)initWithCodeChallengeMethod:(NSInteger)arg0 ;


@end


#endif