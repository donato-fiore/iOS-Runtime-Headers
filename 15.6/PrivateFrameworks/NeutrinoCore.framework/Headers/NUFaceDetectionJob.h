// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NUFACEDETECTIONJOB_H
#define NUFACEDETECTIONJOB_H

@class NSArray;


#import "NURenderJob.h"
#import "NUFaceDetectionRequest.h"

@interface NUFaceDetectionJob : NURenderJob {
    NSArray *_faces;
    ? _imageSize;
}


@property (readonly) NUFaceDetectionRequest *faceDetectionRequest;


-(BOOL)render:(*id)arg0 ;
-(BOOL)wantsCompleteStage;
-(BOOL)wantsOutputGeometry;
-(BOOL)wantsOutputImage;
-(id)cacheKey;
-(id)detectFaceLandmarksInBuffer:(struct __CVBuffer *)arg0 withFaceRects:(id)arg1 error:(*id)arg2 ;
-(id)detectFaceRectsInBuffer:(struct __CVBuffer *)arg0 maxResultCount:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithFaceDetectionRequest:(id)arg0 ;
-(id)initWithRequest:(id)arg0 ;
-(id)result;
-(id)scalePolicy;
-(void)cleanUp;


@end


#endif