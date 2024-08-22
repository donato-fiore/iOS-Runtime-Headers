// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMEDUSAAPPLICATIONSHORTCUTSERVICE_H
#define SBMEDUSAAPPLICATIONSHORTCUTSERVICE_H

@class FBServiceClientAuthenticator, NSString;
@protocol SBApplicationServerMedusaShortcutDelegate;

#import <Foundation/Foundation.h>


@interface SBMedusaApplicationShortcutService : NSObject <SBApplicationServerMedusaShortcutDelegate>

 {
    FBServiceClientAuthenticator *_serviceClientAuthenticator;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(NSInteger)_switcherShortcutActionForRequestedAction:(NSInteger)arg0 ;
-(id)init;
-(void)applicationServer:(id)arg0 client:(id)arg1 fetchSupportedShortcutActionsForBundleIdentifier:(id)arg2 withCompletion:(id)arg3 ;
-(void)applicationServer:(id)arg0 client:(id)arg1 performShortcutAction:(NSInteger)arg2 forBundleIdentifier:(id)arg3 ;


@end


#endif