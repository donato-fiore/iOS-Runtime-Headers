// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOTFLOWDETECTOR_H
#define SHOTFLOWDETECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "ShotflowNetwork.h"

@interface ShotflowDetector : NSObject {
    ShotflowNetwork *_network;
}


@property (retain, nonatomic) NSArray *filterThresholds; // ivar: _filterThresholds
@property (nonatomic) float nmsThreshold; // ivar: _nmsThreshold
@property (nonatomic) int olmcsMergeCountDelta; // ivar: _olmcsMergeCountDelta
@property (nonatomic) float olmcsThreshold; // ivar: _olmcsThreshold
@property (nonatomic) float osfsSizeRatio; // ivar: _osfsSizeRatio
@property (nonatomic) float osfsThreshold; // ivar: _osfsThreshold
@property (nonatomic) float smartDistanceFactor; // ivar: _smartDistanceFactor
@property (nonatomic) float smartThreshold; // ivar: _smartThreshold
@property (nonatomic) float threshold;


+(float)inputImageAspectRatio;
+(float)inputImageMaxDimension;
+(float)inputImageMinDimension;
+(float)networkThreshold;
+(id)inputLayerName;
+(id)modelName;
+(id)processingDeviceDetectorWithEspressoNetwork:(struct ? )arg0 espressoPlan:(*void)arg1 ;
+(id)processingDeviceDetectorWithEspressoNetwork:(struct ? )arg0 espressoPlan:(*void)arg1 networkThreshold:(float)arg2 filterThresholds:(id)arg3 ;
+(id)processingDeviceDetectorWithModelPath:(id)arg0 networkThreshold:(float)arg1 filterThresholds:(id)arg2 preferredDeviceID:(int)arg3 engineID:(int)arg4 storageType:(int)arg5 ;
+(id)processingDeviceDetectorWithModelPath:(id)arg0 preferredDeviceID:(int)arg1 engineID:(int)arg2 storageType:(int)arg3 ;
+(id)supportedLabelKeys;
+(struct CGSize )getSuggestedImageSize:(struct CGSize )arg0 ;
+(struct CGSize )inputImageSize;
-(id)detect:(struct vImage_Buffer *)arg0 inputIsBGR:(BOOL)arg1 ;
-(id)detectAndProcessObjects:(struct vImage_Buffer *)arg0 inputIsBGR:(BOOL)arg1 ;
-(id)enforceSquareFaces:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;
-(id)filterBoxes:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 filterThresholds:(id)arg1 ;
-(id)mergeBoxes:(id)arg0 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)overlappingLowMergeCountSuppression:(id)arg0 ;
-(id)overlappingSmallFacesSuppression:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;
-(id)smartMergeBoxes:(id)arg0 ;
-(id)sortBoxes:(id)arg0 filterThresholdIndex:(NSUInteger)arg1 ;


@end


#endif