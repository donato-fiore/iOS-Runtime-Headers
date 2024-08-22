// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSPLASHBOARDLAUNCHREQUESTPROVIDER_H
#define SBSPLASHBOARDLAUNCHREQUESTPROVIDER_H

@class FBSDisplayConfiguration, NSString;
@protocol XBApplicationLaunchRequestProviding;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"

@interface SBSplashBoardLaunchRequestProvider : NSObject <XBApplicationLaunchRequestProviding>

 {
    SBApplicationController *_applicationController;
    FBSDisplayConfiguration *_displayConfiguration;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithApplicationController:(id)arg0 displayConfiguration:(id)arg1 ;
-(id)launchRequestsForApplication:(id)arg0 withCompatibilityInfo:(id)arg1 defaultLaunchRequests:(id)arg2 ;


@end


#endif