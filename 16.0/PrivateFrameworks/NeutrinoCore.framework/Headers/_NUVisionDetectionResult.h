// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NUVISIONDETECTIONRESULT_H
#define _NUVISIONDETECTIONRESULT_H

@class NURenderResult, NSString, NSArray;
@protocol NUVisionDetectionResult, NURenderStatistics;



@interface _NUVisionDetectionResult : NURenderResult <NUVisionDetectionResult>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? imageSize; // ivar: imageSize
@property (copy, nonatomic) NSArray *observations; // ivar: observations
@property (readonly) NSObject<NURenderStatistics> *statistics;
@property (readonly) Class superclass;




@end


#endif