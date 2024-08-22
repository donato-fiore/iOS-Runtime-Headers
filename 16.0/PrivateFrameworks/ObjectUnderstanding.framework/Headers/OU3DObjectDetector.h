// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OU3DOBJECTDETECTOR_H
#define OU3DOBJECTDETECTOR_H

@class NSMutableDictionary, NSArray, NSSet;
@protocol OUCamera, OUPointCloud;

#import <Foundation/Foundation.h>

#import "OUPointCloud.h"
#import "_OUFrame.h"
#import "OU3DObjectMerger.h"
#import "OUObjectCompleteness.h"
#import "OUObjectAsset.h"

@interface OU3DObjectDetector : NSObject {
    BOOL isOnline_;
    *? det_params;
    map<NSString *, short, CompareNSString, std::allocator<std::pair<NSString *const, short>>> obj_type_to_index;
    OUPointCloud *arframePointCloud_;
    CGFloat latestTimestamp;
    float4x4 latestPose;
    NSMutableDictionary *keyframesPointCloud_;
    float4x4 cameraPose_;
    float4x4 sceneUnderstandingPose_;
    float tanRgbFOV_;
    id<OUCamera> *camera_;
    _OUFrame *arframe_;
    float4x4 ucr;
    float4x4 inv_ucr;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> model_input_pc_;
    vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> model_input_labels_;
    vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> model_input_votes_;
    int pred_boxes_cnt_;
    unique_ptr<OU3DObjectRGBSizeRefiner, std::default_delete<OU3DObjectRGBSizeRefiner>> object_rgb_size_refiner_;
    unique_ptr<OU3DODInterface, std::default_delete<OU3DODInterface>> ssd_model_;
    unique_ptr<OU3DODInterface, std::default_delete<OU3DODInterface>> ssd_offline_model_;
    OU3DKitchenObjectMerger offline_merger_;
    OU3DObjectMerger *merger;
    OUObjectCompleteness *object_completeness_;
    OUObjectAsset *objectAsset_;
    ? cur_box3ds_;
    ? acc_box3ds_;
    ? merged_box3ds_;
    vector<std::vector<float>, std::allocator<std::vector<float>>> hist_ori_iou_mat_;
    vector<std::vector<float>, std::allocator<std::vector<float>>> hist_nms_iou_mat_;
    vector<int, std::allocator<int>> hist_kept_box_ids_;
    NSUInteger hist_boxes_cnt_;
    vector<int, std::allocator<int>> size_refined_box_ids_;
    NSArray *pre_size_refined_;
    NSArray *pre_rgb_size_refined_;
    int num_pre_key_frames_;
    int num_cur_key_frames_;
    float floor_height_;
    NSSet *rgb_refine_supported_types_;
}


@property (readonly, nonatomic) BOOL RgbRefinementEnabled; // ivar: _RgbRefinementEnabled
@property (readonly, nonatomic) NSArray *allObjects; // ivar: allObjects
@property (nonatomic) float depthConfidenceThreshold; // ivar: depthConfidenceThreshold
@property (nonatomic) float frustumFOV; // ivar: frustumFOV
@property (readonly, nonatomic) NSObject<OUPointCloud> *frustumPointCloud; // ivar: _frustumPointCloud
@property (nonatomic) CGFloat maxDetectionInterval; // ivar: maxDetectionInterval
@property (nonatomic) CGFloat minDetectionInterval; // ivar: minDetectionInterval
@property (readonly, nonatomic) short offline_model_; // ivar: offline_model_
@property (readonly, nonatomic) short online_model_; // ivar: online_model_
@property (nonatomic) float rotationalSensitivity; // ivar: rotationalSensitivity
@property (readonly, nonatomic) NSSet *supportedObjectTypes;
@property (nonatomic) float translationalSensitivity; // ivar: translationalSensitivity
@property (readonly, nonatomic) NSObject<OUPointCloud> *worldPointCloud; // ivar: worldPointCloud
@property (nonatomic) NSUInteger worldPointCloudCapacity; // ivar: worldPointCloudCapacity


-(BOOL)preprocess;
-(BOOL)shouldUpdateForFrame:(id)arg0 ;
-(id)FindNeedRefineBoxUUID:(id)arg0 withOldObjects:(id)arg1 ;
-(id)combineBoxTypeByUUID:(id)arg0 ;
-(id)generateOfflineObjects:(id)arg0 onlineObjects:(id)arg1 ;
-(id)getObjectAsset;
-(id)init:(BOOL)arg0 ;
-(id)regulateObjectSize:(id)arg0 withOldObjects:(id)arg1 ;
-(id)run;
-(id)updateWithKeyframes:(id)arg0 currentCameraPose:(struct ? )arg1 ;
-(id)updateWithKeyframes:(id)arg0 currentCameraPose:(struct ? )arg1 currentCamera:(id)arg2 ;
-(id)updateWithKeyframes:(id)arg0 ouframe:(id)arg1 ;
-(struct vector<unsigned long, std::allocator<unsigned long>> )runwithinClassNMS:(*void)arg0 ids:(*void)arg1 ori_iou:(*void)arg2 nms_iou:(*void)arg3 ;
-(void)CopyRefineHistory:(id)arg0 fromOldObjects:(id)arg1 ;
-(void)InitializeRGBRefinement:(id)arg0 ;
-(void)OfflineModelInitialization;
-(void)ResestObjectSizeHistoryIfSizeChange:(id)arg0 withOldObjects:(id)arg1 ;
-(void)assignIdentifiersForNewObjects:(id)arg0 withOldObjects:(id)arg1 ;
-(void)buildFrustumPointCloudFromWorldPointCloud;
-(void)clear;
-(void)initialization;
-(void)modelInference;
-(void)modelPreprocess;
-(void)postprocess;
-(void)regulateObjectCornerOrders:(id)arg0 withOldObjects:(id)arg1 ;
-(void)runRegulateObjectCornerOrders:(id)arg0 withOldObjects:(id)arg1 ;
-(void)updateFrustumPointCloudWithFrame:(id)arg0 scenUnderstandingPose:(struct float4x4 )arg1 ;
-(void)updatePointCloudWithKeyframes:(id)arg0 ;


@end


#endif