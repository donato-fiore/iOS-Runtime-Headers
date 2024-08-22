// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSHOTFLOWNETWORK_H
#define AXSHOTFLOWNETWORK_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXShotflowNetwork : NSObject {
    *void _espressoPlan;
    *void _espressoContext;
    ? _espressoNetwork;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _logitsPosOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _logitsNegOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _offsetsOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _rollOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _yawOutputs;
    NSUInteger _currentNetworkWidth;
    NSUInteger _currentNetworkHeight;
    int _maxout_layers;
    int _bins_neg_maxout;
    BOOL _has_pose;
    BOOL _pose_square;
    BOOL _extra_default_boxes;
    int _num_pos_classes;
    vector<int, std::allocator<int>> _important_classes;
    vector<NSString *, std::allocator<NSString *>> _model_labels;
    int _num_ratios;
    vector<float, std::allocator<float>> _ratios;
    vector<float, std::allocator<float>> _default_boxes_sides;
    vector<float, std::allocator<float>> _default_boxes_sides_normalized;
    NSArray *_filterThreshold;
    float _defaultBoxSizes;
    vector<float, std::allocator<float>> _cell_starts_x;
    vector<float, std::allocator<float>> _cell_starts_y;
    float _input_aspect_ratio;
    BOOL _keep_aspect_ratio;
    BOOL _can_rotate;
    float _input_height;
}


@property (nonatomic) NSInteger modelType; // ivar: _modelType
@property (readonly, nonatomic) NSUInteger preferredSmallSide;
@property (nonatomic) float threshold; // ivar: _threshold
@property (nonatomic) int version; // ivar: _version


+(id)cpuNetworkWithModelPath:(id)arg0 configuration:(id)arg1 version:(int)arg2 modelType:(NSInteger)arg3 ;
+(id)gpuNetworkWithModelPath:(id)arg0 configuration:(id)arg1 preferredMetalDeviceID:(int)arg2 version:(int)arg3 modelType:(NSInteger)arg4 ;
-(id)initWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 configuration:(id)arg3 version:(int)arg4 modelType:(NSInteger)arg5 ;
-(id)processCIImage:(id)arg0 ;
-(id)processVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(id)resizeAndProcessVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(int)setInputShape:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)runNetwork:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;


@end


#endif