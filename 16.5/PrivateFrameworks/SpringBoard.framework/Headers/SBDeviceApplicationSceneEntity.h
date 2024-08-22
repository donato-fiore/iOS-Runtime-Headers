// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBDEVICEAPPLICATIONSCENEENTITY_H
#define SBDEVICEAPPLICATIONSCENEENTITY_H



#import "SBApplicationSceneEntity.h"
#import "SBDeviceApplicationSceneHandle.h"

@interface SBDeviceApplicationSceneEntity : SBApplicationSceneEntity

@property (readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;


+(id)defaultEntityWithApplication:(id)arg0 sceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 ;
+(id)defaultEntityWithApplication:(id)arg0 targetContentIdentifier:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg0 ;
+(id)defaultEntityWithApplicationForMainDisplay:(id)arg0 targetContentIdentifier:(id)arg1 ;
+(id)entityWithApplication:(id)arg0 scenePersistenceIdentifier:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
+(id)entityWithApplicationForMainDisplay:(id)arg0 withScenePersistenceIdentifier:(id)arg1 ;
+(id)newEntityWithApplication:(id)arg0 sceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 ;
+(id)newEntityWithApplicationForMainDisplay:(id)arg0 ;
-(BOOL)_supportsLayoutRole:(NSInteger)arg0 ;
-(BOOL)isDeviceApplicationSceneEntity;
-(BOOL)supportsPresentationAtAnySize;
-(BOOL)supportsSplitView;
-(BOOL)wantsExclusiveForeground;
-(Class)viewControllerClass;
-(id)deviceApplicationSceneEntity;
-(id)initWithApplication:(id)arg0 generatingNewPrimarySceneIfRequired:(BOOL)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
-(id)initWithApplication:(id)arg0 generatingNewSceneIfRequiredWithSpecification:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
-(id)initWithApplication:(id)arg0 sceneHandleProvider:(id)arg1 displayIdentity:(id)arg2 ;
-(id)initWithApplication:(id)arg0 targetContentIdentifier:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
-(id)initWithApplication:(id)arg0 uniqueIdentifier:(id)arg1 sceneHandleProvider:(id)arg2 displayIdentity:(id)arg3 ;
-(id)initWithApplication:(id)arg0 uniqueIdentifier:(id)arg1 targetContentIdentifier:(id)arg2 sceneHandleProvider:(id)arg3 displayIdentity:(id)arg4 ;
-(id)initWithApplicationForMainDisplay:(id)arg0 ;
-(id)initWithApplicationForMainDisplay:(id)arg0 generatingNewPrimarySceneIfRequired:(BOOL)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg0 generatingNewSceneIfRequiredWithSpecification:(id)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg0 targetContentIdentifier:(id)arg1 ;
-(id)initWithApplicationForMainDisplay:(id)arg0 uniqueIdentifier:(id)arg1 ;
-(id)initWithApplicationForMainSecureDisplay:(id)arg0 ;
-(id)initWithApplicationSceneHandle:(id)arg0 ;


@end


#endif