// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NACIDSCLIENT_H
#define NACIDSCLIENT_H

@class IDSService, NSString;
@protocol IDSServiceDelegate, OS_dispatch_queue, NACIDSClientDelegate;

#import <Foundation/Foundation.h>


@interface NACIDSClient : NSObject <IDSServiceDelegate>

 {
    IDSService *_idsService;
    NSObject<OS_dispatch_queue> *_idsDispatchQueue;
    NSObject<OS_dispatch_queue> *_idsOutgoingQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NACIDSClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_handleAudioRoutesDidChange:(id)arg0 ;
-(void)_handleEUVolumeLimitDidChange:(id)arg0 ;
-(void)_handleHapticIntensityDidChange:(id)arg0 ;
-(void)_handleHapticStateDidChange:(id)arg0 ;
-(void)_handleListeningModesDidChange:(id)arg0 ;
-(void)_handleMutedStateDidChange:(id)arg0 ;
-(void)_handleProminentHapticStateDidChange:(id)arg0 ;
-(void)_handleRouteObservationCancelled:(id)arg0 ;
-(void)_handleSystemMutedStatedDidChange:(id)arg0 ;
-(void)_handleVolumeControlAvailabilityDidChange:(id)arg0 ;
-(void)_handleVolumeObservationCancelled:(id)arg0 ;
-(void)_handleVolumeValueDidChange:(id)arg0 ;
-(void)_handleVolumeWarningDidChange:(id)arg0 ;
-(void)_sendMessage:(id)arg0 type:(NSInteger)arg1 timeout:(CGFloat)arg2 queueOne:(id)arg3 priority:(NSInteger)arg4 ;
-(void)beginObservingAudioRoutesForCategory:(id)arg0 ;
-(void)beginObservingListeningModesForTarget:(id)arg0 ;
-(void)beginObservingVolumeForTarget:(id)arg0 ;
-(void)endObservingAudioRoutesForCategory:(id)arg0 ;
-(void)endObservingListeningModesForTarget:(id)arg0 ;
-(void)endObservingVolumeForTarget:(id)arg0 ;
-(void)pickAudioRouteWithIdentifier:(id)arg0 category:(id)arg1 ;
-(void)service:(id)arg0 account:(id)arg1 identifier:(id)arg2 didSendWithSuccess:(BOOL)arg3 error:(id)arg4 ;
-(void)setCurrentListeningMode:(id)arg0 forTarget:(id)arg1 ;
-(void)setHapticIntensity:(float)arg0 ;
-(void)setHapticState:(NSInteger)arg0 ;
-(void)setMuted:(BOOL)arg0 forTarget:(id)arg1 ;
-(void)setProminentHapticEnabled:(BOOL)arg0 ;
-(void)setSystemMuted:(BOOL)arg0 ;
-(void)setVolumeValue:(float)arg0 forTarget:(id)arg1 ;


@end


#endif