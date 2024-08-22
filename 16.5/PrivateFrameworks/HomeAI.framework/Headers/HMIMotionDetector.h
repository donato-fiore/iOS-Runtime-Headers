// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIMOTIONDETECTOR_H
#define HMIMOTIONDETECTOR_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIMotionDetector : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) *__CFArray resizedSampleBuffers; // ivar: _resizedSampleBuffers
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)applyActivityZoneFilteringOnSourcePoint:(struct CGPoint )arg0 destinationPoint:(struct CGPoint )arg1 frameSize:(struct CGSize )arg2 activityZones:(id)arg3 ;
-(id)_computeOpticalFlow:(struct __CVBuffer *)arg0 with:(struct __CVBuffer *)arg1 globalMotionScore:(*float)arg2 activityZones:(id)arg3 operationMode:(NSUInteger)arg4 ;
-(id)calculateMotionDetection:(struct vector<unsigned char, std::allocator<unsigned char>> )arg0 score:(struct vector<float, std::allocator<float>> )arg1 srcFeatureCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> )arg2 dstFeatreCVPoints:(struct vector<cv::Point_<float>, std::allocator<cv::Point_<float>>> )arg3 activityZones:(id)arg4 operationMode:(NSUInteger)arg5 srcPyramid:(struct vector<cv::Mat, std::allocator<cv::Mat>> )arg6 frameSize:(struct CGSize )arg7 brightnessChange:(float)arg8 ;
-(id)detectWithGlobalMotionScore:(*float)arg0 referencePixelBuffer:(struct __CVBuffer *)arg1 targetPixelBuffer:(struct __CVBuffer *)arg2 activityZones:(id)arg3 detectorMode:(NSUInteger)arg4 ;
-(id)init;
-(id)visualizeMotionDetections:(id)arg0 frameSize:(struct CGSize )arg1 timeStamp:(struct ? )arg2 ;
-(void)dealloc;


@end


#endif