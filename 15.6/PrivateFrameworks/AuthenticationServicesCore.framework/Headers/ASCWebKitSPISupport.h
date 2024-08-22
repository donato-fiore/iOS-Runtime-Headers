// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCWEBKITSPISUPPORT_H
#define ASCWEBKITSPISUPPORT_H


#import <Foundation/Foundation.h>


@interface ASCWebKitSPISupport : NSObject



+(BOOL)shouldUseAlternateCredentialStore;
+(void)getShouldUseAlternateCredentialStoreWithCompletionHandler:(id)arg0 ;
+(void)resetCredentialStore;
+(void)setShouldUseAlternateCredentialStore:(BOOL)arg0 ;


@end


#endif