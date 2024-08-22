// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCPIMAGELIVEPHOTOBLURANALYZER_H
#define VCPIMAGELIVEPHOTOBLURANALYZER_H

@class NSArray;


#import "VCPBlurAnalyzer.h"

@interface VCPImageLivePhotoBlurAnalyzer : VCPBlurAnalyzer {
    NSArray *_movingObjects;
}




-(id)initWithMovingObjectsResults:(id)arg0 ;
-(int)analyzePixelBuffer:(struct __CVBuffer *)arg0 flags:(*NSUInteger)arg1 results:(*id)arg2 cancel:(id)arg3 ;


@end


#endif