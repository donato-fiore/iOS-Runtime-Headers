// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESPRESSOFDOVERFEATNETWORK_H
#define ESPRESSOFDOVERFEATNETWORK_H

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface EspressoFDOverfeatNetwork : NSObject {
    vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> gpu_nets;
    vector<std::shared_ptr<Espresso::net>, std::allocator<std::shared_ptr<Espresso::net>>> ecpu_nets;
    vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>> net_scales;
    vector<std::pair<unsigned long long, unsigned long long>, std::allocator<std::pair<unsigned long long, unsigned long long>>> full_scales;
    vector<double, std::allocator<double>> scalesc;
    vector<std::shared_ptr<Espresso::fast_pyramid_resizer>, std::allocator<std::shared_ptr<Espresso::fast_pyramid_resizer>>> resizers_for_batching;
    int n_resizers_for_batching;
    vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> probBlobs;
    vector<std::shared_ptr<Espresso::blob<float, 3>>, std::allocator<std::shared_ptr<Espresso::blob<float, 3>>>> boxBlobs;
    NSMutableDictionary *_errorForLayers;
    pair<unsigned long long, unsigned long long> cropDims;
    *CGColorSpace colorSpace;
    net_strides_configuration strideConf;
    int retile_stride;
    int retile_tile_sz;
    vector<int, std::allocator<int>> retile_n_outputs_v;
    int tile_w_1;
    int tile_h_1;
    NSObject<OS_dispatch_queue> *cpu_queue_0;
    NSObject<OS_dispatch_semaphore> *cpu_semaphore;
    shared_ptr<Espresso::abstract_context> _context_metal;
    shared_ptr<Espresso::abstract_context> _context_cpu;
}


@property (retain, nonatomic) NSString *basename; // ivar: _basename
@property ? context_cpu;
@property ? context_metal;
@property (nonatomic) int cpin; // ivar: _cpin
@property (nonatomic) int forceMaxNScales; // ivar: _forceMaxNScales
@property (nonatomic) float maxScale; // ivar: _maxScale
@property (nonatomic) int mode; // ivar: _mode
@property (nonatomic) int scaleConfig; // ivar: _scaleConfig
@property (nonatomic) int scalingMode; // ivar: _scalingMode
@property (nonatomic) BOOL useGPUScaler; // ivar: _useGPUScaler
@property (retain, nonatomic) NSString *weights; // ivar: _weights


-(?)boxBlobForScale;
-(?)cpu_net;
-(?)gpu_net;
-(?)probBlobForScale;
-(?)processPyramid;
-(?)processPyramidgpu_resizer;
-(?)retryLoadingCaffeNet:(?)arg0 name:(?)arg1 weights:(?)arg2 contextcp;
-(?)storeDataForPruningprob;
-(BOOL)needRetiling:(int)arg0 ;
-(CGFloat)getScale:(int)arg0 ;
-(struct shared_ptr<Espresso::fast_pyramid_resizer> )resizerAtIndex:(int)arg0 ;
-(void)autoResizeForAspectRatio:(float)arg0 useLowPriorityMode:(BOOL)arg1 gpuPriority:(unsigned int)arg2 ;
-(void)forward_cpu_network_at_index:(int)arg0 pyr:(*void)arg1 ;
-(void)generatePyramid:(*void)arg0 tex:(id)arg1 ;
-(void)processBlob:(*void)arg0 tex:(id)arg1 ;
-(void)processBlobNoRotation:(*void)arg0 tex:(id)arg1 doBGRA2RGBA:(BOOL)arg2 ;
-(void)processVimageNoRotation:(struct vImage_Buffer *)arg0 tex:(id)arg1 doBGRA2RGBA:(BOOL)arg2 ;
-(void)retile_and_forward_espresso_gpu_network_at_index:(int)arg0 net:(*void)arg1 pyr:(*void)arg2 ;
-(void)retile_and_forward_espresso_network_at_index:(int)arg0 net:(*void)arg1 pyr:(*void)arg2 ;


@end


#endif