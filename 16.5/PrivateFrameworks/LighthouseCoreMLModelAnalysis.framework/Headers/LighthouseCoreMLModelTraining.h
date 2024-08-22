// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LIGHTHOUSECOREMLMODELTRAINING_H
#define LIGHTHOUSECOREMLMODELTRAINING_H


#import <Foundation/Foundation.h>


@interface LighthouseCoreMLModelTraining : NSObject



+(BOOL)trainModel:(id)arg0 destModelUrl:(id)arg1 modelConfiguration:(id)arg2 dataBatch:(id)arg3 ;
+(id)evaluateModel:(id)arg0 modelConfiguration:(id)arg1 dataBatch:(id)arg2 ;
+(void)initialize;


@end


#endif