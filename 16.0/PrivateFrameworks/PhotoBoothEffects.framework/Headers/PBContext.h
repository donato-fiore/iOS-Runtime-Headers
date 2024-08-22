// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBCONTEXT_H
#define PBCONTEXT_H


#import <Foundation/Foundation.h>


@interface PBContext : NSObject

@property (retain, nonatomic) *__CVPixelBufferPool largePool;
@property (nonatomic) *_CAImageQueue outputImageQueue;
@property (retain, nonatomic) *__CVPixelBufferPool smallPool;


+(id)openCLContext;
+(id)openGLContext;
+(id)openGLContext:(id)arg0 ;
-(id)init;
-(struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(struct __CVBuffer *)createCVPixelBufferForFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;
-(void)applyFilter:(id)arg0 toSurface:(struct __IOSurface *)arg1 mirrored:(BOOL)arg2 resultHandler:(id)arg3 ;
-(void)applyFilter:(id)arg0 toSurface:(struct __IOSurface *)arg1 mirrored:(BOOL)arg2 surfaceResultHandler:(id)arg3 ;
-(void)preloadFilter:(id)arg0 ;
-(void)renderFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)renderFilter:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;
-(void)renderNineUp:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)renderNineUp:(id)arg0 inputPixelBuffer:(struct __CVBuffer *)arg1 mirrored:(BOOL)arg2 ;


@end


#endif