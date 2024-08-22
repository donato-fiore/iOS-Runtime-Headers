// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCH3DFRAMEBUFFER_H
#define TSCH3DFRAMEBUFFER_H

@class NSString;
@protocol TSCH3DPipelineLinkable;

#import <Foundation/Foundation.h>


@interface TSCH3DFramebuffer : NSObject <TSCH3DPipelineLinkable>

 {
    FramebufferAttributes _framebufferAttributes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)framebufferWithFramebufferAttributes:(struct FramebufferAttributes *)arg0 ;
-(id)initWithFramebufferAttributes:(struct FramebufferAttributes *)arg0 ;
-(id)output;
-(id)pixelBufferFromViewport:(*void)arg0 components:(NSUInteger)arg1 flipped:(BOOL)arg2 forProcessor:(id)arg3 session:(id)arg4 ;
-(id)resolvingFramebuffer;
-(struct FramebufferAttributes *)framebufferAttributes;
-(void)dealloc;


@end


#endif