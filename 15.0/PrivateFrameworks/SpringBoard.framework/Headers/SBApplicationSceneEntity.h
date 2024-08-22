// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBAPPLICATIONSCENEENTITY_H
#define SBAPPLICATIONSCENEENTITY_H

@class NSSet, NSString;
@protocol SBProcessSettings;


#import "SBWorkspaceEntity.h"
#import "SBApplication.h"
#import "SBProcessSettings.h"
#import "SBApplicationSceneHandle.h"

@interface SBApplicationSceneEntity : SBWorkspaceEntity <SBProcessSettings>



@property (readonly, copy, nonatomic) NSSet *actions; // ivar: _actions
@property (readonly, nonatomic) SBApplication *application;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SBProcessSettings *processSettings; // ivar: _processSettings
@property (readonly, nonatomic) SBApplicationSceneHandle *sceneHandle; // ivar: _sceneHandle
@property (readonly) Class superclass;


-(BOOL)_supportsLayoutRole:(NSInteger)arg0 ;
-(BOOL)boolForProcessSetting:(NSInteger)arg0 ;
-(BOOL)isApplicationSceneEntity;
-(BOOL)isEqual:(id)arg0 ;
-(Class)viewControllerClass;
-(NSInteger)flagForProcessSetting:(NSInteger)arg0 ;
-(id)_initWithSceneHandle:(id)arg0 ;
-(id)copyProcessSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)entityGenerator:(SEL)arg0 ;
-(id)objectForProcessSetting:(NSInteger)arg0 ;
-(void)_initializeWithSceneHandle:(id)arg0 ;
-(void)addActions:(id)arg0 ;
-(void)applyProcessSettings:(id)arg0 ;
-(void)clearProcessSettings;
-(void)removeActions:(id)arg0 ;
-(void)removeAllActions;
-(void)setFlag:(NSInteger)arg0 forProcessSetting:(NSInteger)arg1 ;
-(void)setObject:(id)arg0 forProcessSetting:(NSInteger)arg1 ;
-(void)translateActivationSettingsToActions;


@end


#endif