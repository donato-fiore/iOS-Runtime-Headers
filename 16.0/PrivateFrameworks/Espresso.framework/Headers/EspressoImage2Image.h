// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESPRESSOIMAGE2IMAGE_H
#define ESPRESSOIMAGE2IMAGE_H

@class NSString;
@protocol MTLCommandQueue, MTLDevice, OS_dispatch_queue, MTLTexture;

#import <Foundation/Foundation.h>


@interface EspressoImage2Image : NSObject {
    *void ctx;
    *void plan;
    ? net;
    basic_string<char, std::char_traits<char>, std::allocator<char>> output_layer_name;
    id<MTLCommandQueue> *queue;
    id<MTLDevice> *device;
    NSObject<OS_dispatch_queue> *dispatch_queue;
    BOOL is_temporal_model;
    NSUInteger dim;
    NSUInteger dim_small;
    int defaultWidth;
    int defaultHeight;
    float t0;
    int scale_ratio;
    id<MTLTexture> *smallOldResultTexture;
    map<std::string, float, std::less<std::string>, std::allocator<std::pair<const std::string, float>>> tweaks;
    postprocessing_settings_t current_postprocessing_settings;
    shared_ptr<Espresso::V9Engine::v9_noise_kernel> noise_k;
    shared_ptr<Espresso::generic_load_constant_kernel> noise_load_constant_kernel;
    NSString *currentNetworkPath;
    NSInteger currentResolutionPreset;
    shared_ptr<Espresso::blob<float, 1>> precomputed_noise;
    id<MTLTexture> *tmpDestinationTexture;
}


@property (nonatomic) int flip_y; // ivar: _flip_y
@property (nonatomic) int rotation_degrees; // ivar: _rotation_degrees


+(BOOL)loadStylesConfigAtDefaultsKey:(id)arg0 ;
+(BOOL)loadStylesConfigAtPath:(id)arg0 ;
+(id)getStylesKeys;
+(int)featureVersion;
+(void)gpuSync:(id)arg0 tex:(id)arg1 ;
+(void)setDefaultOption:(id)arg0 toValue:(id)arg1 ;
+(void)tuneNetworks:(id)arg0 ;
+(void)tuneNetworksWGWindowSize:(id)arg0 ;
-(float)benchmark;
-(id)getInternalDataForKey:(id)arg0 ;
-(id)init;
-(id)initWithQueue:(id)arg0 ;
-(id)newOutputTexture;
-(id)setupWithQueue:(id)arg0 ;
-(id)styleName;
-(int)_reshapeToResolutionPreset:(NSInteger)arg0 ;
-(int)_reshapeToWidth:(int)arg0 andHeight:(int)arg1 ;
-(int)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(struct ? )arg3 ;
-(int)encodeToCommandBuffer:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 cropRect:(struct ? )arg3 destinationRect:(struct ? )arg4 ;
-(int)height;
-(int)load:(id)arg0 ;
-(int)load:(id)arg0 resolutionPreset:(NSInteger)arg1 ;
-(int)reload;
-(int)reshapeToResolutionPreset:(NSInteger)arg0 ;
-(int)reshapeToResolutionPreset:(NSInteger)arg0 aspectRatio:(float)arg1 ;
-(int)reshapeToWidth:(int)arg0 andHeight:(int)arg1 ;
-(int)submitToQueueWithSourceTexture:(id)arg0 destinationTexture:(id)arg1 ;
-(int)submitToQueueWithSourceTexture:(id)arg0 destinationTexture:(id)arg1 cropRect:(struct ? )arg2 ;
-(int)wasReshaped;
-(int)width;
-(struct ? )getEspressoNetwork;
-(struct pair<int, int> )resolutionForPreset:(NSInteger)arg0 ;
-(void)_resetTemporalState;
-(void)_tune;
-(void)addNoiseLayer;
-(void)aggregateWisdom:(*void)arg0 ;
-(void)dealloc;
-(void)postProcess:(id)arg0 cameraSourceTexture:(id)arg1 inputTexture:(id)arg2 destinationTexture:(id)arg3 ;
-(void)resetTemporalState;
-(void)simpleLinearResize:(id)arg0 sourceTexture:(id)arg1 destinationTexture:(id)arg2 ;
-(void)tune;
-(void)tweak:(id)arg0 value:(float)arg1 ;


@end


#endif