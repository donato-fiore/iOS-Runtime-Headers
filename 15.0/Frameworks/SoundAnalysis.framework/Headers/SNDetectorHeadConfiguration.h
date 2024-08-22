// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNDETECTORHEADCONFIGURATION_H
#define SNDETECTORHEADCONFIGURATION_H

@class NSString;
@protocol SNProcessorCreating, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNDetectorHeadConfiguration : NSObject

@property (readonly, nonatomic) NSString *detectorIdentifier; // ivar: _detectorIdentifier
@property (readonly, nonatomic) NSObject<SNProcessorCreating> *featureExtractorConfiguration; // ivar: _featureExtractorConfiguration
@property (readonly, nonatomic) NSObject<SNMLModel> *model; // ivar: _model
@property (readonly, nonatomic) NSString *outputLabel; // ivar: _outputLabel
@property (readonly, nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic) unsigned int stepSizeFrames; // ivar: _stepSizeFrames
@property (readonly, nonatomic) unsigned int windowLengthFrames; // ivar: _windowLengthFrames


-(id)initWithMLModel:(id)arg0 detectorIdentifier:(id)arg1 outputLabel:(id)arg2 sampleRate:(CGFloat)arg3 windowLengthFrames:(unsigned int)arg4 stepSizeFrames:(unsigned int)arg5 featureExtractorConfiguration:(id)arg6 ;


@end


#endif