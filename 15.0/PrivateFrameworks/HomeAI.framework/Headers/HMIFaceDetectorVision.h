// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMIFACEDETECTORVISION_H
#define HMIFACEDETECTORVISION_H

@class HMFObject, NSString;
@protocol HMIFaceDetector, HMFLogging;



@interface HMIFaceDetectorVision : HMFObject <HMIFaceDetector, HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)defaultRevision;
+(id)detectFacesInImageData:(id)arg0 error:(*id)arg1 ;
+(id)detectFacesInPixelBuffer:(struct __CVBuffer *)arg0 error:(*id)arg1 ;
+(id)logCategory;
+(void)releaseCachedResources;


@end


#endif