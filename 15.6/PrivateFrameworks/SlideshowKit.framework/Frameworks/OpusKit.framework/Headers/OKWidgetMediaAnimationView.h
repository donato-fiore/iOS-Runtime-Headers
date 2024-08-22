// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKWIDGETMEDIAANIMATIONVIEW_H
#define OKWIDGETMEDIAANIMATIONVIEW_H

@class NSMutableArray, NSString;
@protocol OKSettingsSupport;


#import "OKWidgetView.h"

@interface OKWidgetMediaAnimationView : OKWidgetView <OKSettingsSupport>

 {
    NSMutableArray *_CGImages;
    BOOL _autoplay;
    BOOL _loop;
    CGFloat _duration;
    NSString *_uuid;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)animationKeyPrefix;
+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)settingAutoplay;
-(BOOL)settingLoop;
-(CGFloat)settingDuration;
-(NSInteger)settingContentMode;
-(id)initWithWidget:(id)arg0 ;
-(id)settingObjectForKey:(id)arg0 ;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)playAnimation;
-(void)setSettingAutoplay:(BOOL)arg0 ;
-(void)setSettingContentMode:(NSInteger)arg0 ;
-(void)setSettingDuration:(CGFloat)arg0 ;
-(void)setSettingLoop:(BOOL)arg0 ;
-(void)setSettingUrls:(id)arg0 ;
-(void)stopAnimation;


@end


#endif