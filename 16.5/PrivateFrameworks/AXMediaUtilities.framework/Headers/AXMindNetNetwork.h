// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXMINDNETNETWORK_H
#define AXMINDNETNETWORK_H

@class MLModel, NSArray;

#import <Foundation/Foundation.h>


@interface AXMindNetNetwork : NSObject {
    MLModel *_mindNetModel;
    NSInteger _modelType;
    int _num_pos_classes;
    vector<int, std::allocator<int>> _important_classes;
    vector<NSString *, std::allocator<NSString *>> _model_labels;
    int _num_ratios;
    NSArray *_filterThreshold;
    float _input_aspect_ratio;
    BOOL _keep_aspect_ratio;
    BOOL _can_rotate;
    float _input_height;
    float _screenshot_width;
    float _screenshot_height;
}


@property (readonly, nonatomic) NSArray *filterThresholds; // ivar: _filterThresholds
@property (nonatomic) float nmsThreshold; // ivar: _nmsThreshold
@property (readonly, nonatomic) NSUInteger preferredSmallSide;
@property (nonatomic) float threshold; // ivar: _threshold
@property (nonatomic) int version; // ivar: _version


+(id)networkWithModelPath:(id)arg0 configuration:(id)arg1 modelType:(NSInteger)arg2 ;
-(id)initWithModelPath:(id)arg0 configuration:(id)arg1 modelType:(NSInteger)arg2 ;
-(id)processCIImage:(id)arg0 ;
-(id)processVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(id)resizeAndProcessVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;


@end


#endif