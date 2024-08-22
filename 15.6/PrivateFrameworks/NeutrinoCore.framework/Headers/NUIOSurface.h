// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUIOSURFACE_H
#define NUIOSURFACE_H

@class NSMutableDictionary, IOSurface, NSString;

#import <Foundation/Foundation.h>

#import "NUPixelFormat.h"

@interface NUIOSurface : NSObject {
    NSMutableDictionary *_textures;
}


@property (readonly, nonatomic) IOSurface *IOSurface;
@property (readonly, nonatomic) *__IOSurface IOSurfaceRef; // ivar: _IOSurfaceRef
@property (retain, nonatomic) *CGColorSpace colorSpace;
@property (readonly, nonatomic) NUPixelFormat *format; // ivar: _format
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSInteger rowBytes;
@property (readonly, nonatomic) ? size; // ivar: _size
@property (readonly, nonatomic) NSInteger sizeInBytes;


-(BOOL)isPurged;
-(BOOL)makeNonPurgeable;
-(BOOL)read:(id)arg0 ;
-(BOOL)write:(id)arg0 ;
-(id)_newTextureForDevice:(id)arg0 ;
-(id)_purgeStateDescription;
-(id)debugQuickLookObject;
-(id)description;
-(id)init;
-(id)initWithIOSurface:(struct __IOSurface *)arg0 ;
-(id)initWithSize:(struct ? )arg0 format:(id)arg1 ;
-(id)newRenderDestination;
-(id)textureForDevice:(id)arg0 ;
-(int)_fetchPurgeState:(*unsigned int)arg0 ;
-(unsigned int)_purgeLevelToOSValue:(NSInteger)arg0 ;
-(void)_allocateSurface;
-(void)dealloc;
-(void)makePurgeable:(NSInteger)arg0 ;


@end


#endif