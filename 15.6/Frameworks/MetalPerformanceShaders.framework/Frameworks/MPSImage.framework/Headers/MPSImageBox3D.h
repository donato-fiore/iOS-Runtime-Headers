// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPSIMAGEBOX3D_H
#define MPSIMAGEBOX3D_H



#import "MPSUnaryImageKernel.h"
#import "MPSImageBox.h"

@interface MPSImageBox3D : MPSUnaryImageKernel {
    MPSImageBox *_boxFilter;
    BOOL _supportsReadWriteTextures;
}


@property (readonly, nonatomic) NSUInteger kernelDepth; // ivar: _kernelDepth
@property (readonly, nonatomic) NSUInteger kernelHeight; // ivar: _kernelHeight
@property (readonly, nonatomic) NSUInteger kernelWidth; // ivar: _kernelWidth


+(id)supportedPixelFormats;
+(struct MPSLibraryInfo *)libraryInfo:(*void)arg0 ;
-(id)initWithCoder:(id)arg0 device:(id)arg1 ;
-(id)initWithDevice:(id)arg0 ;
-(id)initWithDevice:(id)arg0 kernelWidth:(NSUInteger)arg1 kernelHeight:(NSUInteger)arg2 kernelDepth:(NSUInteger)arg3 ;
-(void)dealloc;
-(void)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;


@end


#endif