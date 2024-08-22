// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRTEXTRECOGNIZERMODELESPRESSOOUTPUT_H
#define CRTEXTRECOGNIZERMODELESPRESSOOUTPUT_H

@class NSString, NSArray;
@protocol CRTextRecognizerModelOutput;

#import <Foundation/Foundation.h>


@interface CRTextRecognizerModelEspressoOutput : NSObject <CRTextRecognizerModelOutput>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) ? output_label_prob_map; // ivar: _output_label_prob_map
@property (readonly) Class superclass;
@property (retain) NSArray *textFeatureInfo; // ivar: _textFeatureInfo


-(id)initWithOutputLabelProbs:(struct ? )arg0 featureInfo:(id)arg1 ;
-(void)dealloc;


@end


#endif