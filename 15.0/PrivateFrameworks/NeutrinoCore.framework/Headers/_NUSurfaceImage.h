// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NUSURFACEIMAGE_H
#define _NUSURFACEIMAGE_H

@class NUBufferImage, NSString;
@protocol NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage;


#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUImageLayout.h"
#import "NURegion.h"

@interface _NUSurfaceImage : NUBufferImage <NUSurfaceImage, NUMutableSurfaceImage, NUPurgeableSurfaceImage, NUMutablePurgeableSurfaceImage>



@property (readonly) NUColorSpace *colorSpace;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly) NUImageLayout *layout;
@property (readonly) ? size;
@property (readonly) Class superclass;
@property (readonly, copy) NURegion *validRegion;


-(BOOL)copyBufferStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 ;
-(BOOL)copySurfaceStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 device:(id)arg3 ;
-(void)readSurfaceRegion:(id)arg0 withBlock:(id)arg1 ;
-(void)readTextureRegion:(id)arg0 device:(id)arg1 withBlock:(id)arg2 ;
-(void)writeSurfaceRegion:(id)arg0 withBlock:(id)arg1 ;
-(void)writeTextureRegion:(id)arg0 device:(id)arg1 withBlock:(id)arg2 ;


@end


#endif