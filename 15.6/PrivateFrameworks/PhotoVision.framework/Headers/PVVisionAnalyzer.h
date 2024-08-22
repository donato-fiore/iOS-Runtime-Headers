// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PVVISIONANALYZER_H
#define PVVISIONANALYZER_H

@class NSDictionary;
@protocol PVVisionIntegrating;

#import <Foundation/Foundation.h>

#import "PVContext.h"

@interface PVVisionAnalyzer : NSObject {
    id<PVVisionIntegrating> *_visionIntegration;
    PVContext *_context;
    NSDictionary *_detectionOptions;
    NSDictionary *_detailsExtractionOptions;
}




-(NSInteger)_expressionTypeFromExpressionString:(id)arg0 ;
-(float)angleInDegreesBetweenFaceDirectionAndImageXAxisForFace:(id)arg0 ;
-(id)analyzeImage:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)initWithContext:(id)arg0 visionIntegration:(id)arg1 ;
-(struct CGPoint )centroidForLandmarkRegion:(id)arg0 ;
-(void)configureRequest:(id)arg0 ;


@end


#endif