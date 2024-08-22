// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSTEMPORARYIMAGE_H
#define MPSTEMPORARYIMAGE_H



#import "MPSImage.h"

@interface MPSTemporaryImage : MPSImage

@property (nonatomic) NSUInteger readCount; // ivar: _readCount


+(id)defaultAllocator;
+(id)temporaryImageWithCommandBuffer:(id)arg0 imageDescriptor:(id)arg1 ;
+(id)temporaryImageWithCommandBuffer:(id)arg0 textureDescriptor:(id)arg1 ;
+(id)temporaryImageWithCommandBuffer:(id)arg0 textureDescriptor:(id)arg1 featureChannels:(NSUInteger)arg2 ;
+(void)prefetchStorageWithCommandBuffer:(id)arg0 imageDescriptorList:(id)arg1 ;
-(NSUInteger)setPurgeableState:(NSUInteger)arg0 ;
-(id)debugDescription;
-(id)initWithParentImage:(id)arg0 sliceRange:(struct _NSRange )arg1 featureChannels:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)readBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;
-(void)synchronizeOnCommandBuffer:(id)arg0 ;
-(void)writeBytes:(*void)arg0 dataLayout:(NSUInteger)arg1 bytesPerRow:(NSUInteger)arg2 bytesPerImage:(NSUInteger)arg3 region:(struct ? )arg4 featureChannelInfo:(struct ? )arg5 imageIndex:(NSUInteger)arg6 ;


@end


#endif