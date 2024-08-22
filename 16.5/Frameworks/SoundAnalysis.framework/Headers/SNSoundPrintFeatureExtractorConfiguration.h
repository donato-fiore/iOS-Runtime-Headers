// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDPRINTFEATUREEXTRACTORCONFIGURATION_H
#define SNSOUNDPRINTFEATUREEXTRACTORCONFIGURATION_H

@class NSString;
@protocol SNFeatureExtractorConfiguration, SNMLModel;

#import <Foundation/Foundation.h>


@interface SNSoundPrintFeatureExtractorConfiguration : NSObject <SNFeatureExtractorConfiguration>

 {
    id<SNMLModel> *_model;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int outputFeatureSize;
@property (readonly) CGFloat sampleRate;
@property (readonly) unsigned int stepSizeFrames; // ivar: _stepSizeFrames
@property (readonly) Class superclass;
@property (readonly) unsigned int windowLengthFrames; // ivar: _windowLengthFrames


-(id)createProcessorWithError:(*id)arg0 ;


@end


#endif