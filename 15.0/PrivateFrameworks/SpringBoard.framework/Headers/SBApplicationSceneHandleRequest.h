// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSCENEHANDLEREQUEST_H
#define SBAPPLICATIONSCENEHANDLEREQUEST_H

@class FBSDisplayIdentity, FBScene, FBSSceneDefinition;

#import <Foundation/Foundation.h>

#import "SBApplication.h"

@interface SBApplicationSceneHandleRequest : NSObject

@property (retain, nonatomic) SBApplication *application; // ivar: _application
@property (retain, nonatomic) FBSDisplayIdentity *displayIdentity; // ivar: _displayIdentity
@property (retain, nonatomic) FBScene *existingScene; // ivar: _existingScene
@property (copy, nonatomic) FBSSceneDefinition *sceneDefinition; // ivar: _sceneDefinition


+(id)defaultRequestForApplication:(id)arg0 sceneIdentity:(id)arg1 displayIdentity:(id)arg2 ;
+(id)defaultSceneSpecificationForDisplayIdentity:(id)arg0 ;
-(id)initWithApplication:(id)arg0 sceneDefinition:(id)arg1 displayIdentity:(id)arg2 ;


@end


#endif