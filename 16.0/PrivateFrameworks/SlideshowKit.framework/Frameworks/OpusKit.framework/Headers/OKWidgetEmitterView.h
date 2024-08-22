// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETEMITTERVIEW_H
#define OKWIDGETEMITTERVIEW_H

@class OFEmitterView;


#import "OKWidgetView.h"

@interface OKWidgetEmitterView : OKWidgetView {
    unsigned int _seed;
    OFEmitterView *_emitterView;
    CGPoint _originalEmitterPosition;
}




+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)isEmitting;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(CGFloat)settingBirthRate;
-(CGFloat)settingEmitterDepth;
-(CGFloat)settingEmitterZPosition;
-(CGFloat)settingLifetime;
-(CGFloat)settingScale;
-(CGFloat)settingSeed;
-(CGFloat)settingSpin;
-(CGFloat)settingVelocity;
-(id)initWithWidget:(id)arg0 ;
-(id)settingEmitterCells;
-(id)settingEmitterMode;
-(id)settingEmitterShape;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingRenderMode;
-(struct CGPoint )settingEmitterPosition;
-(struct CGSize )settingEmitterSize;
-(void)dealloc;
-(void)layoutSubviews;
-(void)pauseEmitter;
-(void)resumeEmitter;
-(void)setSettingBirthRate:(CGFloat)arg0 ;
-(void)setSettingEmitterCells:(id)arg0 ;
-(void)setSettingEmitterDepth:(CGFloat)arg0 ;
-(void)setSettingEmitterMode:(id)arg0 ;
-(void)setSettingEmitterPosition:(struct CGPoint )arg0 ;
-(void)setSettingEmitterShape:(id)arg0 ;
-(void)setSettingEmitterSize:(struct CGSize )arg0 ;
-(void)setSettingEmitterZPosition:(CGFloat)arg0 ;
-(void)setSettingLifetime:(CGFloat)arg0 ;
-(void)setSettingRenderMode:(id)arg0 ;
-(void)setSettingScale:(CGFloat)arg0 ;
-(void)setSettingSeed:(CGFloat)arg0 ;
-(void)setSettingSpin:(CGFloat)arg0 ;
-(void)setSettingVelocity:(CGFloat)arg0 ;


@end


#endif