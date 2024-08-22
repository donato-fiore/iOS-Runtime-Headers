// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPNAVIGATIONLISTENER_H
#define MSPNAVIGATIONLISTENER_H

@class GEONavigationListener, GEONavigationGuidanceState, GEOSharedNavState, NSString;
@protocol GEONavigationListenerDelegate, OS_os_transaction, MSPNavigationListenerDelegate;

#import <Foundation/Foundation.h>


@interface MSPNavigationListener : NSObject <GEONavigationListenerDelegate>

 {
    GEONavigationListener *_navigationListener;
    GEONavigationGuidanceState *_guidanceState;
    NSObject<OS_os_transaction> *_transaction;
    GEOSharedNavState *_state;
    BOOL _postedStateIsReady;
    NSString *_navigationSessionIdentifier;
}


@property (retain, nonatomic) GEOSharedNavState *currentState; // ivar: _currentState
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MSPNavigationListenerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCompatibleNavigationType;
@property (readonly, nonatomic) BOOL isCompatibleTransportType;
@property (readonly, nonatomic) BOOL isInNavigatingState;
@property (readonly, copy, nonatomic) NSString *navigationSessionIdentifier;
@property (readonly) Class superclass;


-(BOOL)_isCompatibleTransportType:(int)arg0 ;
-(BOOL)_updateDestinationIfNeeded:(id)arg0 ;
-(id)init;
-(int)_analyticsPipelineTransportModeForGEOTransportType:(int)arg0 ;
-(int)_currentTransportType;
-(int)_referenceFrameForDestination:(id)arg0 ;
-(void)_checkStateIsReady;
-(void)_initPendingStateIfNeeded;
-(void)_initPendingStateIfNeededWithTransportType:(int)arg0 ;
-(void)_performDelegateNotificationBlockIfReady:(id)arg0 ;
-(void)_updateETAWithArrival:(struct ? )arg0 ;
-(void)_updateLocation:(id)arg0 ;
-(void)_updateRoute:(id)arg0 ;
-(void)_updateTraffic:(id)arg0 ;
-(void)_updateTransaction;
-(void)_updateTransportTypeFromCurrentState;
-(void)dealloc;
-(void)navigationListener:(id)arg0 didArriveAtWaypoint:(id)arg1 endOfLegIndex:(NSUInteger)arg2 ;
-(void)navigationListener:(id)arg0 didChangeNavigationState:(NSUInteger)arg1 transportType:(int)arg2 ;
-(void)navigationListener:(id)arg0 didUpdateGuidanceState:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdateLocation:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdatePositionFromDestination:(struct ? )arg1 ;
-(void)navigationListener:(id)arg0 didUpdateRoute:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdateRouteSummary:(id)arg1 ;
-(void)navigationListener:(id)arg0 didUpdateTrafficForCurrentRoute:(id)arg1 ;


@end


#endif