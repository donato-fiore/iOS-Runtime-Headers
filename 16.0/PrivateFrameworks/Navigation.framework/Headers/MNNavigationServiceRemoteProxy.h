// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNNAVIGATIONSERVICEREMOTEPROXY_H
#define MNNAVIGATIONSERVICEREMOTEPROXY_H

@class NSXPCConnection, geo_isolater, NSHashTable, NSMutableArray, NSArray, NSString;
@protocol MNNavigationServiceProxy, OS_dispatch_queue, MNNavigationServiceClientInterface;

#import <Foundation/Foundation.h>

#import "MNUserOptions.h"
#import "MNStartNavigationDetails.h"

@interface MNNavigationServiceRemoteProxy : NSObject <MNNavigationServiceProxy>

 {
    BOOL _applicationActive;
    NSXPCConnection *_connection;
    MNUserOptions *_userOptions;
    geo_isolater *_clientsLock;
    NSHashTable *_clients;
    MNStartNavigationDetails *_startNavigationDetails;
    geo_isolater *_interruptionDatesLock;
    NSMutableArray *_interruptionDates;
    BOOL _isReconnecting;
    NSArray *_announcementsToIgnore;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSInteger _sandboxHandle;
}


@property (readonly, nonatomic) NSUInteger clientCount;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MNNavigationServiceClientInterface> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger interruptionCount;
@property (readonly, nonatomic) NSArray *interruptionDates;
@property (readonly) Class superclass;


-(BOOL)_hasNavigationServiceEntitlement;
-(BOOL)_shouldReconnectWithInterruptionOnDate:(id)arg0 ;
-(BOOL)isOpenForClient:(id)arg0 ;
-(id)_remoteObjectProxy;
-(id)init;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(void)_closeConnection;
-(void)_consumeSandboxExtension:(char *)arg0 ;
-(void)_handleInterruption;
-(void)_openConnection;
-(void)_releaseSandboxExtension;
-(void)_restoreIdleConnection;
-(void)_restoreNavigationSession;
-(void)_startNavigationWithDetails:(id)arg0 ;
-(void)_updateConnection;
-(void)acceptReroute:(BOOL)arg0 forTrafficIncidentAlert:(id)arg1 ;
-(void)advanceToNextLeg;
-(void)changeUserOptions:(id)arg0 ;
-(void)checkinForNavigationService:(id)arg0 ;
-(void)closeForClient:(id)arg0 ;
-(void)dealloc;
-(void)disableNavigationCapability:(NSUInteger)arg0 ;
-(void)enableNavigationCapability:(NSUInteger)arg0 ;
-(void)forceReroute;
-(void)forwardInvocation:(id)arg0 ;
-(void)insertWaypoint:(id)arg0 ;
-(void)interfaceHashesWithHandler:(id)arg0 ;
-(void)navigationServiceProxy:(id)arg0 didChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)navigationServiceProxy:(id)arg0 didUpdateNavigationDetails:(id)arg1 ;
-(void)navigationServiceProxy:(id)arg0 willChangeFromState:(NSUInteger)arg1 toState:(NSUInteger)arg2 ;
-(void)openForClient:(id)arg0 ;
-(void)pauseRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)recordPedestrianTracePath:(id)arg0 ;
-(void)recordTraceBookmarkAtCurrentPositionWthScreenshotData:(id)arg0 ;
-(void)removeWaypointAtIndex:(NSUInteger)arg0 ;
-(void)repeatCurrentGuidanceWithReply:(id)arg0 ;
-(void)repeatCurrentTrafficAlertWithReply:(id)arg0 ;
-(void)rerouteWithWaypoints:(id)arg0 ;
-(void)resumeOriginalDestination;
-(void)resumeRealtimeUpdatesForSubscriber:(id)arg0 ;
-(void)setDisplayedStepIndex:(NSUInteger)arg0 ;
-(void)setGuidancePromptsEnabled:(BOOL)arg0 ;
-(void)setGuidanceType:(NSUInteger)arg0 ;
-(void)setHeadingOrientation:(int)arg0 ;
-(void)setIsConnectedToCarplay:(BOOL)arg0 ;
-(void)setJunctionViewImageWidth:(CGFloat)arg0 height:(CGFloat)arg1 ;
-(void)setRideIndex:(NSUInteger)arg0 forSegmentIndex:(NSUInteger)arg1 ;
-(void)setRoutesForPreview:(id)arg0 selectedRouteIndex:(NSUInteger)arg1 ;
-(void)setSimulationPosition:(CGFloat)arg0 ;
-(void)setSimulationSpeedMultiplier:(CGFloat)arg0 ;
-(void)setSimulationSpeedOverride:(CGFloat)arg0 ;
-(void)setTraceIsPlaying:(BOOL)arg0 ;
-(void)setTracePlaybackSpeed:(CGFloat)arg0 ;
-(void)setTracePosition:(CGFloat)arg0 ;
-(void)startNavigationWithDetails:(id)arg0 activeBlock:(id)arg1 ;
-(void)stopCurrentGuidancePrompt;
-(void)stopNavigationWithReason:(NSUInteger)arg0 ;
-(void)switchToRoute:(id)arg0 ;
-(void)updateDestination:(id)arg0 ;
-(void)vibrateForPrompt:(NSUInteger)arg0 withReply:(id)arg1 ;


@end


#endif