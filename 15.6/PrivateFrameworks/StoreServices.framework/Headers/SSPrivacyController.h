// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSPRIVACYCONTROLLER_H
#define SSPRIVACYCONTROLLER_H


#import <Foundation/Foundation.h>


@interface SSPrivacyController : NSObject



+(BOOL)shouldDisplayPrivacyLinkWithIdentifier:(id)arg0 ;
+(NSUInteger)_currentPrivacyContentVersionForIdentifier:(id)arg0 ;
+(id)_appendPrivacyAcknowledgementToActiveAccount:(id)arg0 withURL:(id)arg1 ;
+(id)_syncPrivacyAcknowledgementOnAccount:(id)arg0 URL:(id)arg1 ;
+(id)_translateIdentifierToPrivacyAcknowledgement:(id)arg0 withVersion:(NSUInteger)arg1 ;
+(id)appStorePrivacyIdentifiers;
+(id)storePrivacyIdentifiers;
+(id)viewControllerForPrivacySplashWithIdentifier:(id)arg0 URL:(id)arg1 ;
+(void)_appendPrivacyAcknowledgement:(id)arg0 toAccount:(id)arg1 ;
+(void)_appendPrivacyAcknowledgementToLocalAccount:(id)arg0 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg0 ;
+(void)acknowledgePrivacyLinkWithIdentifier:(id)arg0 URL:(id)arg1 ;
+(void)syncPrivacyAcknowledgementOnAccount:(id)arg0 URL:(id)arg1 ;


@end


#endif