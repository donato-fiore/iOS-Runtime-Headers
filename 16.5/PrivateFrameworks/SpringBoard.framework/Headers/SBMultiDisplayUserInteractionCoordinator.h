// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBMULTIDISPLAYUSERINTERACTIONCOORDINATOR_H
#define SBMULTIDISPLAYUSERINTERACTIONCOORDINATOR_H

@class NSHashTable, NSString, NSMapTable;
@protocol _SBPointerTouchDownEventSnifferDelegate, _SBTouchInteractionEventSnifferDelegate, _SBPointerInteractionEventSnifferDelegate, SBActiveWindowSceneTracking, SBWindowSceneAttachmentObserving, SBMultiDisplayUserInteractionCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "SBWindowScene.h"

@interface SBMultiDisplayUserInteractionCoordinator : NSObject <_SBPointerTouchDownEventSnifferDelegate, _SBTouchInteractionEventSnifferDelegate, _SBPointerInteractionEventSnifferDelegate, SBActiveWindowSceneTracking, SBWindowSceneAttachmentObserving>

 {
    SBWindowScene *_activeDisplayWindowScene;
    SBWindowScene *_activePointerWindowScene;
}


@property (readonly, weak, nonatomic) SBWindowScene *activePointerWindowScene;
@property (readonly, weak, nonatomic) SBWindowScene *activeTouchDownOriginatedWindowScene; // ivar: _activeTouchDownOriginatedWindowScene
@property (readonly, weak, nonatomic) SBWindowScene *activeWindowScene;
@property (retain, nonatomic) NSHashTable *activeWindowSceneObservers; // ivar: _activeWindowSceneObservers
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SBMultiDisplayUserInteractionCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSHashTable *pointerInteractionObservers; // ivar: _pointerInteractionObservers
@property (retain, nonatomic) NSMapTable *sceneToEventSniffers; // ivar: _sceneToEventSniffers
@property (readonly) Class superclass;


-(id)_windowSceneForEvent:(id)arg0 ;
-(id)init;
-(void)_handleActiveDisplayQualifyingEventInWindowScene:(id)arg0 source:(id)arg1 ;
-(void)addActiveDisplayWindowSceneObserver:(id)arg0 ;
-(void)addPointerInteractionObserver:(id)arg0 ;
-(void)eventSnifferHandledPointerInteractionQualifyingEvent:(id)arg0 ;
-(void)eventSnifferHandledPointerTouchDown:(id)arg0 ;
-(void)eventSnifferHandledPointerTouchUp:(id)arg0 ;
-(void)eventSnifferHandledTouchInteractionQualifyingEvent:(id)arg0 ;
-(void)handleSendEvent:(id)arg0 ;
-(void)removeActiveDisplayWindowSceneObserver:(id)arg0 ;
-(void)removePointerInteractionObserver:(id)arg0 ;
-(void)windowSceneDidConnect:(id)arg0 ;
-(void)windowSceneDidDisconnect:(id)arg0 ;


@end


#endif