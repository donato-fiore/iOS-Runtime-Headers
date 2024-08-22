// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONMULTIWINDOWSERVICE_H
#define SBAPPLICATIONMULTIWINDOWSERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBApplicationServerMultiwindowDelegate;

#import <Foundation/Foundation.h>


@interface SBApplicationMultiwindowService : NSObject <SBApplicationServerMultiwindowDelegate>

 {
    FBServiceClientAuthenticator *_triggerShowAllWindowsEntitlementAuthenticator;
    FBServiceClientAuthenticator *_requestShelfPresentationEntitlementAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)applicationServer:(id)arg0 client:(id)arg1 requestShelfPresentationForSceneWithIdentifier:(id)arg2 ;
-(void)applicationServer:(id)arg0 client:(id)arg1 showAllWindowsForBundleIdentifier:(id)arg2 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg0 ;
-(void)triggerShowAllWindowsForApplicationBundleIdentifier:(id)arg0 displayConfiguration:(id)arg1 ;


@end


#endif