// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NACXPCCLIENT_H
#define NACXPCCLIENT_H

@class NSXPCConnection, NSMutableSet, NSString;
@protocol NACXPCInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NACXPCClient : NSObject <NACXPCInterface>

 {
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_queue> *_xpcConnectionQueue;
    NSMutableSet *_routeObservingCategories;
    NSMutableSet *_volumeObservingTargets;
    NSMutableSet *_listeningModesObservingTargets;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedClient;
-(id)_proxy;
-(id)init;
-(void)EULimitForTarget:(id)arg0 result:(id)arg1 ;
-(void)_createConnection;
-(void)_resumeListeningModesObservingIfNecessary;
-(void)_resumeRouteObservingIfNecessary;
-(void)_resumeVolumeObservingIfNecessary;
-(void)audioRoutesForCategory:(id)arg0 result:(id)arg1 ;
-(void)availableListeningModesForTarget:(id)arg0 result:(id)arg1 ;
-(void)beginObservingAudioRoutesForCategory:(id)arg0 ;
-(void)beginObservingListeningModesForTarget:(id)arg0 ;
-(void)beginObservingVolumeForTarget:(id)arg0 ;
-(void)currentListeningModeForTarget:(id)arg0 result:(id)arg1 ;
-(void)endObservingAudioRoutesForCategory:(id)arg0 ;
-(void)endObservingListeningModesForTarget:(id)arg0 ;
-(void)endObservingVolumeForTarget:(id)arg0 ;
-(void)hapticIntensity:(id)arg0 ;
-(void)hapticState:(id)arg0 ;
-(void)mutedStateForTarget:(id)arg0 result:(id)arg1 ;
-(void)pickAudioRouteWithIdentifier:(id)arg0 category:(id)arg1 ;
-(void)playAudioAndHapticPreview;
-(void)playDefaultHapticPreview;
-(void)playProminentHapticPreview;
-(void)prominentHapticEnabled:(id)arg0 ;
-(void)setCurrentListeningMode:(id)arg0 forTarget:(id)arg1 ;
-(void)setHapticIntensity:(float)arg0 ;
-(void)setHapticState:(NSInteger)arg0 ;
-(void)setMuted:(BOOL)arg0 forTarget:(id)arg1 ;
-(void)setProminentHapticEnabled:(BOOL)arg0 ;
-(void)setSystemMuted:(BOOL)arg0 ;
-(void)setVolumeValue:(float)arg0 forTarget:(id)arg1 ;
-(void)systemMutedState:(id)arg0 ;
-(void)volumeControlAvailabilityForTarget:(id)arg0 result:(id)arg1 ;
-(void)volumeValueForTarget:(id)arg0 result:(id)arg1 ;
-(void)volumeWarningForTarget:(id)arg0 result:(id)arg1 ;


@end


#endif