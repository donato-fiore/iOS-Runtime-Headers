// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MUISEARCHRESULTSSUGGESTERRICHLINKSCONFIGURATION_H
#define _MUISEARCHRESULTSSUGGESTERRICHLINKSCONFIGURATION_H

@class NSArray, NSString;
@protocol MUISearchResultsSuggesterConfiguration, EFLoggable;

#import <Foundation/Foundation.h>


@interface _MUISearchResultsSuggesterRichLinksConfiguration : NSObject <MUISearchResultsSuggesterConfiguration, EFLoggable>



@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fetchAttributes;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) NSUInteger maxItemCount;
@property (readonly) Class superclass;


+(id)log;
-(id)processSuggestionsResults:(id)arg0 phraseManager:(id)arg1 messageList:(id)arg2 ;
-(id)suggestionFilterQueryWithPhraseManager:(id)arg0 senderFilterQuery:(id)arg1 ;


@end


#endif