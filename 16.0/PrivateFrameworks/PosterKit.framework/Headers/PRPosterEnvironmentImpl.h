// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERENVIRONMENTIMPL_H
#define PRPOSTERENVIRONMENTIMPL_H

@class FBSSceneSettings, CSProminentLayoutController, UIColor, NSString, UITraitCollection;
@protocol NSCopying, PRPosterRenderingEnvironment_Private, PRPosterEditingEnvironment, PRPosterContentsInternal, PRPosterContents;

#import <Foundation/Foundation.h>

#import "PRMutablePosterConfiguration.h"
#import "PRPosterConfigurableOptions.h"
#import "PRPosterMutableConfiguredProperties.h"

@interface PRPosterEnvironmentImpl : NSObject <NSCopying, PRPosterRenderingEnvironment_Private, PRPosterEditingEnvironment>

 {
    FBSSceneSettings *_settings;
    PRMutablePosterConfiguration *_targetConfig;
    id<PRPosterContentsInternal> *_lock_sourceContents;
    PRPosterConfigurableOptions *_lock_sourceConfigurableOptions;
    os_unfair_lock_s _lock;
    PRPosterMutableConfiguredProperties *_lock_targetConfiguredProperties;
    CSProminentLayoutController *_layoutController;
}


@property (readonly, nonatomic) BOOL andromeda;
@property (nonatomic) CGFloat backlightProgress; // ivar: _backlightProgress
@property (readonly, nonatomic) UIColor *caseColor;
@property (readonly, nonatomic) CGRect contentCutoutBounds;
@property (readonly, nonatomic) NSObject<PRPosterContents> *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDepthEffectDisallowed) BOOL depthEffectDisallowed;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGSize desiredContentSize;
@property (readonly, nonatomic) CGRect floatingObscurableBounds;
@property (readonly, nonatomic, getter=isFloatingViewSnapshot) BOOL floatingViewSnapshot;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat linearBacklightProgress; // ivar: _linearBacklightProgress
@property (readonly, nonatomic, getter=isLowLuminance) BOOL lowLuminance;
@property (readonly, nonatomic) NSInteger luminance;
@property (readonly, nonatomic) CGSize minimumContentSize;
@property (readonly, nonatomic) NSInteger mode;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (readonly, nonatomic, getter=isPreview) BOOL preview;
@property (readonly, nonatomic) NSUInteger significantEventsCounter;
@property (readonly, nonatomic, getter=isSnapshot) BOOL snapshot;
@property (readonly, nonatomic) PRPosterConfigurableOptions *sourceConfigurableOptions;
@property (readonly, nonatomic) NSObject<PRPosterContents> *sourceContents;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PRMutablePosterConfiguration *targetConfiguration;
@property (readonly, nonatomic) PRPosterMutableConfiguredProperties *targetConfiguredProperties;
@property (readonly, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection
@property (nonatomic) CGFloat unlockProgress; // ivar: _unlockProgress
@property (readonly, nonatomic) NSInteger userInterfaceStyle;
@property (nonatomic) BOOL wakeSourceIsSwipeToUnlock; // ivar: _wakeSourceIsSwipeToUnlock


-(id)_initWithSceneSettings:(id)arg0 traitCollection:(id)arg1 targetConfig:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGRect )_normalizedBounds:(struct CGRect )arg0 ;
-(void)_appendDescriptionToStream:(id)arg0 ;
-(void)_applyToSceneSettings:(id)arg0 ;
-(void)_lock_hydratePosterContents:(*id)arg0 sourceConfigurableOptions:(*id)arg1 targetConfigurableProperties:(*id)arg2 ;


@end


#endif