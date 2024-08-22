// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MKAUTOCOMPLETEANALYTICSPROVIDER_H
#define MKAUTOCOMPLETEANALYTICSPROVIDER_H

@protocol MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MKAutocompleteAnalyticsState.h"

@interface MKAutocompleteAnalyticsProvider : NSObject <MKAutocompleteAnalyticsState, MKAutocompleteAnalyticsProvider>



@property (retain, nonatomic) MKAutocompleteAnalyticsState *currentState; // ivar: _currentState
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue


-(id)captureNewMetrics;
-(id)init;
-(void)updateStateWithQuery:(id)arg0 queryTokens:(id)arg1 visibleSuggestionEntries:(id)arg2 ;


@end


#endif