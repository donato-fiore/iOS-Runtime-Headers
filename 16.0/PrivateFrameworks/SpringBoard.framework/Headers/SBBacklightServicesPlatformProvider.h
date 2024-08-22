// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBACKLIGHTSERVICESPLATFORMPROVIDER_H
#define SBBACKLIGHTSERVICESPLATFORMPROVIDER_H

@class NSString, UIWindowScene;
@protocol BLSHServicePlatformProvider, BLSHBacklightPlatformProvider;

#import <Foundation/Foundation.h>

#import "SBAlwaysOnPolicyCoordinator.h"
#import "SBBacklightSignificantUserInteractionMonitor.h"

@interface SBBacklightServicesPlatformProvider : NSObject <BLSHServicePlatformProvider>



@property (readonly, nonatomic) SBAlwaysOnPolicyCoordinator *alwaysOnPolicyCoordinator;
@property (readonly, nonatomic) NSObject<BLSHBacklightPlatformProvider> *backlightPlatformProvider; // ivar: _backlightPlatformProvider
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SBBacklightSignificantUserInteractionMonitor *significantUserInteractionMonitor;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIWindowScene *windowScene;


-(id)init;
-(id)initWithBacklightEnvironmentSessionProvider:(id)arg0 ;
-(void)completeInitializationAfterBLSStartup;


@end


#endif