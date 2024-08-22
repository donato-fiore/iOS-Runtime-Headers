// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGWORDBOUNDARYQUICKTYPEINFERENCE_H
#define SGWORDBOUNDARYQUICKTYPEINFERENCE_H


#import <Foundation/Foundation.h>


@interface SGWordBoundaryQuickTypeInference : NSObject



+(BOOL)_probablePriorPredictionInContext:(id)arg0 predictedLabel:(NSInteger)arg1 ;
+(id)quickTypeTriggerForContext:(id)arg0 localeIdentifier:(id)arg1 modelConfigPath:(id)arg2 espressoBinFilePath:(id)arg3 ;
+(id)quickTypeTriggerForContext:(id)arg0 localeIdentifier:(id)arg1 modelConfigPath:(id)arg2 espressoBinFilePath:(id)arg3 useContactNames:(BOOL)arg4 ;


@end


#endif