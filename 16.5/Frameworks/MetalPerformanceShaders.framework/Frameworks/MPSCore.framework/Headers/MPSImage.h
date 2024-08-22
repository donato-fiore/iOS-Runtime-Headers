// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSIMAGE_H
#define MPSIMAGE_H

@class NSString;
@protocol MTLDevice, MTLTexture;

#import <Foundation/Foundation.h>

#import "MPSImage.h"

@interface MPSImage : NSObject {
    *void _device;
    NSUInteger _textureType;
    MPSPixelInfo _pixelInfo;
    MPSAutoTexture _texture;
    BOOL _updatedAlready;
}


@property (readonly, retain, nonatomic) NSObject<MTLDevice> *device;
@property (readonly, nonatomic) NSUInteger featureChannelFormat; // ivar: _featureChannelFormat
@property (readonly, nonatomic) NSUInteger featureChannels; // ivar: _featureChannels
@property (readonly, nonatomic) NSUInteger featureChannelsLayout; // ivar: _featureChannelsLayout
@property (readonly, nonatomic) NSUInteger height; // ivar: _height
@property (copy) NSString *label; // ivar: _label
@property (readonly, nonatomic) NSUInteger numberOfImages; // ivar: _numberOfImages
@property (readonly, retain, nonatomic) MPSImage *parent; // ivar: _parent
@property (readonly, nonatomic) NSUInteger pixelFormat;
@property (readonly, nonatomic) NSUInteger pixelSize;
@property (readonly, nonatomic) NSUInteger precision;
@property (readonly, nonatomic) NSObject<MTLTexture> *texture;
@property (readonly, nonatomic) NSUInteger textureType;
@property (readonly, nonatomic) NSUInteger usage;
@property (readonly, nonatomic) NSUInteger width; // ivar: _width


+(id)defaultAllocator;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)getPixelChannelSize;
-(NSUInteger)resourceSize;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)batchRepresentation;
-(id)batchRepresentationWithSubRange:(struct _NSRange )arg0 ;
-(id)debugDescription;
-(id)debugQuickLookObject;
-(id)init;
-(id)initWithDescriptor:(id)arg0 featureChannels:(NSUInteger)arg1 featureChannelsLayout:(NSUInteger)arg2 featureChannelFormat:(NSUInteger)arg3 onDevice:(id)arg4 ;
-(id)initWithDevice:(id)arg0 imageDescriptor:(id)arg1 ;
-(id)initWithParentImage:(id)arg0 sliceRange:(struct _NSRange )arg1 featureChannels:(NSUInteger)arg2 ;
-(id)initWithTexture:(id)arg0 featureChannels:(NSUInteger)arg1 ;
-(id)initWithTexture:(id)arg0 featureChannels:(NSUInteger)arg1 featureChannelsLayout:(NSUInteger)arg2 ;
-(id)subImageWithFeatureChannelRange:(struct _NSRange )arg0 ;
-(void)dealloc;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 region:(struct ? )arg3 featureChannelInfo:(struct ? )arg4 imageIndex:(NSUInteger)arg5 ;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 imageIndex:(NSUInteger)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerColumn:(NSUInteger)arg2 bytesPerRow:(NSUInteger)arg3 bytesPerImage:(NSUInteger)arg4 region:(struct ? )arg5 featureChannelInfo:(struct ? )arg6 imageIndex:(NSUInteger)arg7 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 region:(struct ? )arg3 featureChannelInfo:(struct ? )arg4 imageIndex:(NSUInteger)arg5 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 imageIndex:(NSUInteger)arg2 ;


@end


#endif