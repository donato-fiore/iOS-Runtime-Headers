// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDPRINTKEMBEDDINGMODELOUTPUT_H
#define SNSOUNDPRINTKEMBEDDINGMODELOUTPUT_H

@class NSSet, MLMultiArray;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrintKEmbeddingModelOutput : NSObject <MLFeatureProvider>



@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *fixedLengthEmbedding; // ivar: _fixedLengthEmbedding
@property (retain, nonatomic) MLMultiArray *framewiseEmbedding; // ivar: _framewiseEmbedding


-(id)featureValueForName:(id)arg0 ;
-(id)initWithFixedLengthEmbedding:(id)arg0 framewiseEmbedding:(id)arg1 ;


@end


#endif