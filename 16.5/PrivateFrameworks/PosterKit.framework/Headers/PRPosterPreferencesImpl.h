// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRPOSTERPREFERENCESIMPL_H
#define PRPOSTERPREFERENCESIMPL_H

@class UIFont, UIColor, NSString, NSDate;
@protocol PRPosterRenderingPreferences, PRMutablePosterRenderingPreferences, PRPosterEditingPreferences, PRMutablePosterEditingPreferences;

#import <Foundation/Foundation.h>

#import "PRPosterLegibilitySettings.h"

@interface PRPosterPreferencesImpl : NSObject <PRPosterRenderingPreferences, PRMutablePosterRenderingPreferences, PRPosterEditingPreferences, PRMutablePosterEditingPreferences>

 {
    UIFont *_timeFont;
    UIColor *_timeColor;
    UIColor *_statusBarTintColor;
    NSUInteger _significantEventTime;
    NSUInteger _significantEventOptions;
    BOOL _handlesWakeAnimation;
    PRPosterLegibilitySettings *_desiredLegibilitySettings;
    BOOL _depthEffectEnabled;
    BOOL _parallaxEnabled;
    UIColor *_averageColor;
}


@property (readonly, nonatomic) UIColor *averageColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic, getter=isDepthEffectEnabled) BOOL depthEffectEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PRPosterLegibilitySettings *desiredLegibilitySettings;
@property (readonly, nonatomic) BOOL handlesWakeAnimation;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDate *nextWakeDate;
@property (readonly, nonatomic, getter=isParallaxEnabled) BOOL parallaxEnabled;
@property (readonly, nonatomic) NSUInteger significantEventOptions;
@property (readonly, nonatomic) NSUInteger significantEventTime;
@property (readonly, nonatomic) UIColor *statusBarTintColor;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIColor *timeColor;
@property (readonly, nonatomic) UIFont *timeFont;


-(id)_initFromPreferences:(id)arg0 ;
-(id)init;
-(void)applyToClientSettings:(id)arg0 ;


@end


#endif