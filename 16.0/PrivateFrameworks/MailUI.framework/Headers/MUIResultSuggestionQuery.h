// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUIRESULTSUGGESTIONQUERY_H
#define MUIRESULTSUGGESTIONQUERY_H

@class NSString, EMMessageRepository, EMSearchableIndexUserQuery;
@protocol MUISearchSuggesterQuery, MUISearchResultsSuggesterConfiguration;

#import <Foundation/Foundation.h>

#import "MUISearchSuggestionPhraseManager.h"
#import "MUISearchSenderQueryManager.h"

@interface MUIResultSuggestionQuery : NSObject <MUISearchSuggesterQuery>

 {
    MUISearchSuggestionPhraseManager *_phraseManager;
    id *_handler;
    NSString *_bundleID;
    EMMessageRepository *_messageRepository;
    MUISearchSenderQueryManager *_senderQueryManager;
    id<MUISearchResultsSuggesterConfiguration> *_configuration;
    EMSearchableIndexUserQuery *_underlyingQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancel;


@end


#endif