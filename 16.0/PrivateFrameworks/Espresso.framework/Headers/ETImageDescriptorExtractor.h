// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ETIMAGEDESCRIPTOREXTRACTOR_H
#define ETIMAGEDESCRIPTOREXTRACTOR_H


#import <Foundation/Foundation.h>


@interface ETImageDescriptorExtractor : NSObject {
    *void _plan;
    ? _net;
    *void _ctx;
    ? _inputBlob;
    ? _outputBlob;
    NSUInteger _targetWidth;
    NSUInteger _targetHeight;
    basic_string<char, std::char_traits<char>, std::allocator<char>> _inputName;
    *NSUInteger _inputShape;
}


@property float brightness_range; // ivar: _brightness_range
@property float contrast_range; // ivar: _contrast_range
@property NSUInteger descriptors_file_cache_size; // ivar: _descriptors_file_cache_size
@property NSUInteger descriptors_mem_cache_size; // ivar: _descriptors_mem_cache_size
@property int doBatchnormTuning; // ivar: _doBatchnormTuning
@property float horizontal_flip; // ivar: _horizontal_flip
@property int nAugmentations; // ivar: _nAugmentations
@property float rotation_range; // ivar: _rotation_range
@property float shear_range; // ivar: _shear_range
@property float zoom_range; // ivar: _zoom_range


+(id)VisionSceneNet_iOS10_Extractor;
+(id)VisionSmartCamNet_iOS11_Extractor;
+(id)inception_v3_Extractor;
+(id)passthroughExtractor;
-(*float)extractDescriptorForDataPoint:(struct vImage_Buffer )arg0 freeWhenDone:(BOOL)arg1 ;
-(id)initWithNetwork:(id)arg0 ;
-(int)numberOfChannels;
-(struct vImage_Buffer )cropResizeInputImage:(struct vImage_Buffer )arg0 ;
-(void)extractForDataPoint:(id)arg0 ;


@end


#endif