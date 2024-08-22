// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBBACKLIGHTENVIRONMENTSESSIONPROVIDER_H
#define SBBACKLIGHTENVIRONMENTSESSIONPROVIDER_H

@class NSHashTable, SBFAlwaysOnLiveRenderingAssertion, BLSHBacklightInactiveEnvironmentSession, NSSet, NSString;
@protocol BLSHBacklightInactiveEnvironmentSessionObserving, BLSHBacklightEnvironmentSessionProviding;

#import <Foundation/Foundation.h>


@interface SBBacklightEnvironmentSessionProvider : NSObject <BLSHBacklightInactiveEnvironmentSessionObserving, BLSHBacklightEnvironmentSessionProviding>

 {
    NSHashTable *_backlightEnvironmentSceneProviders;
    NSHashTable *_backlightSceneHostEnvironmentProviders;
    NSHashTable *_observers;
    SBFAlwaysOnLiveRenderingAssertion *_presentationUpdateLiveRenderAssertion;
    BOOL _springBoardBootCompleted;
}


@property (retain, nonatomic, setter=_setCurrentSession:) BLSHBacklightInactiveEnvironmentSession *_currentSession; // ivar: _currentSession
@property (readonly, copy, nonatomic) NSSet *currentPresentationBundleIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_backlightPresentationEntries;
-(id)_buildPresentation;
-(id)createInactiveEnvironmentSession;
-(id)init;
-(void)_notifyObserversOfPresentation;
-(void)_rebuildPresentation;
-(void)addObserver:(id)arg0 ;
-(void)didEndInactiveEnvironmentSession:(id)arg0 ;
-(void)inactiveEnvironmentSession:(id)arg0 didUpdateToPresentation:(id)arg1 ;
-(void)invalidateBacklightSceneHostEnvironmentsForProvider:(id)arg0 ;
-(void)invalidateBacklightScenesForProvider:(id)arg0 ;
-(void)registerBacklightEnvironmentSceneProvider:(id)arg0 ;
-(void)registerBacklightSceneHostEnvironmentProvider:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;
-(void)unregisterBacklightEnvironmentSceneProvider:(id)arg0 ;
-(void)unregisterBacklightSceneHostEnvironmentProvider:(id)arg0 ;


@end


#endif