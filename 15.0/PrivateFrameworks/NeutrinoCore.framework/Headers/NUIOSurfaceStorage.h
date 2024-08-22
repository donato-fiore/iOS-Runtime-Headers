// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIOSURFACESTORAGE_H
#define NUIOSURFACESTORAGE_H

@class NUAbstractBufferStorage, NSString;
@protocol NUSurfaceStorage, NUPurgeableStorage, NUDevice;


#import "NUIOSurface.h"
#import "NUPixelFormat.h"
#import "NURegion.h"

@interface NUIOSurfaceStorage : NUAbstractBufferStorage <NUSurfaceStorage, NUPurgeableStorage>

 {
    NSInteger _purgeLevel;
    BOOL _purgeable;
    NUIOSurface *_surface;
    id<NUDevice> *_device;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format;
@property (readonly) NSUInteger hash;
@property (readonly) ? size;
@property (readonly) NSInteger sizeInBytes;
@property (readonly) Class superclass;
@property (readonly) NURegion *validRegion;


-(BOOL)decrementUseCount;
-(BOOL)isInUse;
-(BOOL)isPurgeable;
-(BOOL)isPurged;
-(BOOL)isShared;
-(BOOL)makeNonPurgeable;
-(NSInteger)_copyFromIOSurfaceStorage:(id)arg0 region:(id)arg1 device:(id)arg2 ;
-(NSInteger)copyFromStorage:(id)arg0 region:(id)arg1 ;
-(NSInteger)purgeLevel;
-(NSInteger)readBufferInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)readSurfaceInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)readTextureInRegion:(id)arg0 device:(id)arg1 block:(id)arg2 ;
-(NSInteger)rowBytes;
-(NSInteger)useAsCIImageWithOptions:(id)arg0 renderer:(id)arg1 block:(id)arg2 ;
-(NSInteger)useAsCIRenderDestinationWithRenderer:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeBufferInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeSurfaceInRegion:(id)arg0 block:(id)arg1 ;
-(NSInteger)writeTextureInRegion:(id)arg0 device:(id)arg1 block:(id)arg2 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)initWithSurface:(id)arg0 ;
-(int)useCount;
-(void)_allocateSurface;
-(void)adjustPurgeLevel:(NSInteger)arg0 ;
-(void)incrementUseCount;
-(void)makePurgeable;


@end


#endif