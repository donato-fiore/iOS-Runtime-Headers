// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PREDICTORUTILS_H
#define PREDICTORUTILS_H


#import <Foundation/Foundation.h>


@interface PredictorUtils : NSObject



+(NSInteger)handleInitException:(struct exception_ptr )arg0 ;
+(NSInteger)handlePredictException:(struct exception_ptr )arg0 ;
+(id)getInitStatusWithPredictorName:(id)arg0 domain:(id)arg1 code:(NSInteger)arg2 ;
+(id)getPredictStatusWithPredictorName:(id)arg0 domain:(id)arg1 code:(NSInteger)arg2 ;
+(void)reportInitStatusWithPredictorName:(id)arg0 domain:(id)arg1 code:(NSInteger)arg2 locale:(id)arg3 ;
+(void)reportPredictStatusWithPredictorName:(id)arg0 domain:(id)arg1 code:(NSInteger)arg2 locale:(id)arg3 ;


@end


#endif