// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBMUTABLEDEVICEAPPLICATIONSCENEPLACEHOLDERCONTENTCONTEXT_H
#define SBMUTABLEDEVICEAPPLICATIONSCENEPLACEHOLDERCONTENTCONTEXT_H

@class NSString, NSURL;


#import "SBDeviceApplicationScenePlaceholderContentContext.h"

@interface SBMutableDeviceApplicationScenePlaceholderContentContext : SBDeviceApplicationScenePlaceholderContentContext

@property (nonatomic) BOOL hasOrientationMismatchForClassicApp;
@property (nonatomic) NSInteger layoutEnvironment;
@property (nonatomic) NSUInteger preferredContentType;
@property (nonatomic) BOOL prefersLiveXIB;
@property (copy, nonatomic) NSString *requestedLaunchIdentifier;
@property (copy, nonatomic) NSURL *url;




@end


#endif