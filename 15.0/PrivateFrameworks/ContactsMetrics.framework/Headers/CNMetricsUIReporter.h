// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNMETRICSUIREPORTER_H
#define CNMETRICSUIREPORTER_H



#import "CNMetricsReporter.h"

@interface CNMetricsUIReporter : CNMetricsReporter



-(id)emptyDictionaryForAction:(id)arg0 andApplication:(id)arg1 ;
-(id)eventKeyPrefix;
-(void)logActionDictionary:(id)arg0 ;
-(void)logContactShownforApplication:(id)arg0 ;
-(void)logSearchActionWithDictionary:(id)arg0 ;
-(void)logSearchResultsFetchedforApplication:(id)arg0 fromSuggestions:(BOOL)arg1 ;
-(void)logSearchResultsSelectedforApplication:(id)arg0 fromSuggestions:(BOOL)arg1 ;
-(void)logSearchUsageforApplication:(id)arg0 ;


@end


#endif