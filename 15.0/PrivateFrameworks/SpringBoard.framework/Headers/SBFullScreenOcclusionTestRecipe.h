// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBFULLSCREENOCCLUSIONTESTRECIPE_H
#define SBFULLSCREENOCCLUSIONTESTRECIPE_H

@class FBScene, NSString;
@protocol FBSceneManagerObserver, SBTestRecipe;

#import <Foundation/Foundation.h>

#import "SBWindow.h"

@interface SBFullScreenOcclusionTestRecipe : NSObject <FBSceneManagerObserver, SBTestRecipe>

 {
    SBWindow *_window;
    FBScene *_scene;
    FBScene *_scene2;
    BOOL _doTheThing;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)load;
-(id)init;
-(id)title;
-(void)dealloc;
-(void)handleVolumeDecrease;
-(void)handleVolumeIncrease;
-(void)sceneManager:(id)arg0 didCommitUpdateForScene:(id)arg1 transactionID:(NSUInteger)arg2 ;
-(void)sceneManager:(id)arg0 didCreateScene:(id)arg1 withClient:(id)arg2 ;
-(void)sceneManager:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 willCommitUpdateForScene:(id)arg1 transactionID:(NSUInteger)arg2 ;
-(void)sceneManager:(id)arg0 willDestroyScene:(id)arg1 ;
-(void)sceneManager:(id)arg0 willUpdateScene:(id)arg1 withSettings:(id)arg2 transitionContext:(id)arg3 ;


@end


#endif