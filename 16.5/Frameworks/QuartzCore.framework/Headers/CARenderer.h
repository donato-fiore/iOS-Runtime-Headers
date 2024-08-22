// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CARENDERER_H
#define CARENDERER_H

@protocol CARendererDelegate;

#import <Foundation/Foundation.h>

#import "CAContext.h"
#import "CALayer.h"

@interface CARenderer : NSObject {
    *void _priv;
}


@property CGRect bounds;
@property (retain) CAContext *context;
@property (weak) NSObject<CARendererDelegate> *delegate;
@property (retain) CALayer *layer;


+(id)rendererWithEAGLContext:(id)arg0 options:(id)arg1 ;
+(id)rendererWithMTLTexture:(id)arg0 options:(id)arg1 ;
-(BOOL)hasMissingContent;
-(CGFloat)nextFrameTime;
-(id)_initWithEAGLContext:(id)arg0 options:(id)arg1 ;
-(id)_initWithMTLTexture:(id)arg0 options:(id)arg1 ;
-(id)_initWithOptions:(id)arg0 ;
-(struct CGRect )updateBounds;
-(void)addUpdateRect:(struct CGRect )arg0 ;
-(void)beginFrameAtTime:(CGFloat)arg0 timeStamp:(struct ? *)arg1 ;
-(void)dealloc;
-(void)endFrame;
-(void)render;
-(void)setDestination:(id)arg0 ;


@end


#endif