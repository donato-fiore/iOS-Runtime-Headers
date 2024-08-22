// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTSEQUENCERECOGNIZERMODELCOREMLOUTPUT_H
#define CRTEXTSEQUENCERECOGNIZERMODELCOREMLOUTPUT_H

@class NSString, NSSet, MLMultiArray, NSArray;
@protocol MLFeatureProvider, CRTextRecognizerModelOutput;

#import <Foundation/Foundation.h>


@interface CRTextSequenceRecognizerModelCoreMLOutput : NSObject <MLFeatureProvider, CRTextRecognizerModelOutput>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSSet *featureNames;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MLMultiArray *output_label_prob_map; // ivar: _output_label_prob_map
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo; // ivar: _textFeatureInfo


-(id)featureValueForName:(id)arg0 ;
-(id)initWithOutput_label_prob_map:(id)arg0 ;


@end


#endif