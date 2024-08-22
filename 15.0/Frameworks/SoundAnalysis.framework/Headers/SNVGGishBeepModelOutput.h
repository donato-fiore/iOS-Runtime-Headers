// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNVGGISHBEEPMODELOUTPUT_H
#define SNVGGISHBEEPMODELOUTPUT_H

@class MLMultiArray, NSSet;
@protocol MLFeatureProvider;

#import <Foundation/Foundation.h>


@interface SNVGGishBeepModelOutput : NSObject <MLFeatureProvider>



@property (retain, nonatomic) MLMultiArray *Confidence; // ivar: _Confidence
@property (retain, nonatomic) MLMultiArray *Detected; // ivar: _Detected
@property (retain, nonatomic) MLMultiArray *detectedHistoryOut; // ivar: _detectedHistoryOut
@property (readonly, nonatomic) NSSet *featureNames;
@property (retain, nonatomic) MLMultiArray *input_1; // ivar: _input_1


-(id)featureValueForName:(id)arg0 ;
-(id)initWithInput_1:(id)arg0 Confidence:(id)arg1 Detected:(id)arg2 detectedHistoryOut:(id)arg3 ;


@end


#endif