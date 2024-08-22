// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CDPDAUTHPROXYIMPL_H
#define CDPDAUTHPROXYIMPL_H

@class NSString;
@protocol CDPDAuthProviderInternal;

#import <Foundation/Foundation.h>


@interface CDPDAuthProxyImpl : NSObject <CDPDAuthProviderInternal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isPrimaryAppleIDLoggedIn;
-(id)_authContextFromCDPContext:(id)arg0 ;
-(void)cdpContext:(id)arg0 persistMasterKeyVerifier:(id)arg1 completion:(id)arg2 ;


@end


#endif