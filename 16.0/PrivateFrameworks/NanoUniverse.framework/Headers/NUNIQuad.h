// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUNIQUAD_H
#define NUNIQUAD_H

@class CLKUIQuad;
@protocol OS_dispatch_semaphore;


#import "NUNIRenderer.h"
#import "NUNIScene.h"

@interface NUNIQuad : CLKUIQuad {
    CGFloat _baseTime;
    CGSize _viewport;
    CGFloat _screenScale;
    NSObject<OS_dispatch_semaphore> *_renderSemaphore;
}


@property (readonly, nonatomic) NUNIRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) NUNIScene *scene; // ivar: _scene


-(BOOL)prepareForTime:(CGFloat)arg0 ;
-(id)initWithScreenScale:(CGFloat)arg0 renderer:(id)arg1 ;
-(void)performOffscreenPassesWithCommandBuffer:(id)arg0 ;
-(void)renderFailedForReason:(NSUInteger)arg0 ;
-(void)renderWithCommandBuffer:(id)arg0 passDescriptor:(id)arg1 ;
-(void)setupForQuadView:(id)arg0 ;


@end


#endif