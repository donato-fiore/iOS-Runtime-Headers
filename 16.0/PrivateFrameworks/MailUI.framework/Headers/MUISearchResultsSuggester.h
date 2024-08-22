// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHRESULTSSUGGESTER_H
#define MUISEARCHRESULTSSUGGESTER_H

@class NSString, EMMessageRepository, NSArray;
@protocol EFLoggable, MUISearchSuggester, MUISearchResultsSuggesterConfiguration;

#import <Foundation/Foundation.h>

#import "MUISearchSenderQueryManager.h"

@interface MUISearchResultsSuggester : NSObject <EFLoggable, MUISearchSuggester>

 {
    NSString *_bundleID;
    EMMessageRepository *_messageRepository;
    MUISearchSenderQueryManager *_senderQueryManager;
    id<MUISearchResultsSuggesterConfiguration> *_configuration;
}


@property (readonly, nonatomic) NSArray *categories;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *logIdentifier;
@property (readonly, nonatomic) BOOL shouldQueryForAsYouType;
@property (readonly) Class superclass;


+(id)dateAttributes;
+(id)dateForSuggestionResult:(id)arg0 ;
+(id)dateQueryString;
+(id)documentsSuggesterWithBundleID:(id)arg0 messageRepository:(id)arg1 senderQueryManager:(id)arg2 ;
+(id)linksSuggesterWithBundleID:(id)arg0 messageRepository:(id)arg1 senderQueryManager:(id)arg2 ;
+(id)log;
+(id)suggestionResultsSortedByDate:(id)arg0 ;
-(id)generateSuggestionsUsingPhraseManager:(id)arg0 handler:(id)arg1 ;
-(id)initWithBundleID:(id)arg0 messageRepository:(id)arg1 senderQueryManager:(id)arg2 configuration:(id)arg3 ;


@end


#endif