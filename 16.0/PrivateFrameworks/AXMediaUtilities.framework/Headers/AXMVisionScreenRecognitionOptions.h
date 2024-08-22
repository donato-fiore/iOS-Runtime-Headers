// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMVISIONSCREENRECOGNITIONOPTIONS_H
#define AXMVISIONSCREENRECOGNITIONOPTIONS_H

@class CIImage;


#import "AXMVisionAnalysisOptions.h"

@interface AXMVisionScreenRecognitionOptions : AXMVisionAnalysisOptions

@property (nonatomic) BOOL disableCoagulator; // ivar: _disableCoagulator
@property (nonatomic) CGRect fullRect; // ivar: _fullRect
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) CIImage *testingImage; // ivar: _testingImage




@end


#endif