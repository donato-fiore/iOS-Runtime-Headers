// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCWEBKITSPISUPPORT_H
#define ASCWEBKITSPISUPPORT_H


#import <Foundation/Foundation.h>


@interface ASCWebKitSPISupport : NSObject



+(BOOL)arePasskeysDisallowedForRelyingParty:(id)arg0 ;
+(BOOL)canCurrentProcessAccessPasskeysForRelyingParty:(id)arg0 ;
+(BOOL)shouldUseAlternateCredentialStore;
+(void)getArePasskeysDisallowedForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)getCanCurrentProcessAccessPasskeysForRelyingParty:(id)arg0 withCompletionHandler:(id)arg1 ;
+(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
+(void)resetCredentialStore;
+(void)setShouldUseAlternateCredentialStore:(BOOL)arg0 ;


@end


#endif