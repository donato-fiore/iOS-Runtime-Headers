// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUNDISTORTIONMAPPING_H
#define ARUNDISTORTIONMAPPING_H


#import <Foundation/Foundation.h>


@interface ARUndistortionMapping : NSObject {
    CGSize _imageSize;
    vector<float, std::allocator<float>> _mappingU;
    vector<float, std::allocator<float>> _mappingV;
    *vImageMapping _mapping;
}




-(id)initWithImageSize:(struct CGSize )arg0 ;
-(void)createVImageMappingIfNeededForImage:(struct vImage_Buffer )arg0 ;
-(void)dealloc;


@end


#endif