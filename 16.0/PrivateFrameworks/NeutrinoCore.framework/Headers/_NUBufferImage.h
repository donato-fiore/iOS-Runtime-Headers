// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUBUFFERIMAGE_H
#define _NUBUFFERIMAGE_H

@class NUImage, NSString;
@protocol NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage;


#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUImageLayout.h"
#import "NURegion.h"

@interface _NUBufferImage : NUImage <NUBufferImage, NUMutableBufferImage, NUPurgeableBufferImage, NUMutablePurgeableBufferImage>



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
-(id)debugQuickLookObject;
-(void)readBufferRegion:(id)arg0 withBlock:(id)arg1 ;
-(void)writeBufferRegion:(id)arg0 withBlock:(id)arg1 ;


@end


#endif