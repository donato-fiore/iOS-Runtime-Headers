// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGSHARINGMANAGER_H
#define PGSHARINGMANAGER_H


#import <Foundation/Foundation.h>

#import "PGManagerWorkingContext.h"

@interface PGSharingManager : NSObject {
    PGManagerWorkingContext *_workingContext;
}




+(id)_defaultOptions;
-(BOOL)_canIncludeUnverified;
-(BOOL)canProvideSuggestionsWithOptions:(id)arg0 forGraph:(id)arg1 ;
-(id)_filteredSuggestionResults:(id)arg0 withOptions:(id)arg1 graph:(id)arg2 ;
-(id)_learningStreamUtils;
-(id)_sortedSuggestionResults:(id)arg0 withOptions:(id)arg1 ;
-(id)contextualStream;
-(id)coreDuetStream;
-(id)initWithWorkingContext:(id)arg0 ;
-(id)learningStream;
-(id)presenceStream;
-(id)suggestionResultsForAssetLocalIdentifiers:(id)arg0 momentLocalIdentifiers:(id)arg1 options:(id)arg2 ;
-(id)suggestionSourcesForSharingStream:(NSUInteger)arg0 ;
-(void)_mergeSuggestionResultByPersonIdentifer:(id)arg0 withSourceSuggestionResults:(id)arg1 ;


@end


#endif