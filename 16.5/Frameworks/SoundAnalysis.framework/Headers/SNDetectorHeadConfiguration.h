// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNDETECTORHEADCONFIGURATION_H
#define SNDETECTORHEADCONFIGURATION_H

@class NSString, NSPredicate;
@protocol SNProcessorCreating, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNDetectorHeadConfiguration : NSObject {
    unsigned int _windowLengthFrames;
    unsigned int _stepSizeFrames;
    id<SNProcessorCreating> *_featureExtractorConfiguration;
    NSString *_detectorIdentifier;
    id<SNMLModel> *_model;
    NSString *_outputLabel;
    CGFloat _sampleRate;
    NSPredicate *_resultsPredicate;
    NSInteger _resultsPredicateLeakCount;
}






@end


#endif