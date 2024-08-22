// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBNONINTERACTIVEDISPLAYCONTROLLERPOLICYFACTORY_H
#define SBNONINTERACTIVEDISPLAYCONTROLLERPOLICYFACTORY_H

@class FBSceneManager, NSString;
@protocol SBSceneHostingDisplayControllerPolicyFactory;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"
#import "SBApplicationController.h"

@interface SBNonInteractiveDisplayControllerPolicyFactory : NSObject <SBSceneHostingDisplayControllerPolicyFactory>

 {
    FBSceneManager *_fbSceneManager;
    SBWindowScene *_monitoredWindowScene;
    SBApplicationController *_applicationController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithFBSceneManager:(id)arg0 monitoredWindowScene:(id)arg1 applicationController:(id)arg2 ;
-(id)policyForConnectingDisplay:(id)arg0 ;
-(void)transformDisplayForControllersWithBuilder:(id)arg0 ;


@end


#endif