// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIMUTABLEAPPLICATIONSCENESETTINGS_H
#define UIMUTABLEAPPLICATIONSCENESETTINGS_H

@class FBSMutableSceneSettings, BSCornerRadiusConfiguration, NSString, NSNumber, NSSet;
@protocol UIApplicationSceneSettings, BSInterfaceOrientationMapResolving><BSXPCSecureCoding;



@interface UIMutableApplicationSceneSettings : FBSMutableSceneSettings <UIApplicationSceneSettings>



@property (nonatomic, setter=_setDebugValidationOrientationMaskEnabled:) BOOL _debugValidationOrientationMaskEnabled;
@property (nonatomic) NSInteger accessibilityContrast;
@property (nonatomic) NSUInteger artworkSubtype;
@property (nonatomic) BOOL canShowAlerts;
@property (retain, nonatomic) BSCornerRadiusConfiguration *cornerRadiusConfiguration;
@property (nonatomic) NSUInteger deactivationReasons;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger deviceOrientation;
@property (nonatomic) BOOL deviceOrientationEventsEnabled;
@property (nonatomic) BOOL enhancedWindowingEnabled;
@property (nonatomic) BOOL forcedStatusBarForegroundTransparent;
@property (retain, nonatomic) NSNumber *forcedStatusBarStyle;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat homeAffordanceOverlayAllowance;
@property (nonatomic) unsigned int hostContextIdentifierForSnapshotting;
@property (nonatomic) BOOL idleModeEnabled;
@property (nonatomic) BOOL inLiveResize;
@property (retain, nonatomic) NSObject<BSInterfaceOrientationMapResolving><BSXPCSecureCoding> *interfaceOrientationMapResolver;
@property (nonatomic) NSInteger interfaceOrientationMode;
@property (nonatomic) UIEdgeInsets peripheryInsets;
@property (retain, nonatomic) NSString *persistenceIdentifier;
@property (nonatomic) NSInteger pointerLockStatus;
@property (nonatomic) UIEdgeInsets safeAreaInsetsLandscapeLeft;
@property (nonatomic) UIEdgeInsets safeAreaInsetsLandscapeRight;
@property (nonatomic) UIEdgeInsets safeAreaInsetsPortrait;
@property (nonatomic) UIEdgeInsets safeAreaInsetsPortraitUpsideDown;
@property (nonatomic) NSUInteger scenePresenterRenderIdentifierForSnapshotting;
@property (nonatomic) NSInteger screenReferenceDisplayModeStatus;
@property (nonatomic) CGRect statusBarAvoidanceFrame;
@property (nonatomic) BOOL statusBarDisabled;
@property (nonatomic) CGFloat statusBarHeight;
@property (nonatomic) NSInteger statusBarParts;
@property (nonatomic) NSUInteger statusBarStyleOverridesToSuppress;
@property (readonly) Class superclass;
@property (nonatomic) CGFloat systemMinimumMargin;
@property (retain, nonatomic) NSSet *targetOfEventDeferringEnvironments;
@property (nonatomic) BOOL underLock;
@property (nonatomic) NSInteger userInterfaceStyle;


-(BOOL)isUISubclass;
-(CGFloat)defaultStatusBarHeightForOrientation:(NSInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)setDefaultStatusBarHeight:(CGFloat)arg0 forOrientation:(NSInteger)arg1 ;


@end


#endif