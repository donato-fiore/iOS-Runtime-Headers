// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OAHMAC_SHA1SIGNER_H
#define OAHMAC_SHA1SIGNER_H

@protocol OAuthSigner;

#import <Foundation/Foundation.h>


@interface OAHMAC_SHA1Signer : NSObject <OAuthSigner>





+(id)signatureForText:(id)arg0 withKey:(id)arg1 ;


@end


#endif