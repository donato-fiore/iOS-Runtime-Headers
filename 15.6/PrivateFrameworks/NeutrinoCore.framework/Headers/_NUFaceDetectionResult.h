// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NUFACEDETECTIONRESULT_H
#define _NUFACEDETECTIONRESULT_H

@class NURenderResult, NSString, NSArray;
@protocol NUFaceDetectionResult, NURenderStatistics;



@interface _NUFaceDetectionResult : NURenderResult <NUFaceDetectionResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSArray *faces; // ivar: _faces
@property (readonly) NSUInteger hash;
@property ? imageSize; // ivar: _imageSize
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif