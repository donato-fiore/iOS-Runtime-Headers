// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef EAGLCONTEXT_H
#define EAGLCONTEXT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "EAGLSharegroup.h"

@interface EAGLContext : NSObject {
    *_EAGLContextPrivate _private;
}


@property (readonly) NSUInteger API;
@property (copy, nonatomic) NSString *debugLabel; // ivar: debugLabel
@property (nonatomic, getter=isMultiThreaded) BOOL multiThreaded;
@property (readonly) EAGLSharegroup *sharegroup;


+(BOOL)setCurrentContext:(id)arg0 ;
+(id)currentContext;
-(BOOL)attachImage:(NSUInteger)arg0 toCoreSurface:(struct __IOSurface *)arg1 invertedRender:(BOOL)arg2 ;
-(BOOL)presentRenderbuffer:(NSUInteger)arg0 ;
-(BOOL)presentRenderbuffer:(NSUInteger)arg0 afterMinimumDuration:(CGFloat)arg1 ;
-(BOOL)presentRenderbuffer:(NSUInteger)arg0 atTime:(CGFloat)arg1 ;
-(BOOL)renderbufferStorage:(NSUInteger)arg0 fromDrawable:(id)arg1 ;
// -(BOOL)setBlockFence:(id)arg0 onQueue:(unk)arg1  ;
-(BOOL)texImageIOSurface:(struct __IOSurface *)arg0 target:(NSUInteger)arg1 internalFormat:(NSUInteger)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 format:(NSUInteger)arg5 type:(NSUInteger)arg6 plane:(unsigned int)arg7 ;
-(BOOL)texImageIOSurface:(struct __IOSurface *)arg0 target:(NSUInteger)arg1 internalFormat:(NSUInteger)arg2 width:(unsigned int)arg3 height:(unsigned int)arg4 format:(NSUInteger)arg5 type:(NSUInteger)arg6 plane:(unsigned int)arg7 invert:(BOOL)arg8 ;
-(NSUInteger)getParameter:(unsigned int)arg0 to:(*int)arg1 ;
-(NSUInteger)setParameter:(unsigned int)arg0 to:(*int)arg1 ;
-(id)commonInitWithAPI:(NSUInteger)arg0 properties:(id)arg1 ;
-(id)init;
-(id)initWithAPI:(NSUInteger)arg0 ;
-(id)initWithAPI:(NSUInteger)arg0 properties:(id)arg1 ;
-(id)initWithAPI:(NSUInteger)arg0 sharedWithCompute:(BOOL)arg1 ;
-(id)initWithAPI:(NSUInteger)arg0 sharegroup:(id)arg1 ;
-(struct EAGLMacroContext *)GetMacroContextPrivate;
-(struct EAGLMacroContext *)getMacroContextPrivate;
-(void)dealloc;


@end


#endif