// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef KNANIMATIONRENDERER_H
#define KNANIMATIONRENDERER_H

@protocol KNAnimationPluginContext;

#import <Foundation/Foundation.h>

#import "KNPlaybackSession.h"
#import "KNAnimatedSlideView.h"

@interface KNAnimationRenderer : NSObject {
    KNPlaybackSession *_session;
    KNAnimatedSlideView *_ASV;
    BOOL _areAnimationsPaused;
}


@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) id *plugin; // ivar: _plugin
@property (readonly, nonatomic) Class pluginClass; // ivar: _pluginClass
@property (readonly, nonatomic) NSObject<KNAnimationPluginContext> *pluginContext; // ivar: _pluginContext
@property (nonatomic) NSUInteger signpostId; // ivar: _signpostId


-(void)dealloc;
-(void)generateTextures;
-(void)pauseAnimations;
-(void)pauseAnimationsAtTime:(CGFloat)arg0 ;
-(void)prepareAnimations;
-(void)renderTextures;
-(void)resumeAnimationsIfPaused;
-(void)resumeAnimationsIfPausedAtTime:(CGFloat)arg0 ;
-(void)setupPluginContext;
-(void)stopAnimations;
-(void)teardown;
-(void)waitUntilAsyncRenderingIsCompleteShouldCancel:(BOOL)arg0 ;


@end


#endif