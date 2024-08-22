// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SNSOUNDPRINTKEMBEDDINGMODELINPUT_H
#define SNSOUNDPRINTKEMBEDDINGMODELINPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNSoundPrintKEmbeddingModelInput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *audioSamples; // ivar: _audioSamples
@property (readonly, nonatomic) NSSet *featureNames;


-(id)featureValueForName:(id)arg0 ;
-(id)initWithAudioSamples:(id)arg0 ;


@end


#endif