// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBLAUNCHIMAGEOVERRIDESCONTEXT_H
#define SBLAUNCHIMAGEOVERRIDESCONTEXT_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>

#import "SBActivationSettings.h"

@interface SBLaunchImageOverridesContext : NSObject

@property (readonly, nonatomic) SBActivationSettings *activationSettings; // ivar: _settings
@property (readonly, nonatomic) BOOL ignoreSnapshots; // ivar: _ignoreSnapshots
@property (readonly, copy, nonatomic) NSString *launchImageName; // ivar: _launchImageName
@property (readonly, copy, nonatomic) NSString *sceneID; // ivar: _sceneID
@property (readonly, copy, nonatomic) NSURL *url; // ivar: _url


-(id)initWithSceneID:(id)arg0 activationSettings:(id)arg1 ;


@end


#endif