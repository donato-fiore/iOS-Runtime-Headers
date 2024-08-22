// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _PSPEOPLESUGGESTIONSMETRICSINFERENCEEVENTINTERNAL_H
#define _PSPEOPLESUGGESTIONSMETRICSINFERENCEEVENTINTERNAL_H

@class TtC15ReportingPlugin25PeopleSuggestionInference, NSSet;



@interface _PSPeopleSuggestionsMetricsInferenceEventInternal : TtC15ReportingPlugin25PeopleSuggestionInference {
    ? timedOutModels;
    ? suggestions;
}


@property (nonatomic, readonly) NSSet *suggestions;
@property (nonatomic, readonly) NSSet *timedOutModels;


-(id)initWithId:(id)arg0 sourceBundleId:(id)arg1 timedOutModels:(id)arg2 suggestions:(id)arg3 ;


@end


#endif