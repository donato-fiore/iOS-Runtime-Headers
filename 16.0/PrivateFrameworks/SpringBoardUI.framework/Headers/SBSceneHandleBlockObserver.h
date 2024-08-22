// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBSCENEHANDLEBLOCKOBSERVER_H
#define SBSCENEHANDLEBLOCKOBSERVER_H

@class NSMutableDictionary, NSString;
@protocol BSInvalidatable, SBSceneHandleObserver;

#import <Foundation/Foundation.h>


@interface SBSceneHandleBlockObserver : NSObject <BSInvalidatable, SBSceneHandleObserver>

 {
    NSMutableDictionary *_createBlocks;
    NSMutableDictionary *_destroyBlocks;
    NSMutableDictionary *_didUpdateContentStateBlocks;
    NSMutableDictionary *_didUpdateSettingsBlocks;
    NSMutableDictionary *_didUpdateClientSettingsBlocks;
    NSMutableDictionary *_didUpdatePairingStatusBlocks;
    BOOL _invalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)observeCreate:(id)arg0 ;
-(id)observeDestroy:(id)arg0 ;
-(id)observeDidUpdateClientSettings:(id)arg0 ;
-(id)observeDidUpdateContentState:(id)arg0 ;
-(id)observeDidUpdatePairingStatusForExternalIdentifiers:(id)arg0 ;
-(id)observeDidUpdateSettings:(id)arg0 ;
-(void)dealloc;
-(void)invalidate;
-(void)removeObserverForToken:(id)arg0 ;
-(void)sceneHandle:(id)arg0 didCreateScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didDestroyScene:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateClientSettingsWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg0 didUpdateContentState:(NSInteger)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdatePairingStatusForExternalSceneIdentifiers:(id)arg1 ;
-(void)sceneHandle:(id)arg0 didUpdateSettingsWithDiff:(id)arg1 previousSettings:(id)arg2 ;


@end


#endif