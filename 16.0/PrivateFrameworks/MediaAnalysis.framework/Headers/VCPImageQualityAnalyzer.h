// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCPIMAGEQUALITYANALYZER_H
#define VCPIMAGEQUALITYANALYZER_H


#import <Foundation/Foundation.h>


@interface VCPImageQualityAnalyzer : NSObject

@property (readonly) float qualityScore; // ivar: _qualityScore


-(int)analyzeImageQuality:(id)arg0 irisPhotoOffsetSec:(float)arg1 cancel:(id)arg2 ;


@end


#endif