// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SGMODELRULES_H
#define SGMODELRULES_H


#import <Foundation/Foundation.h>


@interface SGModelRules : NSObject



+(BOOL)shouldCollectTrainingDataForObjective:(NSUInteger)arg0 language:(id)arg1 ;
+(id)_modelsAvailabeForMode:(NSUInteger)arg0 objective:(NSUInteger)arg1 language:(id)arg2 ;
+(void)loadBinaryClassificationModelFromMobileAssetForObjective:(NSUInteger)arg0 language:(id)arg1 withBlock:(id)arg2 ;


@end


#endif