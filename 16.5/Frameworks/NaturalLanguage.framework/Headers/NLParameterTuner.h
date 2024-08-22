// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NLPARAMETERTUNER_H
#define NLPARAMETERTUNER_H

@class NSDictionary, NSArray;
@protocol NLParameterTuningDelegate;

#import <Foundation/Foundation.h>


@interface NLParameterTuner : NSObject

@property (readonly, weak) NSObject<NLParameterTuningDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSDictionary *options; // ivar: _options
@property (readonly, copy, nonatomic) NSArray *parameterNames; // ivar: _parameterNames
@property (readonly, copy, nonatomic) NSArray *parameters; // ivar: _parameters


+(id)parameterTunerWithParameters:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
+(id)tunedParameterBundleWithParameters:(id)arg0 options:(id)arg1 delegate:(id)arg2 error:(*id)arg3 ;
-(id)_hyperTuneParameterArray;
-(id)initWithParameters:(id)arg0 options:(id)arg1 delegate:(id)arg2 ;
-(id)tunedParameterBundleWithError:(*id)arg0 ;


@end


#endif