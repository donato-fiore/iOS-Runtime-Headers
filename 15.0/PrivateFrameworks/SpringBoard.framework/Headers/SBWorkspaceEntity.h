// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBWORKSPACEENTITY_H
#define SBWORKSPACEENTITY_H

@class NSString;
@protocol NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor;

#import <Foundation/Foundation.h>

#import "SBActivationSettings.h"
#import "SBDeactivationSettings.h"

@interface SBWorkspaceEntity : NSObject <NSCopying, SBActivationSettings, SBDeactivationSettings, BSDescriptionProviding, SBLayoutElementDescriptor>

 {
    NSString *_identifier;
}


@property (nonatomic, getter=_mainDisplayPreferredInterfaceOrientation, setter=_setMainDisplayPreferredInterfaceOrientation:) NSInteger _mainDisplayPreferredInterfaceOrientation; // ivar: __mainDisplayPreferredInterfaceOrientation
@property (readonly, nonatomic) SBActivationSettings *activationSettings; // ivar: _activationSettings
@property (readonly, nonatomic) SBDeactivationSettings *deactivationSettings; // ivar: _deactivationSettings
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *entityGenerator;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isEmptyWorkspaceEntity;
@property (readonly, nonatomic) BOOL isHomeScreenEntity;
@property (readonly, nonatomic) BOOL isPreviousWorkspaceEntity;
@property (readonly, nonatomic) NSUInteger layoutAttributes;
@property (nonatomic) NSInteger layoutRole; // ivar: _layoutRole
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger supportedLayoutRoles;
@property (readonly, nonatomic) BOOL supportsPresentationAtAnySize;
@property (readonly, copy, nonatomic) NSString *uniqueIdentifier;
@property (readonly, nonatomic) Class viewControllerClass;
@property (readonly, nonatomic) BOOL wantsExclusiveForeground;


+(id)entity;
-(BOOL)_supportsLayoutRole:(NSInteger)arg0 ;
-(BOOL)boolForActivationSetting:(unsigned int)arg0 ;
-(BOOL)boolForDeactivationSetting:(unsigned int)arg0 ;
-(BOOL)hasLayoutAttributes:(NSUInteger)arg0 ;
-(BOOL)isAnalogousToEntity:(id)arg0 ;
-(BOOL)isAppClipPlaceholderEntity;
-(BOOL)isApplicationSceneEntity;
-(BOOL)isDeviceApplicationSceneEntity;
-(BOOL)supportsLayoutRole:(NSInteger)arg0 ;
-(NSInteger)flagForActivationSetting:(unsigned int)arg0 ;
-(NSInteger)flagForDeactivationSetting:(unsigned int)arg0 ;
-(NSInteger)preferredInterfaceOrientationOnDisplayWithIdentity:(id)arg0 ;
-(id)_generator:(SEL)arg0 ;
-(id)appClipPlaceholderEntity;
-(id)applicationSceneEntity;
-(id)copyActivationSettings;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)deviceApplicationSceneEntity;
-(id)init;
-(id)initWithIdentifier:(id)arg0 displayChangeSettings:(id)arg1 ;
-(id)objectForActivationSetting:(unsigned int)arg0 ;
-(id)objectForDeactivationSetting:(unsigned int)arg0 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;
-(void)applyActivationSettings:(id)arg0 ;
-(void)applyDeactivationSettings:(id)arg0 ;
-(void)clearActivationSettings;
-(void)setFlag:(NSInteger)arg0 forActivationSetting:(unsigned int)arg1 ;
-(void)setFlag:(NSInteger)arg0 forDeactivationSetting:(unsigned int)arg1 ;
-(void)setObject:(id)arg0 forActivationSetting:(unsigned int)arg1 ;
-(void)setObject:(id)arg0 forDeactivationSetting:(unsigned int)arg1 ;
-(void)setPreferredInterfaceOrientation:(NSInteger)arg0 onDisplayWithIdentity:(id)arg1 ;


@end


#endif