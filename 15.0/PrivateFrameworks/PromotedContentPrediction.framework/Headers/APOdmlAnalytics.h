// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLANALYTICS_H
#define APODMLANALYTICS_H


#import <Foundation/Foundation.h>


@interface APOdmlAnalytics : NSObject



+(id)versionAndIdentifiers;
+(id)versionAndIdentifiersFromRecordInfo:(id)arg0 isCounterfactual:(BOOL)arg1 ;
+(void)_analyticsSendEvent:(id)arg0 eventPayload:(id)arg1 ;
+(void)sendEventDesRecordLogging:(NSInteger)arg0 error:(id)arg1 ;
+(void)sendEventFeatureCalculation:(NSInteger)arg0 error:(id)arg1 ;
+(void)sendEventFeatureStorage:(NSInteger)arg0 error:(id)arg1 ;
+(void)sendEventModelTraining:(NSInteger)arg0 recordInfo:(id)arg1 isCounterfactual:(BOOL)arg2 numOfRows:(NSUInteger)arg3 normDelta:(CGFloat)arg4 error:(id)arg5 ;
+(void)sendEventPrediction:(NSInteger)arg0 error:(id)arg1 ;
+(void)sendEventReranking:(NSInteger)arg0 startDate:(id)arg1 endDate:(id)arg2 error:(id)arg3 ;


@end


#endif