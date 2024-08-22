// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MNCOMPANIONNAVIGATIONXPCCONNECTION_H
#define MNCOMPANIONNAVIGATIONXPCCONNECTION_H

@class NSXPCConnection, GEOCompanionRouteDetails, GEOCompanionRouteStatus, NSString;
@protocol MNCompanionNavigationDelegate;

#import <Foundation/Foundation.h>


@interface MNCompanionNavigationXPCConnection : NSObject <MNCompanionNavigationDelegate>

 {
    NSXPCConnection *_connection;
    GEOCompanionRouteDetails *_companionRouteDetails;
    GEOCompanionRouteStatus *_companionRouteStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)_closeConnection;
-(void)_connectionWasInterrupted;
-(void)_connectionWasInvalidated;
-(void)_openConnection;
-(void)_resendRouteDetailsAndStatus;
-(void)_stop;
-(void)dealloc;
-(void)updateNavigationRouteDetails:(id)arg0 routeStatus:(id)arg1 ;
-(void)updateNavigationRouteStatus:(id)arg0 ;
-(void)updateNavigationRouteWithUpdate:(id)arg0 ;


@end


#endif