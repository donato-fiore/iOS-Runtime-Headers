// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBNONINTERACTIVEDISPLAYMODERESOLVERFACTORY_H
#define SBNONINTERACTIVEDISPLAYMODERESOLVERFACTORY_H

@class NSString;
@protocol SBWindowingModeResolverFactory, SBFAuthenticationStatusProvider;

#import <Foundation/Foundation.h>

#import "SBApplicationController.h"
#import "SBWindowScene.h"

@interface SBNonInteractiveDisplayModeResolverFactory : NSObject <SBWindowingModeResolverFactory>

 {
    SBApplicationController *_applicationController;
    id<SBFAuthenticationStatusProvider> *_userAuthenticationProvider;
    SBWindowScene *_monitoredWindowScene;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger displayWindowingMode;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithApplicationController:(id)arg0 userAuthenticationProvider:(id)arg1 monitoredWindowScene:(id)arg2 ;
-(id)resolverForPhysicalDisplay:(id)arg0 ;


@end


#endif