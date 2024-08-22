// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DBSCENEUPDATE_H
#define DBSCENEUPDATE_H

@class NSDictionary, UIApplicationStarkSceneSpecification, UIMutableCarPlayApplicationSceneSettings, FBApplicationUpdateScenesTransaction, UIApplicationSceneTransitionContext;
@protocol DBEnvironment;

#import <Foundation/Foundation.h>

#import "DBApplicationInfo.h"

@interface DBSceneUpdate : NSObject

@property (retain, nonatomic) NSDictionary *activationSettings; // ivar: _activationSettings
@property (retain, nonatomic) DBApplicationInfo *applicationInfo; // ivar: _applicationInfo
@property (weak, nonatomic) NSObject<DBEnvironment> *environment; // ivar: _environment
@property (retain, nonatomic) DBApplicationInfo *proxyApplicationInfo; // ivar: _proxyApplicationInfo
@property (retain, nonatomic) UIApplicationStarkSceneSpecification *sceneSpecification; // ivar: _sceneSpecification
@property (readonly, nonatomic) UIMutableCarPlayApplicationSceneSettings *settings; // ivar: _settings
@property (retain, nonatomic) FBApplicationUpdateScenesTransaction *transaction; // ivar: _transaction
@property (readonly, nonatomic) UIApplicationSceneTransitionContext *transitionContext; // ivar: _transitionContext


-(NSInteger)_mapStyle;
-(NSInteger)_uiStyle;
-(id)_effectiveSceneAppInfo;
-(id)init;
-(id)initWithApplicationInfo:(id)arg0 environment:(id)arg1 ;
-(id)initWithApplicationInfo:(id)arg0 proxyApplicationInfo:(id)arg1 environment:(id)arg2 activationSettings:(id)arg3 ;
-(struct CGRect )_frame;
-(struct UIEdgeInsets )_safeAreaInsets;
-(void)_postTransactionUpdateSceneSettingsForScene:(id)arg0 ;
-(void)performUpdateWithCompletion:(id)arg0 ;


@end


#endif