// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PMMPREDICTOR_H
#define PMMPREDICTOR_H

@class CXCallObserver, NSDate, NSString, PETScalarEventTracker;
@protocol PMMDataProtectionMonitorDelegate, CXCallObserverDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PMMTelephonyConnection.h"
#import "PMMDataProtectionMonitor.h"
#import "PMMAudioDisconnectListener.h"
#import "PMMPredictionItem.h"
#import "PMMMusicStateProcessor.h"

@interface PMMPredictor : NSObject <PMMDataProtectionMonitorDelegate, CXCallObserverDelegate>

 {
    BOOL _callInProgress;
    CXCallObserver *_callObserver;
}


@property (retain, nonatomic) PMMTelephonyConnection *ctConnection; // ivar: _ctConnection
@property (retain, nonatomic) PMMDataProtectionMonitor *dataProtectionMonitor; // ivar: _dataProtectionMonitor
@property (nonatomic) NSInteger dataProtectionStatus; // ivar: _dataProtectionStatus
@property (retain, nonatomic) NSDate *dateOfLastNowPlayingEvent; // ivar: _dateOfLastNowPlayingEvent
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PMMAudioDisconnectListener *disconnectListener; // ivar: _disconnectListener
@property (nonatomic) NSInteger encryptedDataAvailability; // ivar: _encryptedDataAvailability
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PETScalarEventTracker *heroAppSuggestion; // ivar: _heroAppSuggestion
@property (retain, nonatomic) PETScalarEventTracker *mmAppSuggestion; // ivar: _mmAppSuggestion
@property (retain, nonatomic) NSString *mostRecentNowPlayingApp; // ivar: _mostRecentNowPlayingApp
@property (retain, nonatomic) PMMPredictionItem *mostRecentNowPlayingPrediction; // ivar: _mostRecentNowPlayingPrediction
@property (retain, nonatomic) PMMPredictionItem *mostRecentPrediction; // ivar: _mostRecentPrediction
@property (retain, nonatomic) PMMMusicStateProcessor *musicStateProcessor; // ivar: _musicStateProcessor
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *nowPlayingStatusQueue; // ivar: _nowPlayingStatusQueue
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (nonatomic) BOOL unlockedSinceBoot; // ivar: _unlockedSinceBoot


+(BOOL)_predictionIsAudio:(id)arg0 ;
+(BOOL)_predictionPopulatesContinuity:(id)arg0 ;
+(BOOL)_predictionPopulatesNowPlaying:(id)arg0 fromUnitTest:(BOOL)arg1 ;
+(BOOL)_predictionPopulatesSpringboard:(id)arg0 ;
+(BOOL)_predictionPopulatesStark:(id)arg0 ;
+(BOOL)bundleSupportsINPlayMediaIntentForBundleId:(id)arg0 fromUnitTest:(BOOL)arg1 ;
+(NSInteger)pmmReasonToDECReason:(NSInteger)arg0 ;
+(id)getHighestConfidencePredictionForNowPlayingConsumerFromPredictions:(id)arg0 fromUnitTest:(BOOL)arg1 ;
+(id)sharedInstance;
-(BOOL)_recommendingAudioWhileAlreadyPlaying:(id)arg0 ;
-(id)_publishPredictionWithPredictedApplication:(id)arg0 fromUnitTest:(BOOL)arg1 ;
-(id)expirationForReason:(NSInteger)arg0 ;
-(id)init;
-(id)notifyNonNowPlayingConsumersOfPredictionItem:(id)arg0 ;
-(id)preprocessPrediction:(id)arg0 predictionSource:(NSUInteger)arg1 mmReason:(NSInteger)arg2 decReason:(NSInteger)arg3 reasonSingle:(NSInteger)arg4 reasonMetadata:(id)arg5 ;
-(void)_clearAllRecommendations;
-(void)_clearAllRecommendationsExceptAppPredictions;
-(void)_handleNowPlayingInfoDidChange;
-(void)_notifyAppPredictionAboutMMUpdate:(id)arg0 ;
-(void)_updatePredictionBasedOnPreviousDataProtectionStatus:(NSInteger)arg0 previousEncryptedDataAvailability:(NSInteger)arg1 ;
-(void)callObserver:(id)arg0 callChanged:(id)arg1 ;
-(void)dataProtectionMonitor:(id)arg0 dataProtectionStatusDidChange:(NSInteger)arg1 ;
-(void)dataProtectionMonitor:(id)arg0 encryptedDataAvailbilityDidChange:(NSInteger)arg1 ;
-(void)dataProtectionMonitor:(id)arg0 unlockedSinceBoot:(BOOL)arg1 ;
-(void)fetchMediaRemoteNowPlayingApplicationBundleId:(id)arg0 ;
-(void)fetchMediaRemoteNowPlayingApplicationPlaybackState:(id)arg0 ;
-(void)handleNowPlayingInfoDidChange;
-(void)handlePredictedApplications:(id)arg0 ;
-(void)logPrediction:(id)arg0 predictionSource:(NSUInteger)arg1 mmReason:(NSInteger)arg2 decReason:(NSInteger)arg3 reasonSingle:(NSInteger)arg4 reasonMetadata:(id)arg5 ;
-(void)notifyNowPlayingConsumerOfPredictionItem:(id)arg0 ;


@end


#endif