// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBDASHBOARDWORKSPACEOWNER_H
#define DBDASHBOARDWORKSPACEOWNER_H

@class NSMutableDictionary, NSString;
@protocol DBAppAlertPresenting, BSInvalidatable, DBEventHandling, DBWorkspaceOwner, DBWorkspaceStateChangeSession, DBEnvironment, DBNotificationSuspending;

#import <Foundation/Foundation.h>

#import "DBDashboardWorkspaceStateResolver.h"
#import "DBDashboardRootViewController.h"
#import "DBSiriViewController.h"
#import "DBUserAlertServer.h"
#import "DBWorkspace.h"

@interface DBDashboardWorkspaceOwner : NSObject <DBAppAlertPresenting, BSInvalidatable, DBEventHandling, DBWorkspaceOwner>

 {
    DBDashboardWorkspaceStateResolver *_stateResolver;
    BOOL _invalidated;
    DBDashboardRootViewController *_rootViewController;
    DBSiriViewController *_siriViewController;
    id<DBWorkspaceStateChangeSession> *_currentSession;
    NSMutableDictionary *_entityIdentifierToViewControllerMap;
}


@property (readonly, nonatomic) NSString *activeBaseApplicationBundleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<DBNotificationSuspending> *notificationSuspender; // ivar: _notificationSuspender
@property (readonly) Class superclass;
@property (weak, nonatomic) DBUserAlertServer *userAlertServer; // ivar: _userAlertServer
@property (weak, nonatomic) DBWorkspace *workspace; // ivar: _workspace


-(NSUInteger)session:(id)arg0 policyForRequest:(id)arg1 ;
-(id)_existingViewControllerForEntity:(id)arg0 ;
-(id)initWithStateResolver:(id)arg0 environment:(id)arg1 rootViewController:(id)arg2 siriViewController:(id)arg3 ;
-(void)_handleSuspendedActivationForEntity:(id)arg0 changeItem:(id)arg1 completion:(id)arg2 ;
-(void)_newViewControllerForEntity:(id)arg0 changeItem:(id)arg1 completion:(id)arg2 ;
-(void)_updateViewControllerForEntity:(id)arg0 changeItem:(id)arg1 oldEntity:(id)arg2 completion:(id)arg3 ;
-(void)alertServer:(id)arg0 wantsAppDismissalForViewController:(id)arg1 bundleID:(id)arg2 ;
-(void)alertServer:(id)arg0 wantsAppPresentationForViewController:(id)arg1 bundleID:(id)arg2 ;
-(void)handleEvent:(id)arg0 ;
-(void)invalidate;
-(void)session:(id)arg0 handleStateChangeRequest:(id)arg1 ;
-(void)workspace:(id)arg0 didBeginStateChangeSession:(id)arg1 ;
-(void)workspace:(id)arg0 didEndStateChangeSession:(id)arg1 ;


@end


#endif