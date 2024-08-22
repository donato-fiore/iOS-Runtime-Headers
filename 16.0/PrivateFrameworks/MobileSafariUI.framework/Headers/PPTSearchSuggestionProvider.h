// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPTSEARCHSUGGESTIONPROVIDER_H
#define PPTSEARCHSUGGESTIONPROVIDER_H

@class NSTimer, NSString;


#import "SearchSuggestionProvider.h"

@interface PPTSearchSuggestionProvider : SearchSuggestionProvider {
    NSTimer *networkDelaySimulatorTimer;
    NSString *querySimulated;
}




-(id)_generateResultsForQuery:(id)arg0 ;
-(void)setQueryToComplete:(id)arg0 ;


@end


#endif