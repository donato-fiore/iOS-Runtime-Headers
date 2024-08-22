// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMIFACEQUALITYENTROPYOFLAPLACIAN_H
#define HMIFACEQUALITYENTROPYOFLAPLACIAN_H

@class HMFObject, NSString;
@protocol HMFLogging;



@interface HMIFaceQualityEntropyOfLaplacian : HMFObject <HMFLogging>

 {
    int _numBins;
    int _maxLaplacianScore;
    int _minLaplacianScore;
    float _binWidth;
    float _maxScore;
    vector<float, std::allocator<float>> _histogram;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)logCategory;
-(float)computeJunkScoreForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(id)init;


@end


#endif