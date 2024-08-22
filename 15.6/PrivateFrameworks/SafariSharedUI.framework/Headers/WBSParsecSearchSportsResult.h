// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSPARSECSEARCHSPORTSRESULT_H
#define WBSPARSECSEARCHSPORTSRESULT_H

@class NSArray, NSString;
@protocol WBSParsecSearchSportsResult;


#import "WBSParsecLegacySearchResult.h"
#import "WBSParsecSportsScoreSummary.h"
#import "WBSParsecSearchSportsAttributionExtraCompletionItem.h"

@interface WBSParsecSearchSportsResult : WBSParsecLegacySearchResult <WBSParsecSearchSportsResult>

 {
    WBSParsecSportsScoreSummary *_scoreSummary;
}


@property (readonly, nonatomic) WBSParsecSearchSportsAttributionExtraCompletionItem *extraCompletionItem; // ivar: _extraCompletionItem
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) NSArray *individualScores;
@property (readonly, copy, nonatomic) NSString *subtitle;


+(id)_specializedSchema;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif