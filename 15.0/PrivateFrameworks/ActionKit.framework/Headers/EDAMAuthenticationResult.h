// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EDAMAUTHENTICATIONRESULT_H
#define EDAMAUTHENTICATIONRESULT_H

@class NSString, NSNumber;


#import "FATObject.h"
#import "EDAMPublicUserInfo.h"
#import "EDAMUserUrls.h"
#import "EDAMUser.h"

@interface EDAMAuthenticationResult : FATObject

@property (retain, nonatomic) NSString *authenticationToken; // ivar: _authenticationToken
@property (retain, nonatomic) NSNumber *currentTime; // ivar: _currentTime
@property (retain, nonatomic) NSNumber *expiration; // ivar: _expiration
@property (retain, nonatomic) NSString *noteStoreUrl; // ivar: _noteStoreUrl
@property (retain, nonatomic) EDAMPublicUserInfo *publicUserInfo; // ivar: _publicUserInfo
@property (retain, nonatomic) NSString *secondFactorDeliveryHint; // ivar: _secondFactorDeliveryHint
@property (retain, nonatomic) NSNumber *secondFactorRequired; // ivar: _secondFactorRequired
@property (retain, nonatomic) EDAMUserUrls *urls; // ivar: _urls
@property (retain, nonatomic) EDAMUser *user; // ivar: _user
@property (retain, nonatomic) NSString *webApiUrlPrefix; // ivar: _webApiUrlPrefix


+(id)structFields;
+(id)structName;


@end


#endif