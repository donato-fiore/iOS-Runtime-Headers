// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OKWIDGETSPRITEEMITTERVIEWPROXY_H
#define OKWIDGETSPRITEEMITTERVIEWPROXY_H

@class SKView, SKNode, NSString, SKTexture;
@protocol OKWidgetSpriteEmitterViewProxyExports;


#import "OKWidgetView.h"

@interface OKWidgetSpriteEmitterViewProxy : OKWidgetView <OKWidgetSpriteEmitterViewProxyExports>

 {
    SKView *_skView;
}


@property (retain, nonatomic) SKNode *emitterNode; // ivar: _emitterNode
@property (copy, nonatomic) NSString *emitterResourceName; // ivar: _emitterResourceName
@property (copy, nonatomic) NSString *particuleResourceName; // ivar: _particuleResourceName
@property (retain, nonatomic) SKTexture *particuleTexture; // ivar: _particuleTexture


+(id)supportedSettings;
+(void)setupJavascriptContext:(id)arg0 ;
-(BOOL)prepareForDisplay:(BOOL)arg0 ;
-(BOOL)prepareForUnload:(BOOL)arg0 ;
-(BOOL)prepareForWarmup:(BOOL)arg0 ;
-(id)initWithWidget:(id)arg0 ;
-(id)settingEmitterResource;
-(id)settingObjectForKey:(id)arg0 ;
-(id)settingParticuleResource;
-(id)valueForUndefinedKey:(id)arg0 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)loadEmitterIfNeeded;
-(void)setAntialiasing:(BOOL)arg0 ;
-(void)setSettingBackgroundColor:(id)arg0 ;
-(void)setSettingEmitterResource:(id)arg0 ;
-(void)setSettingParticuleResource:(id)arg0 ;
-(void)unloadEmitter;
-(void)updateEmitter;


@end


#endif