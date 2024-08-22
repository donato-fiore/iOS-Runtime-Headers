// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AFUISCENECONFIGURATION_H
#define AFUISCENECONFIGURATION_H

@class FBSDisplayConfiguration, FBSSceneParameters;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface AFUISceneConfiguration : NSObject <NSCopying>

 {
    FBSDisplayConfiguration *_displayConfiguration;
}


@property (nonatomic) CGRect bounds; // ivar: _bounds
@property (nonatomic) BOOL cancelSceneLoadingAfterTimeout; // ivar: _cancelSceneLoadingAfterTimeout
@property (nonatomic) NSUInteger deactivationReasonMask; // ivar: _deactivationReasonMask
@property (nonatomic) BOOL foreground; // ivar: _foreground
@property (readonly, nonatomic) CGRect initialBounds; // ivar: _initialBounds
@property (nonatomic) UIEdgeInsets initialSafeAreaInsets; // ivar: _initialSafeAreaInsets
@property (nonatomic) NSInteger launchIntent; // ivar: _launchIntent
@property (nonatomic) NSInteger preferredDeferralMode; // ivar: _preferredDeferralMode
@property (nonatomic) CGFloat sceneLoadingTimeOutDuration; // ivar: _sceneLoadingTimeOutDuration
@property (copy, nonatomic) FBSSceneParameters *sceneParameters; // ivar: _sceneParameters
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle


+(id)defaultSiriSceneConfigurationWithInitialBounds:(struct CGRect )arg0 onDisplay:(id)arg1 ;
+(id)stringForInvalidationReason:(NSUInteger)arg0 ;
-(id)_initWithInitialBounds:(struct CGRect )arg0 displayConfiguration:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(void)_setupPlatformSpecificDefaultSettings;
-(void)configureMutableSceneSettings:(id)arg0 ;


@end


#endif