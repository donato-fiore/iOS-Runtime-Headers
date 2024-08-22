// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MUISEARCHRANKEDSUGGESTERQUERY_H
#define MUISEARCHRANKEDSUGGESTERQUERY_H

@class NSString, EMSearchableIndexTopHitsQuery;
@protocol MUISearchSuggesterQuery;

#import <Foundation/Foundation.h>

#import "MUISearchSuggestionPhraseManager.h"

@interface MUISearchRankedSuggesterQuery : NSObject <MUISearchSuggesterQuery>

 {
    MUISearchSuggestionPhraseManager *_phraseManager;
    id *_handler;
    NSString *_bundleID;
    EMSearchableIndexTopHitsQuery *_topHitsQuery;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)cancel;


@end


#endif