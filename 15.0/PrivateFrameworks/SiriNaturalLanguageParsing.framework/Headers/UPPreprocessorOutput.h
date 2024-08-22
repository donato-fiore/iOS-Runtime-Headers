// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UPPREPROCESSOROUTPUT_H
#define UPPREPROCESSOROUTPUT_H


#import <Foundation/Foundation.h>


@interface UPPreprocessorOutput : NSObject {
    UPGenericTensor _embeddingsTensor;
    UPGenericTensor _spanLabelsTensor;
    ? _outputTokens;
    ? _dataDetectorSpans;
}


@property (readonly) *void dataDetectorSpans;
@property (readonly) *void embeddingsTensor;
@property (readonly) *void outputTokens;
@property (readonly) *void spanLabelsTensor;


-(id)initWithEmbeddingsTensor:(struct UPGenericTensor )arg0 spanLabelsTensor:(struct UPGenericTensor )arg1 outputTokens:(struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> )arg2 dataDetectorSpans:(struct vector<uaap::UPDetectedSpan, std::allocator<uaap::UPDetectedSpan>> )arg3 ;


@end


#endif