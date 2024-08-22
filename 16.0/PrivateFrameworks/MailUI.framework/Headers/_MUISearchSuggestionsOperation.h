// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MUISEARCHSUGGESTIONSOPERATION_H
#define _MUISEARCHSUGGESTIONSOPERATION_H

@class NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "MUISearchSuggestionsGenerator.h"
#import "MUISearchRequestID.h"
#import "MUISearchSuggestionPhraseManager.h"

@interface _MUISearchSuggestionsOperation : NSObject {
    uint8_t _isCancelled;
    MUISearchSuggestionsGenerator *_generator;
    MUISearchRequestID *_requestID;
    MUISearchSuggestionPhraseManager *_phraseManager;
    NSArray *_suggesters;
    NSMutableArray *_runningSuggesters;
    NSObject<OS_dispatch_queue> *_queue;
}






@end


#endif