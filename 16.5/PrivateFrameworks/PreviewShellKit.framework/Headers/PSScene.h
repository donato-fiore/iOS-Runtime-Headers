// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSSCENE_H
#define PSSCENE_H

@class FBScene, NSString;

#import <Foundation/Foundation.h>

#import "PSSceneSettings.h"

@interface PSScene : NSObject

@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) PSSceneSettings *sceneSettings;


-(id)initWithScene:(id)arg0 ;
-(void)updateSceneSettings:(id)arg0 with:(id)arg1 ;


@end


#endif