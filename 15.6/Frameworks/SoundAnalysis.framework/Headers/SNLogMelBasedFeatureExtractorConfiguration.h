// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SNLOGMELBASEDFEATUREEXTRACTORCONFIGURATION_H
#define SNLOGMELBASEDFEATUREEXTRACTORCONFIGURATION_H

@class NSString;
@protocol SNProcessorCreating, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNLogMelBasedFeatureExtractorConfiguration : NSObject <SNProcessorCreating>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int logMelStepSize; // ivar: _logMelStepSize
@property (readonly) NSObject<SNMLModel> *model; // ivar: _model
@property (readonly) unsigned int outputFeatureSize; // ivar: _outputFeatureSize
@property (readonly) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly) unsigned int stepSizeFrames; // ivar: _stepSizeFrames
@property (readonly) Class superclass;
@property (readonly) unsigned int windowLengthFrames; // ivar: _windowLengthFrames


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToLogMelBasedFeatureExtractorConfiguration:(id)arg0 ;
-(id)createProcessorWithError:(*id)arg0 ;
-(id)initWithModel:(id)arg0 approximateOverlapFactor:(CGFloat)arg1 ;


@end


#endif