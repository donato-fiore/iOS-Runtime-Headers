// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSAPPSUGGESTIONSMETRICSINFERENCEEVENTINTERNAL_H
#define _PSAPPSUGGESTIONSMETRICSINFERENCEEVENTINTERNAL_H

@class TtC15ReportingPlugin25PeopleSuggestionInference, NSSet;



@interface _PSAppSuggestionsMetricsInferenceEventInternal : TtC15ReportingPlugin25PeopleSuggestionInference {
    ? suggestions;
}


@property (nonatomic, readonly) NSSet *suggestions;


-(id)initWithId:(id)arg0 sourceBundleId:(id)arg1 suggestions:(id)arg2 ;


@end


#endif