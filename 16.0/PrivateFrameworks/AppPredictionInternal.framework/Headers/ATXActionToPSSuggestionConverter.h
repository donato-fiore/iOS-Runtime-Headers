// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXACTIONTOPSSUGGESTIONCONVERTER_H
#define ATXACTIONTOPSSUGGESTIONCONVERTER_H


#import <Foundation/Foundation.h>


@interface ATXActionToPSSuggestionConverter : NSObject



-(id)convertSuggestions:(id)arg0 ;
-(id)proactiveSuggestionForPeopleSuggestion:(id)arg0 originalSuggestion:(id)arg1 ;
-(id)psRecipientFromINPerson:(id)arg0 ;
-(id)psSuggesetionFromINStartCallIntent:(id)arg0 ;
-(id)psSuggestionFromINSendMessageIntent:(id)arg0 ;


@end


#endif