// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PREDICTORUTILS_H
#define PREDICTORUTILS_H


#import <Foundation/Foundation.h>


@interface PredictorUtils : NSObject



+(NSInteger)handleInitException:(struct exception_ptr )arg0 ;
+(NSInteger)handlePredictException:(struct exception_ptr )arg0 ;
+(id)getInitStatusWithPredictorName:(id)arg0 code:(NSInteger)arg1 ;
+(id)getPredictStatusWithPredictorName:(id)arg0 code:(NSInteger)arg1 ;
+(void)reportInitStatusWithPredictorName:(id)arg0 code:(NSInteger)arg1 locale:(id)arg2 ;
+(void)reportPredictStatusWithPredictorName:(id)arg0 code:(NSInteger)arg1 locale:(id)arg2 ;


@end


#endif