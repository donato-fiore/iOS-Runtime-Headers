// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUNIFIEDINFERREDACTIVITYBIOMEINSPECTOR_H
#define ATXUNIFIEDINFERREDACTIVITYBIOMEINSPECTOR_H


#import <Foundation/Foundation.h>


@interface ATXUnifiedInferredActivityBiomeInspector : NSObject



+(id)inferredActivityStreamFromName:(id)arg0 ;
+(void)retrieveInferredActivitySessionsFromPublisherName:(id)arg0 startTime:(CGFloat)arg1 reply:(id)arg2 ;
+(void)retrieveInferredActivityTransitionsFromPublisherName:(id)arg0 startTime:(CGFloat)arg1 reply:(id)arg2 ;


@end


#endif