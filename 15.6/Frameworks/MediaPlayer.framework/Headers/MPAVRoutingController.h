// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPAVROUTINGCONTROLLER_H
#define MPAVROUTINGCONTROLLER_H

@class NSArray, NSString, NSSet;
@protocol NSObject, OS_dispatch_queue, MPAVRoutingControllerDelegate, MPAVOutputDevicePlaybackDataSource;

#import <Foundation/Foundation.h>

#import "MPAVRoutingControllerSelectionQueue.h"
#import "MPAVRoutingDataSource.h"
#import "MPAVRoute.h"

@interface MPAVRoutingController : NSObject <NSObject>

 {
    NSArray *_cachedRoutes;
    NSArray *_cachedPickedRoutes;
    NSInteger _externalScreenType;
    BOOL _hasExternalScreenType;
    BOOL _scheduledSendDelegateRoutesChanged;
    NSInteger _volumeControlStateForPickedRoute;
    MPAVRoutingControllerSelectionQueue *_routingControllerSelectionQueue;
    int _deviceAvailabilityNotifyToken;
    BOOL _deviceAvailabilityOverrideState;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSUInteger _stateHandle;
    BOOL _alwaysAllowUpdates;
}


@property (nonatomic) BOOL alwaysAllowUpdates;
@property (readonly, copy, nonatomic) NSArray *availableRoutes;
@property (copy, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) MPAVRoutingDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MPAVRoutingControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger discoveryMode; // ivar: _discoveryMode
@property (readonly, nonatomic) NSInteger externalScreenType;
@property (nonatomic) BOOL fetchAvailableRoutesSynchronously; // ivar: _fetchAvailableRoutesSynchronously
@property (readonly, nonatomic) BOOL hasPendingPickedRoutes;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPAVRoute *legacyCachedRoute; // ivar: _legacyCachedRoute
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) MPAVRoute *pendingPickedRoute;
@property (readonly, nonatomic) NSSet *pendingPickedRoutes;
@property (readonly, nonatomic) MPAVRoute *pickedRoute;
@property (readonly, nonatomic) NSArray *pickedRoutes;
@property (weak, nonatomic) NSObject<MPAVOutputDevicePlaybackDataSource> *playbackDataSource; // ivar: _playbackDataSource
@property (copy, nonatomic) NSString *presentedBundleID; // ivar: _presentedBundleID
@property (copy, nonatomic) NSString *representedBundleID; // ivar: _representedBundleID
@property (readonly, nonatomic) BOOL representsLongFormVideoContent; // ivar: _representsLongFormVideoContent
@property (nonatomic) NSInteger routeTypes; // ivar: _routeTypes
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsMultipleSelection;
@property (readonly, nonatomic) BOOL volumeControlIsAvailable;


+(BOOL)bundleIdRepresentsLongFormVideoContent:(id)arg0 ;
+(id)_currentDeviceRoutingIconImage;
+(id)_currentDeviceRoutingIconImageName;
+(id)_currentDeviceRoutingSymbolImage;
+(id)_currentDeviceRoutingSymbolName;
+(id)_iconImageForIdentifier:(id)arg0 ;
+(id)_iconImageForRoute:(id)arg0 ;
+(id)_iconImageForRoutes:(id)arg0 ;
+(id)_iconImageNameForClusterRoute:(id)arg0 isSymbol:(BOOL)arg1 ;
+(id)_iconNameForRoute:(id)arg0 ;
+(id)_iconNameForRoute:(id)arg0 isSymbol:(BOOL)arg1 ;
+(id)_iconNameForRoutes:(id)arg0 isSymbol:(BOOL)arg1 ;
+(id)_sharedWorkerQueue;
+(id)_symbolImageForRoute:(id)arg0 ;
+(id)_symbolImageForRoutes:(id)arg0 ;
+(id)_symbolNameForModelID:(id)arg0 ;
+(id)_symbolNameForRoute:(id)arg0 ;
+(id)_symbolNameForRoutes:(id)arg0 ;
+(id)systemRoute;
+(id)systemRouteWithContextUID:(id)arg0 ;
+(void)_getActiveRouteWithTimeout:(CGFloat)arg0 type:(NSInteger)arg1 discoveredRoutes:(id)arg2 completion:(id)arg3 ;
+(void)getActiveRouteWithCompletion:(id)arg0 ;
+(void)getActiveRouteWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
+(void)getProactiveRouteWithCompletion:(id)arg0 ;
+(void)getProactiveRouteWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
+(void)setActiveRoute:(id)arg0 completion:(id)arg1 ;
+(void)setActiveRoute:(id)arg0 reason:(id)arg1 completion:(id)arg2 ;
-(BOOL)_deviceAvailabilityOverrideState;
-(BOOL)_pickRoute:(id)arg0 completion:(id)arg1 ;
-(BOOL)_shouldSendDelegateRoutesChanged;
-(BOOL)addPickedRoute:(id)arg0 ;
-(BOOL)addPickedRoute:(id)arg0 completion:(id)arg1 ;
-(BOOL)airtunesRouteIsPicked;
-(BOOL)handsetRouteIsPicked;
-(BOOL)pickBestDeviceRoute;
-(BOOL)pickHandsetRoute;
-(BOOL)pickRoute:(id)arg0 ;
-(BOOL)pickRoute:(id)arg0 withPassword:(id)arg1 ;
-(BOOL)pickRoute:(id)arg0 withPassword:(id)arg1 completion:(id)arg2 ;
-(BOOL)pickSpeakerRoute;
-(BOOL)receiverRouteIsPicked;
-(BOOL)removePickedRoute:(id)arg0 ;
-(BOOL)removePickedRoute:(id)arg0 completion:(id)arg1 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg0 ;
-(BOOL)routeIsPendingPick:(id)arg0 ;
-(BOOL)routeOtherThanHandsetAndSpeakerAvailable;
-(BOOL)routeOtherThanHandsetAvailable;
-(BOOL)speakerRouteIsPicked;
-(BOOL)wirelessDisplayRouteIsPicked;
-(BOOL)wirelessDisplayRoutesAvailable;
-(NSInteger)_externalScreenType:(*BOOL)arg0 ;
-(NSInteger)_volumeControlStateForPickedRoute;
-(id)_fullStateDumpObject;
-(id)_pickedRouteInArray:(id)arg0 ;
-(id)_pickedRoutesInArray:(id)arg0 ;
-(id)_stateDumpObject;
-(id)cachedPickedRoutes;
-(id)cachedRoutes;
-(id)init;
-(id)initWithDataSource:(id)arg0 name:(id)arg1 ;
-(id)initWithName:(id)arg0 ;
-(id)updateAvailableRoutes;
-(id)updatePickedRoutes;
-(id)videoRouteForRoute:(id)arg0 ;
-(void)_activeAudioRouteDidChangeNotification:(id)arg0 ;
-(void)_clearLegacyCachedRoute;
-(void)_externalScreenTypeDidChangeNotification:(id)arg0 ;
-(void)_mediaServerDiedNotification:(id)arg0 ;
-(void)_onQueueSetExternalScreenType:(NSInteger)arg0 ;
-(void)_pickableRoutesDidChangeNotification:(id)arg0 ;
-(void)_promptForHijackIfNeeded:(id)arg0 handler:(id)arg1 ;
-(void)_registerNotifications;
-(void)_routeStatusDidChangeNotification:(id)arg0 ;
-(void)_scheduleSendDelegateRoutesChanged;
-(void)_sendDelegateFailedToPickRouteWithError:(id)arg0 ;
-(void)_sendDelegatePickedRoutesChanged;
-(void)_setVolumeControlStateForPickedRoute:(NSInteger)arg0 ;
-(void)_syncUpdateRoutes;
-(void)_unregisterNotifications;
-(void)_updateCachedRoutes;
-(void)_volumeControlAvailabilityDidChangeNotification:(id)arg0 ;
-(void)clearCachedRoutes;
-(void)dealloc;
-(void)fetchAvailableRoutesWithCompletionHandler:(id)arg0 ;
-(void)fetchAvailableRoutesWithCompletionQueue:(id)arg0 completionHandler:(id)arg1 ;
-(void)getActiveRouteWithTimeout:(CGFloat)arg0 completion:(id)arg1 ;
-(void)selectRoute:(id)arg0 operation:(NSInteger)arg1 completion:(id)arg2 ;
-(void)selectRoutes:(id)arg0 operation:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setCachedRoutes:(id)arg0 ;
-(void)unpickAirPlayScreenRouteWithCompletion:(id)arg0 ;
-(void)unpickTVRoutes;


@end


#endif