// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBWINDOWSCENEMANAGER_H
#define SBWINDOWSCENEMANAGER_H

@class NSSet, NSMutableSet;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBWindowSceneManager : NSObject

@property (readonly, nonatomic) SBWindowScene *activeDisplayWindowScene;
@property (readonly, copy, nonatomic) NSSet *connectedWindowScenes;
@property (readonly, nonatomic) NSMutableSet *mutableConnectedWindowScenes; // ivar: _mutableConnectedWindowScenes


-(id)_embeddedDisplayWindowScene;
-(id)embeddedDisplayWindowScene;
-(id)init;
-(id)windowSceneForDisplayIdentity:(id)arg0 ;
-(id)windowSceneForPersistentIdentifier:(id)arg0 ;
-(id)windowSceneForSceneHandle:(id)arg0 ;
-(id)windowSceneForSceneIdentifier:(id)arg0 ;
-(void)_sceneDidDisconnect:(id)arg0 ;
-(void)_sceneWillConnect:(id)arg0 ;


@end


#endif