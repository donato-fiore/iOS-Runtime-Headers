// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVCUSTOMROUTINGCONTROLLER_H
#define AVCUSTOMROUTINGCONTROLLER_H

@class DASession, NSArray;
@protocol AVCustomRoutingControllerDelegate;

#import <Foundation/Foundation.h>


@interface AVCustomRoutingController : NSObject {
    DASession *_session;
    NSArray *_routeEventRecords;
}


@property (readonly, nonatomic) NSArray *authorizedRoutes; // ivar: _authorizedRoutes
@property (retain, nonatomic) NSArray *customActionItems; // ivar: _customActionItems
@property (weak, nonatomic) NSObject<AVCustomRoutingControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSArray *knownRouteIPs; // ivar: _knownRouteIPs
@property (readonly, nonatomic) NSArray *pendingEvents; // ivar: _pendingEvents
@property (retain, nonatomic) DASession *session;
@property (nonatomic, getter=isSessionSuspended) BOOL sessionSuspended; // ivar: _sessionSuspended


-(BOOL)isRouteActive:(id)arg0 ;
-(id)_routeForDADevice:(id)arg0 ;
-(id)init;
-(void)_addAuthorizedRoute:(id)arg0 ;
-(void)_informClientOfEventReason:(NSInteger)arg0 forRoute:(id)arg1 ;
-(void)_removeAuthorizedRoute:(id)arg0 ;
-(void)_resumeSessionUpdates;
-(void)_setActive:(BOOL)arg0 forRoute:(id)arg1 ;
-(void)_startSession;
-(void)_stopSession;
-(void)_storeRecordForEvent:(id)arg0 ;
-(void)_suspendSessionUpdates;
-(void)_updateSessionForEvent:(id)arg0 ;
-(void)_updateSessionFromEventRecords;
-(void)_updateSessionStateToMatchRoute:(id)arg0 ;
-(void)_updateSessionToReflectCurrentlyActiveRoutes;
-(void)dealloc;
-(void)handleCustomActionItemSelected:(id)arg0 ;
-(void)invalidateAuthorizationForRoute:(id)arg0 ;
-(void)setActive:(BOOL)arg0 forRoute:(id)arg1 ;


@end


#endif