// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKMETRICSCOMPUTER_H
#define ATXUIFEEDBACKMETRICSCOMPUTER_H


#import <Foundation/Foundation.h>

#import "ATXBiomeProactiveSuggestionUIFeedbackResultStream.h"

@interface ATXUIFeedbackMetricsComputer : NSObject {
    ATXBiomeProactiveSuggestionUIFeedbackResultStream *_stream;
}




-(id)_computeResultForClientModel:(id)arg0 query:(id)arg1 publisher:(id)arg2 resultSpecification:(id)arg3 ;
-(id)_computeResultForConsumerSubType:(unsigned char)arg0 query:(id)arg1 publisher:(id)arg2 resultSpecification:(id)arg3 ;
-(id)computeResultForQuery:(id)arg0 resultSpecification:(id)arg1 ;
-(id)init;
-(id)initWithUIFeedbackResultStream:(id)arg0 ;
-(void)_updateNonTrendPlotSectionsInResult:(id)arg0 withFeedbackResult:(id)arg1 ;
-(void)_updateResultSection:(id)arg0 withSuggestions:(id)arg1 clientModelId:(id)arg2 consumerSubType:(unsigned char)arg3 ;


@end


#endif