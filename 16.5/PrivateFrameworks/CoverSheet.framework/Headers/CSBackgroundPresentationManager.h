// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSBACKGROUNDPRESENTATIONMANAGER_H
#define CSBACKGROUNDPRESENTATIONMANAGER_H

@class FBScene, BLSHGenericSceneDelegateWithActionHandlers, FBSceneWorkspace;
@protocol UIScenePresenter;

#import <Foundation/Foundation.h>


@interface CSBackgroundPresentationManager : NSObject

@property (readonly, nonatomic) FBScene *currentScene; // ivar: _currentScene
@property (readonly, nonatomic) BLSHGenericSceneDelegateWithActionHandlers *sceneDelegate; // ivar: _sceneDelegate
@property (readonly, nonatomic) NSObject<UIScenePresenter> *scenePresenter; // ivar: _scenePresenter
@property (readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // ivar: _sceneWorkspace


-(id)createBackgroundViewControllerForDefinition:(id)arg0 ;
-(id)init;
-(void)dealloc;


@end


#endif