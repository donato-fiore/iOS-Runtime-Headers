// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLURESMITIGATOR_H
#define SLURESMITIGATOR_H

@class MLModel, MLPredictionOptions, NSDictionary, NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SLUresMitigator : NSObject {
    MLModel *_uresModel;
    MLPredictionOptions *_options;
    NSDictionary *_inputOpsMap;
    NSDictionary *_outputMap;
    NSMutableDictionary *_thresholdMap;
    NSString *_version;
}




+(id)getTranscriptionForSpeechPackage:(id)arg0 ;
-(id)_convertMultiArrayToNSArray:(id)arg0 withShape:(id)arg1 ;
-(id)_convertNSArrayToMultiArray:(id)arg0 withShape:(id)arg1 ;
-(id)_processInputFeats:(id)arg0 ;
-(id)initWithConfig:(id)arg0 error:(*id)arg1 ;
-(void)_createInputOriginThresholdMap:(id)arg0 ;
-(void)dealloc;
-(void)processInputFeats:(id)arg0 completion:(id)arg1 ;


@end


#endif