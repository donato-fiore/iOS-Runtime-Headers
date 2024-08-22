// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHOTFLOWNETWORK_H
#define SHOTFLOWNETWORK_H


#import <Foundation/Foundation.h>


@interface ShotflowNetwork : NSObject {
    ? _espressoNetwork;
    *void _espressoPlan;
    *void _espressoContext;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _logitsPosOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _logitsNegOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _offsetsOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _rollOutputs;
    vector<std::shared_ptr<espresso_buffer_t>, std::allocator<std::shared_ptr<espresso_buffer_t>>> _yawOutputs;
    NSUInteger _currentNetworkWidth;
    NSUInteger _currentNetworkHeight;
    BOOL _releaseEspressoContext;
    BOOL _releaseEspressoPlan;
    BOOL isAnchorSquare;
    float _defaultBoxSizes;
}


@property (readonly, nonatomic) NSUInteger preferredSmallSide; // ivar: _preferredSmallSide
@property (nonatomic) float threshold; // ivar: _threshold


+(*void)defaultBoxesSides;
+(*void)strides;
+(BOOL)hasPose;
+(BOOL)inputBGR;
+(NSUInteger)numberBinsRoll;
+(NSUInteger)numberBinsYaw;
+(float)inputImageAspectRatio;
+(float)inputImageMaxDimension;
+(float)inputImageMinDimension;
+(float)inputScale;
+(float)nonSquareRollDefault;
+(float)nonSquareYawDefault;
+(id)inputLayerName;
+(id)processingDeviceDetectorWithEspressoNetwork:(struct ? )arg0 espressoPlan:(*void)arg1 threshold:(float)arg2 ;
+(id)processingDeviceNetworkWithModelPath:(id)arg0 threshold:(float)arg1 preferredDeviceID:(int)arg2 engineID:(int)arg3 storageType:(int)arg4 ;
+(struct tuple<float, float, float> )inputBiasRGB;
-(id)initWithEspressoNetwork:(struct ? )arg0 espressoPlan:(*void)arg1 threshold:(float)arg2 ;
-(id)initWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 espressoStorageType:(int)arg3 threshold:(float)arg4 ;
-(id)processVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(id)resizeAndProcessVImage:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;
-(int)setInputShape:(NSUInteger)arg0 height:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)initializeBuffers;
-(void)initializeEspressoResourcesWithModelPath:(id)arg0 espressoEngineID:(int)arg1 espressoDeviceID:(int)arg2 espressoStorageType:(int)arg3 ;
-(void)runNetwork:(struct vImage_Buffer )arg0 inputIsBGR:(BOOL)arg1 ;


@end


#endif