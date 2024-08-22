// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INAPPTRUST_H
#define INAPPTRUST_H


#import <Foundation/Foundation.h>


@interface INAppTrust : NSObject



+(BOOL)_appRequiresExplicitTrust:(id)arg0 withExplicitAppTrustCache:(id)arg1 ;
+(BOOL)_shouldTrustAppForLaunch:(id)arg0 withExplicitAppTrustCache:(id)arg1 ;
+(BOOL)_shouldTrustExtensionForLaunch:(id)arg0 withExplicitAppTrustCache:(id)arg1 ;
+(BOOL)shouldTrustAppForLaunch:(id)arg0 ;
+(BOOL)shouldTrustExtensionForLaunch:(id)arg0 ;
+(id)appsTrustedForLaunch:(id)arg0 ;
+(id)extensionsTrustedForLaunch:(id)arg0 ;


@end


#endif