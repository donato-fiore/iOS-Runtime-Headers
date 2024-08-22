// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef UPPREPROCESSOROUTPUT_H
#define UPPREPROCESSOROUTPUT_H


#import <Foundation/Foundation.h>


@interface UPPreprocessorOutput : NSObject {
    UPGenericTensor _embeddingsTensor;
    UPGenericTensor _spanLabelsTensor;
    ? _outputTokens;
}


@property (readonly) *void embeddingsTensor;
@property (readonly) *void outputTokens;
@property (readonly) *void spanLabelsTensor;


-(id)initWithEmbeddingsTensor:(struct UPGenericTensor )arg0 spanLabelsTensor:(struct UPGenericTensor )arg1 outputTokens:(struct vector<nl_featurization::Token, std::allocator<nl_featurization::Token>> )arg2 ;


@end


#endif