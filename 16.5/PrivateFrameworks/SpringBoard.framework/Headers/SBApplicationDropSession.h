// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBAPPLICATIONDROPSESSION_H
#define SBAPPLICATIONDROPSESSION_H

@class NSSet, SBSAppDragLocalContext, FBSSceneIdentity, UIDraggingSystemSession, NSString;
@protocol OS_dispatch_group, UIDragDropSession;

#import <Foundation/Foundation.h>

#import "SBActivationSettings.h"
#import "SBApplication.h"

@interface SBApplicationDropSession : NSObject {
    NSObject<OS_dispatch_group> *_activationSettingsGroup;
}


@property (readonly, nonatomic) SBActivationSettings *activationSettings; // ivar: _activationSettings
@property (readonly, nonatomic) SBApplication *application; // ivar: _application
@property (readonly, nonatomic) NSInteger dropZones;
@property (readonly, nonatomic) NSSet *launchActions; // ivar: _launchActions
@property (readonly, nonatomic) SBSAppDragLocalContext *localContext; // ivar: _localContext
@property (readonly, nonatomic, getter=isNotificationDrag) BOOL notificationDrag; // ivar: _notificationDrag
@property (retain, nonatomic) FBSSceneIdentity *sceneIdentity; // ivar: _sceneIdentity
@property (readonly, nonatomic) UIDraggingSystemSession *systemSession; // ivar: _systemSession
@property (copy, nonatomic) NSString *targetContentIdentifier; // ivar: _targetContentIdentifier
@property (readonly, nonatomic) NSObject<UIDragDropSession> *uiDragDropSession; // ivar: _uiDragDropSession
@property (readonly, nonatomic, getter=isWindowTearOff) BOOL windowTearOff; // ivar: _windowTearOff


+(BOOL)_dragItemRepresentsAcceptableFileDrag:(id)arg0 ;
+(BOOL)_itemProviderRequiresOpenInPlace:(id)arg0 ;
+(BOOL)canHandleUIDragDropSession:(id)arg0 ;
+(id)_applicationForHandlingDragItem:(id)arg0 URL:(id)arg1 error:(*id)arg2 ;
+(id)_applicationForIconLeafIdentifier:(id)arg0 ;
// +(id)_applicationProxyForIdentifiers:(id)arg0 forURL:(id)arg1 passingTest:(id)arg2 error:(unk)arg3  ;
+(id)dropSessionWithWindowUIDragSession:(id)arg0 ;
+(void)_getFileDropSessionWithUIDragDropSession:(id)arg0 dragItem:(id)arg1 systemSession:(id)arg2 targetApplication:(id)arg3 completion:(id)arg4 ;
+(void)_getLocalAppDropSessionWithUIDragDropSession:(id)arg0 dragItem:(id)arg1 systemSession:(id)arg2 completion:(id)arg3 ;
+(void)_getURLDropSessionWithUIDragDropSession:(id)arg0 dragItem:(id)arg1 systemSession:(id)arg2 targetApplication:(id)arg3 completion:(id)arg4 ;
+(void)_getUserActivityDropSessionWithUIDragDropSession:(id)arg0 dragItem:(id)arg1 systemSession:(id)arg2 targetApplication:(id)arg3 completion:(id)arg4 ;
+(void)_getUserNotificationDropSessionWithUIDragDropSession:(id)arg0 systemSession:(id)arg1 dragItem:(id)arg2 completion:(id)arg3 ;
+(void)getDropSessionWithUIDropSession:(id)arg0 sceneProvider:(id)arg1 completion:(id)arg2 ;
-(BOOL)_isApplicationBoundToVisibleIcon;
-(id)_activityContinuationActionFromActivity:(id)arg0 activityData:(id)arg1 ;
-(id)_initWithUIDragDropSession:(id)arg0 application:(id)arg1 targetContentIdentifier:(id)arg2 ;
-(id)initWithUIDragDropSession:(id)arg0 systemSession:(id)arg1 application:(id)arg2 activity:(id)arg3 activityData:(id)arg4 ;
-(id)initWithUIDragDropSession:(id)arg0 systemSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3 ;
-(id)initWithUIDragDropSession:(id)arg0 systemSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3 URL:(id)arg4 requiresOpenInPlace:(BOOL)arg5 ;
-(id)initWithUIDragDropSession:(id)arg0 systemSession:(id)arg1 application:(id)arg2 targetContentIdentifier:(id)arg3 localContext:(id)arg4 activity:(id)arg5 activityData:(id)arg6 ;
-(void)calculateSceneIdentityWithSceneProvider:(id)arg0 completion:(id)arg1 ;


@end


#endif