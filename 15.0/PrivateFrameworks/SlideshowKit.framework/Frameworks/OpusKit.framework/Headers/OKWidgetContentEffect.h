// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKWIDGETCONTENTEFFECT_H
#define OKWIDGETCONTENTEFFECT_H

@class NSString, NSDictionary, OFUIView, CAAnimation;
@protocol CAAnimationDelegate, OKSettingsSupport;

#import <Foundation/Foundation.h>


@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport>

 {
    NSString *_uuid;
    NSDictionary *_settings;
    BOOL _isPaused;
    BOOL _needsApplySettings;
}


@property (nonatomic) OFUIView *animatedView; // ivar: _animatedView
@property (retain, nonatomic) CAAnimation *animation; // ivar: _animation
@property (nonatomic) BOOL autoplay; // ivar: _autoplay
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat defaultDuration; // ivar: _defaultDuration
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL loop; // ivar: _loop
@property (readonly) Class superclass;


+(id)supportedSettings;
-(BOOL)isAnimating;
-(CGFloat)remainingPlayDuration;
-(id)init;
-(id)initWithSettings:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(void)animationDidStop:(id)arg0 finished:(BOOL)arg1 ;
-(void)applySettings;
-(void)applySettingsIfNeeded;
-(void)dealloc;
-(void)needsApplySettings;
-(void)pauseAnimation;
-(void)prepareContentEffectWithView:(id)arg0 ;
-(void)resumeAnimation;
-(void)setUserSettingObject:(id)arg0 forKey:(id)arg1 ;
-(void)startAnimation;
-(void)stopAnimation;


@end


#endif