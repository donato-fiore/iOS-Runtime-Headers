// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CDPAUTHPROVIDERPROXY_H
#define CDPAUTHPROVIDERPROXY_H

@class NSString;
@protocol CDPAuthProviderInternal, CDPAuthProvider;

#import <Foundation/Foundation.h>


@interface CDPAuthProviderProxy : NSObject <CDPAuthProviderInternal>

 {
    id<CDPAuthProvider> *_authProvider;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)proxyWithAuthProvider:(id)arg0 ;
-(void)cdpContext:(id)arg0 performSilentRecoveryTokenRenewal:(id)arg1 ;
-(void)cdpContext:(id)arg0 verifyMasterKey:(id)arg1 completion:(id)arg2 ;


@end


#endif