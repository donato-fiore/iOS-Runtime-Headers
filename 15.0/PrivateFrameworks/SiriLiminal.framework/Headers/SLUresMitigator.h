// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLURESMITIGATOR_H
#define SLURESMITIGATOR_H

@class MLModel, MLPredictionOptions, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface SLUresMitigator : NSObject {
    MLModel *_uresModel;
    MLPredictionOptions *_options;
    NSDictionary *_inputOpsMap;
    NSDictionary *_outputMap;
    NSString *_version;
}




-(id)_convertMultiArrayToNSArray:(id)arg0 withShape:(id)arg1 ;
-(id)_convertNSArrayToMultiArray:(id)arg0 withShape:(id)arg1 ;
-(id)_processInputFeats:(id)arg0 ;
-(id)initWithConfig:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;
-(void)processInputFeats:(id)arg0 completion:(id)arg1 ;


@end


#endif