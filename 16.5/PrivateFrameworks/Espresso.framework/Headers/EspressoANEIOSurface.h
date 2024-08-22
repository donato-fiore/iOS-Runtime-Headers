// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ESPRESSOANEIOSURFACE_H
#define ESPRESSOANEIOSURFACE_H

@class NSDictionary, NSSet;

#import <Foundation/Foundation.h>


@interface EspressoANEIOSurface : NSObject {
    NSDictionary *params_dict;
    vector<Espresso::ANERuntimeEngine::surface_and_buffer, std::allocator<Espresso::ANERuntimeEngine::surface_and_buffer>> multiple_buffer_io_surfaces;
    BOOL created_with_lazy_iosurface;
    BOOL ane_surface_use_cvpixelbuffer;
    NSUInteger width;
    NSUInteger height;
    NSUInteger rowBytes;
    NSSet *valid_pixel_formats;
    ? _external_storage_blob_for_aliasing_mem;
}


@property ? external_storage_blob_for_aliasing_mem;
@property (readonly, nonatomic) unsigned int pixelFormat; // ivar: _pixelFormat


-(BOOL)checkIfMatches:(struct __CVBuffer *)arg0 ;
-(BOOL)checkIfMatchesIOSurface:(struct __IOSurface *)arg0 ;
-(id)ane_io_surfaceForMultiBufferFrame:(NSUInteger)arg0 ;
-(id)initWithIOSurfaceProperties:(id)arg0 andPixelFormats:(id)arg1 ;
-(id)metalBufferWithDevice:(id)arg0 multiBufferFrame:(NSUInteger)arg1 ;
-(struct __IOSurface *)createIOSurfaceWithExtraProperties:(id)arg0 ;
-(struct __IOSurface *)ioSurfaceForMultiBufferFrame:(NSUInteger)arg0 ;
-(struct __IOSurface *)ioSurfaceForMultiBufferFrameNoLazyForTesting:(NSUInteger)arg0 ;
-(void)doNonLazyAllocation:(id)arg0 ;
-(void)lazilyAutoCreateSurfaceForFrame:(NSUInteger)arg0 ;
-(void)resizeForMultipleAsyncBuffers:(NSUInteger)arg0 ;
-(void)restoreInternalStorage:(NSUInteger)arg0 ;


@end


#endif