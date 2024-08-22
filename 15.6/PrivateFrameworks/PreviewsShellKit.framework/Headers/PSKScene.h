// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PSKSCENE_H
#define PSKSCENE_H

@class FBScene, NSString;

#import <Foundation/Foundation.h>

#import "PSKSceneSettings.h"

@interface PSKScene : NSObject

@property (readonly, nonatomic) FBScene *scene; // ivar: _scene
@property (readonly, nonatomic) NSString *sceneIdentifier;
@property (readonly, nonatomic) PSKSceneSettings *sceneSettings;


-(id)initWithScene:(id)arg0 ;
-(void)updateSceneSettings:(id)arg0 with:(id)arg1 ;


@end


#endif