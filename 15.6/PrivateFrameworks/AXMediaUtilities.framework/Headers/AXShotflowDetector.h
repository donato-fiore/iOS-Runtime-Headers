// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXSHOTFLOWDETECTOR_H
#define AXSHOTFLOWDETECTOR_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "AXShotflowNetwork.h"

@interface AXShotflowDetector : NSObject {
    AXShotflowNetwork *_network;
}


@property (retain, nonatomic) NSArray *filterThreshold; // ivar: _filterThreshold
@property (nonatomic) float mergeHeadsThreshold; // ivar: _mergeHeadsThreshold
@property (nonatomic) float nmsThreshold; // ivar: _nmsThreshold
@property (nonatomic) int olmcsMergeCountDelta; // ivar: _olmcsMergeCountDelta
@property (nonatomic) float olmcsThreshold; // ivar: _olmcsThreshold
@property (nonatomic) float osfsSizeRatio; // ivar: _osfsSizeRatio
@property (nonatomic) float osfsThreshold; // ivar: _osfsThreshold
@property (nonatomic) float overlap_threshold; // ivar: _overlap_threshold
@property (nonatomic) float smartDistanceFactor; // ivar: _smartDistanceFactor
@property (nonatomic) float smartThreshold; // ivar: _smartThreshold
@property (nonatomic) float threshold;


+(id)cpuDetectorWithModelPath:(id)arg0 configuration:(id)arg1 version:(int)arg2 ;
+(id)gpuDetectorWithModelPath:(id)arg0 configuration:(id)arg1 preferredMetalDeviceID:(int)arg2 version:(int)arg3 modelType:(NSInteger)arg4 ;
-(id)detect:(id)arg0 ;
-(id)enforceSquareFaces:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;
-(id)filterBoxes:(id)arg0 ;
-(id)initWithNetwork:(id)arg0 nmsThreshold:(float)arg1 filterThreshold:(id)arg2 ;
-(id)mergeBoxes:(id)arg0 ;
-(id)mergeHeadsBoxes:(id)arg0 ;
-(id)nmsBoxes:(id)arg0 ;
-(id)overlappingLowMergeCountSuppression:(id)arg0 ;
-(id)overlappingSmallFacesSuppression:(id)arg0 ;
-(id)processBoxes:(id)arg0 withHeight:(float)arg1 andWidth:(float)arg2 ;
-(id)smartMergeBoxes:(id)arg0 ;


@end


#endif