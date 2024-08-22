// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVECARDSUGGESTIONCLIENT_H
#define ATXPROACTIVECARDSUGGESTIONCLIENT_H

@class NSString;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionClientModel.h"

@interface ATXProactiveCardSuggestionClient : NSObject {
    ATXProactiveSuggestionClientModel *_clientModel;
    NSString *_sourceId;
}




-(id)createSuggestionWithAppBundleIdentifier:(id)arg0 widgetBundleIdentifier:(id)arg1 widgetKind:(id)arg2 criterion:(id)arg3 applicableLayouts:(NSUInteger)arg4 suggestionIdentifier:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 intent:(id)arg8 metadata:(id)arg9 ;
-(id)initWithSourceId:(id)arg0 ;
-(void)clearSuggestions;
-(void)clearSuggestionsWithCompletionHandler:(id)arg0 ;
-(void)retrieveCurrentSuggestionsWithReply:(id)arg0 ;
-(void)updateSuggestions:(id)arg0 ;
-(void)updateSuggestions:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif