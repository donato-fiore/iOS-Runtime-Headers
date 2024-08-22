// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APPROXYURLCREDENTIALSERVICE_H
#define APPROXYURLCREDENTIALSERVICE_H

@class APMescalSigning;

#import <Foundation/Foundation.h>


@interface APProxyURLCredentialService : NSObject

@property (readonly, nonatomic) APMescalSigning *mescalSigningObject; // ivar: _mescalSigningObject


-(id)_signedCredentialForUrl:(id)arg0 userAgent:(id)arg1 withPersistence:(NSUInteger)arg2 ;
-(id)init;
-(id)signedCredentialForRequest:(id)arg0 withPersistence:(NSUInteger)arg1 ;
-(id)signedCredentialForUrl:(id)arg0 userAgent:(id)arg1 request:(id)arg2 withPersistence:(NSUInteger)arg3 ;
-(id)signedCredentialForUrl:(id)arg0 userAgent:(id)arg1 withPersistence:(NSUInteger)arg2 ;


@end


#endif