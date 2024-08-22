// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC7SWIFTNN18MULTIHEADATTENTION_H
#define _TTC7SWIFTNN18MULTIHEADATTENTION_H

@class SwiftObject;



@interface _TtC7SwiftNN18MultiheadAttention : SwiftObject {
    ? _queryWeight;
    ? _valueWeight;
    ? _keyWeight;
    ? _outputWeight;
    ? _queryBias;
    ? _valueBias;
    ? _keyBias;
    ? _outputBias;
    ? _attentionValueBias;
    ? _attentionKeyBias;
    ? _isEveryParameterInitialized;
    ? learningPhase;
    ? headCount;
    ? dropoutProbability;
    ? addsZeroAttention;
    ? backendModuleState;
}






@end


#endif