// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OAPLAINTEXTSIGNER_H
#define OAPLAINTEXTSIGNER_H

@protocol OAuthSigner;

#import <Foundation/Foundation.h>


@interface OAPlainTextSigner : NSObject <OAuthSigner>





+(id)signatureForText:(id)arg0 withKey:(id)arg1 ;


@end


#endif