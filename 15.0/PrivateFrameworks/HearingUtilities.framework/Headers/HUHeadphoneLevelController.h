// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUHEADPHONELEVELCONTROLLER_H
#define HUHEADPHONELEVELCONTROLLER_H

@class AXDispatchTimer, NSString, ADAMAudioDataReceiver;
@protocol ADAMAudioDataReceiverDelegate, AXIDSServicesClient, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HUHeadphoneLevelController : NSObject <ADAMAudioDataReceiverDelegate, AXIDSServicesClient>



@property (retain, nonatomic) AXDispatchTimer *adamSuspendedTimer; // ivar: _adamSuspendedTimer
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // ivar: _dataQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float fastLeq; // ivar: _fastLeq
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *idsQueue; // ivar: _idsQueue
@property (nonatomic) BOOL isCompanionConnectedToIDS; // ivar: _isCompanionConnectedToIDS
@property (nonatomic, getter=isMeasurementEnabled) BOOL measurementEnabled; // ivar: _measurementEnabled
@property (retain, nonatomic) ADAMAudioDataReceiver *receiver; // ivar: _receiver
@property (nonatomic) BOOL shouldStreamingDataToGizmo; // ivar: _shouldStreamingDataToGizmo
@property (nonatomic) float slowLeq; // ivar: _slowLeq
@property (nonatomic) NSUInteger streamingDataToGizmoType; // ivar: _streamingDataToGizmoType
@property (nonatomic) NSUInteger streamingToGizmoAudioLevel; // ivar: _streamingToGizmoAudioLevel
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger thresholdLevel; // ivar: _thresholdLevel


+(id)sharedController;
-(NSUInteger)_audioLevelFromAudioDict:(id)arg0 ;
-(id)_pushPayload;
-(id)_sendIDSRequestToCompanion:(id)arg0 messageIdentifier:(NSUInteger)arg1 ;
-(id)init;
-(id)registerForHeadphoneLevelUpdates:(id)arg0 ;
-(id)registerForRemoteHeadphoneLevelChangesUpdates:(id)arg0 ;
-(id)registerForRemoteHeadphoneLevelUpdates:(id)arg0 ;
-(void)_mediaPlaybackDidChange:(id)arg0 ;
-(void)_publishAudioDataIDSMessage:(id)arg0 ;
-(void)_publishRequestAudioDataIDSMessage:(id)arg0 ;
-(void)_pushValues:(id)arg0 identifier:(NSUInteger)arg1 ;
-(void)_registerMediaNotification;
-(void)_startIDSConnection;
-(void)_startRecevingADAMAudioSample:(BOOL)arg0 ;
-(void)_stopIDSConnection;
-(void)_unregisterMediaNotification;
-(void)connectedDevicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)didReceiveIncomingData:(id)arg0 ;
-(void)pushValuesToLocalOrIDSListeners;
-(void)pushValuesToRemoteChangeListeners;
-(void)pushValuesToRemoteListeners;
-(void)receiveAudioSample:(id)arg0 ;
-(void)restartADAMTimer;
-(void)serverConnectionWasInterrupted;


@end


#endif