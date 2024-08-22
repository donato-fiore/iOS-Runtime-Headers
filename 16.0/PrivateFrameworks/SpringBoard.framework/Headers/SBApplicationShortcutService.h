// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBAPPLICATIONSHORTCUTSERVICE_H
#define SBAPPLICATIONSHORTCUTSERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBApplicationServerShortcutDelegate;

#import <Foundation/Foundation.h>


@interface SBApplicationShortcutService : NSObject <SBApplicationServerShortcutDelegate>

 {
    FBServiceClientAuthenticator *_serviceClientFullAccessEntitlementAuthenticator;
    FBServiceClientAuthenticator *_serviceClientCustomImageEntitlementAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)_sanitizeApplicationShortcutItems:(id)arg0 withEntitlements:(NSUInteger)arg1 ;
-(id)init;
-(void)_authenticateClient:(id)arg0 forBundleIdentifier:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)_checkEntitlementsForClient:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)applicationServer:(id)arg0 client:(id)arg1 fetchApplicationShortcutItemsOfTypes:(NSUInteger)arg2 forBundleIdentifier:(id)arg3 withCompletion:(id)arg4 ;
-(void)applicationServer:(id)arg0 client:(id)arg1 setDynamicApplicationShortcutItems:(id)arg2 forBundleIdentifier:(id)arg3 ;


@end


#endif