// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSCENEDISCONNECTIONMANAGER_H
#define SBSCENEDISCONNECTIONMANAGER_H


#import <Foundation/Foundation.h>


@interface SBSceneDisconnectionManager : NSObject

@property (nonatomic) BOOL isExecuting; // ivar: _isExecuting
@property (nonatomic) NSUInteger numberOfRecentScenesExcludedFromDisconnection; // ivar: _numberOfRecentScenesExcludedFromDisconnection


+(id)sharedManager;
-(BOOL)shouldDisconnectScene:(id)arg0 inSwitcher:(id)arg1 ;
-(NSUInteger)positionOf:(id)arg0 inSwitcher:(id)arg1 ;
-(id)init;
-(id)liveScenesForApplication:(id)arg0 ;
-(id)sceneManager;
-(void)_beginSceneCleanupWithBackgroundedSceneEntities:(id)arg0 ;
-(void)disconnectScenes:(id)arg0 completion:(id)arg1 ;


@end


#endif