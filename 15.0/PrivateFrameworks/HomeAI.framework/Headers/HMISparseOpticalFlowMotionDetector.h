// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMISPARSEOPTICALFLOWMOTIONDETECTOR_H
#define HMISPARSEOPTICALFLOWMOTIONDETECTOR_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMIMotionDetector, HMFLogging;



@interface HMISparseOpticalFlowMotionDetector : HMFObject <HMIMotionDetector, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSMutableArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (readonly) CGSize size; // ivar: _size
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)applyActivityZoneFilteringOnSourcePoint:(struct CGPoint )arg0 destinationPoint:(struct CGPoint )arg1 activityZones:(id)arg2 ;
-(id)_computeOpticalFlow:(struct __CVBuffer *)arg0 with:(struct __CVBuffer *)arg1 globalMotionScore:(*float)arg2 activityZones:(id)arg3 operationMode:(NSUInteger)arg4 ;
-(id)calculateMotionDetection:(struct vector<unsigned char, std::allocator<unsigned char>> )arg0 score:(struct vector<float, std::allocator<float>> )arg1 srcFeatureCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> )arg2 dstFeatreCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> )arg3 activityZones:(id)arg4 operationMode:(NSUInteger)arg5 srcPyramid:(struct vector<cv::Mat, std::allocator<cv::Mat>> )arg6 brightnessChange:(float)arg7 ;
-(id)detectWithGlobalMotionScore:(*float)arg0 activityZones:(id)arg1 detectorMode:(NSUInteger)arg2 ;
-(id)initWithSize:(struct CGSize )arg0 ;
-(void)appendFramePixelBuffer:(struct __CVBuffer *)arg0 atTime:(struct ? )arg1 ;


@end


#endif