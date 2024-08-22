// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UISCENESESSION_H
#define UISCENESESSION_H

@class NSUserActivity, NSDictionary, NSString;
@protocol NSCopying, NSMutableCopying, BSDebugDescriptionProviding, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "UISceneConfiguration.h"
#import "UICanvas.h"
#import "UIScene.h"

@interface UISceneSession : NSObject <NSCopying, NSMutableCopying, BSDebugDescriptionProviding, NSSecureCoding>

 {
    UISceneConfiguration *_configuration;
    NSUserActivity *_stateRestorationActivity;
    NSDictionary *_userInfo;
    ? _sessionFlags;
}


@property (nonatomic, setter=_setConfigurationIsDirty:) BOOL _configurationIsDirty;
@property (readonly, nonatomic) BOOL _configurationNeedsReevalulation;
@property (readonly, nonatomic, getter=_isInternal) BOOL _internal;
@property (nonatomic, setter=_setStateRestorationActivityIsDirty:) BOOL _stateRestorationActivityIsDirty;
@property (nonatomic, setter=_setTrackingRefreshRequest:) BOOL _trackingRefreshRequest;
@property (nonatomic, setter=_setUserInfoIsDirty:) BOOL _userInfoIsDirty;
@property (readonly, nonatomic) Class canvasSubclass;
@property (readonly, copy, nonatomic) UISceneConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *persistentIdentifier; // ivar: _persistentIdentifier
@property (readonly, nonatomic) UICanvas *representedCanvas;
@property (readonly, nonatomic) NSString *role; // ivar: _role
@property (readonly, weak, nonatomic) UIScene *scene; // ivar: _scene
@property (retain, nonatomic) NSUserActivity *stateRestorationActivity;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger systemType;
@property (copy, nonatomic) NSDictionary *userInfo;


+(BOOL)supportsSecureCoding;
+(id)canvasRepresentationForSystemType:(NSInteger)arg0 ;
+(id)defaultCanvasRepresentation;
-(BOOL)isEqual:(id)arg0 ;
-(Class)delegateClass;
-(id)_copyWithoutUserInfo;
-(id)_init;
-(id)_initWithPersistentIdentifier:(id)arg0 sessionRole:(id)arg1 configurationName:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescriptionWithMultilinePrefix:(id)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)_clearAllDirtyFlags;
-(void)_loadStateRestorationActivityIfNeeded;
-(void)_loadUserInfo;
-(void)_resetStateRestorationToActivity:(id)arg0 ;
-(void)_updateConfiguration:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif