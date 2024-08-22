// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _NUIMAGE_H
#define _NUIMAGE_H

@class NSPointerArray, NSString;
@protocol NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage, OS_dispatch_queue, NUStorageFactory;

#import <Foundation/Foundation.h>

#import "NUColorSpace.h"
#import "NUPixelFormat.h"
#import "NUImageLayout.h"
#import "NURegion.h"

@interface _NUImage : NSObject <NUImage, NUMutableImage, NUImageCopying, NUPurgeableImage, NUMutablePurgeableImage>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSPointerArray *_tiles;
    id<NUStorageFactory> *_tileFactory;
    vector<unsigned char, std::allocator<unsigned char>> _accessCount;
}


@property (readonly) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NUPixelFormat *format; // ivar: _format
@property (readonly) NSUInteger hash;
@property (readonly) NUImageLayout *layout; // ivar: _layout
@property (readonly) ? size;
@property (readonly) Class superclass;
@property (copy) NURegion *validRegion; // ivar: _validRegion


-(BOOL)beginAccess;
-(BOOL)beginAccessRegion:(id)arg0 ;
-(BOOL)copyBufferStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 ;
-(BOOL)copySurfaceStorage:(id)arg0 fromRect:(struct ? )arg1 toPoint:(struct ? )arg2 device:(id)arg3 ;
-(id)_createOrCopyTile:(id)arg0 tileInfo:(id)arg1 writeRegion:(id)arg2 ;
-(id)_nonPurgeableCopy;
-(id)_purgeableCopy;
-(id)_tileAtIndex:(NSUInteger)arg0 ;
-(id)immutableImageCopy;
-(id)init;
-(id)initWithLayout:(id)arg0 format:(id)arg1 colorSpace:(id)arg2 tileFactory:(id)arg3 ;
-(id)mutableImageCopy;
-(id)mutablePurgeableImageCopy;
-(id)purgeableImageCopy;
-(id)tileAtIndex:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)endAccess;
-(void)endAccessRegion:(id)arg0 ;
-(void)readRegion:(id)arg0 withBlock:(id)arg1 ;
-(void)writeRegion:(id)arg0 withBlock:(id)arg1 ;


@end


#endif