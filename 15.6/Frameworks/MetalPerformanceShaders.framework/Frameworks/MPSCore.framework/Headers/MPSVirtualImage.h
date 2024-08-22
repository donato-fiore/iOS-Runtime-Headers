// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSVIRTUALIMAGE_H
#define MPSVIRTUALIMAGE_H

@protocol MTLTexture;


#import "MPSImage.h"

@interface MPSVirtualImage : MPSImage

@property (readonly, nonatomic) NSObject<MTLTexture> *texture;


-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)initWithDevice:(id)arg0 imageDescriptor:(id)arg1 ;
-(id)initWithTexture:(id)arg0 featureChannels:(NSUInteger)arg1 ;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 region:(struct ? )arg3 featureChannelInfo:(struct ? )arg4 imageIndex:(NSUInteger)arg5 ;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 imageIndex:(NSUInteger)arg2 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 region:(struct ? )arg3 featureChannelInfo:(struct ? )arg4 imageIndex:(NSUInteger)arg5 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 imageIndex:(NSUInteger)arg2 ;


@end


#endif