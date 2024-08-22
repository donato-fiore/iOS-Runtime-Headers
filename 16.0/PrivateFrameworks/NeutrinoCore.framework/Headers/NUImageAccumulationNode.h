// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUIMAGEACCUMULATIONNODE_H
#define NUIMAGEACCUMULATIONNODE_H

@protocol NUMutablePurgeableImage, OS_dispatch_queue;


#import "NURenderNode.h"
#import "NUColorSpace.h"
#import "NUImageLayout.h"
#import "NUPixelFormat.h"

@interface NUImageAccumulationNode : NURenderNode {
    id<NUMutablePurgeableImage> *_image;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, nonatomic) NUColorSpace *colorSpace; // ivar: _colorSpace
@property (readonly, nonatomic) NSObject<NUMutablePurgeableImage> *image;
@property (readonly, nonatomic) ? imageSize; // ivar: _imageSize
@property (readonly, nonatomic) NUImageLayout *layout; // ivar: _layout
@property (readonly, nonatomic) NUPixelFormat *pixelFormat; // ivar: _pixelFormat


-(id)_newImage;
-(id)debugQuickLookObject;
-(id)initWithImageSize:(struct ? )arg0 tileSize:(struct ? )arg1 borderSize:(struct ? )arg2 pixelFormat:(id)arg3 colorSpace:(id)arg4 input:(id)arg5 ;
-(id)initWithSettings:(id)arg0 inputs:(id)arg1 ;


@end


#endif