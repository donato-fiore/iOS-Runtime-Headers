// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDGLLAYERCONTEXT_H
#define TSDGLLAYERCONTEXT_H

@class EAGLContext, NSString;
@protocol TSDGLLayerContext;

#import <Foundation/Foundation.h>


@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>

 {
    EAGLContext *_context;
    unsigned int _renderbuffer;
    unsigned int _framebuffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)createFramebufferFromLayer:(id)arg0 ;
-(BOOL)isValid;
-(BOOL)makeCurrentContext;
-(id)glContext;
-(id)init;
-(id)initWithSharedContext:(id)arg0 ;
-(void)dealloc;
-(void)lock;
-(void)presentRenderbuffer;
-(void)teardown;
-(void)unlock;


@end


#endif