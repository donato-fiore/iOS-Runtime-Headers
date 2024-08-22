// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FCARTICLESEARCHSTREAM_H
#define FCARTICLESEARCHSTREAM_H

@class NSMutableOrderedSet, NSString, SFMoreResults, SFRankingFeedback;
@protocol FCStreaming;

#import <Foundation/Foundation.h>

#import "FCCloudContext.h"

@interface FCArticleSearchStream : NSObject <FCStreaming>



@property (retain, nonatomic) NSMutableOrderedSet *articleSearchResults; // ivar: _articleSearchResults
@property (retain, nonatomic) FCCloudContext *cloudContext; // ivar: _cloudContext
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fetching; // ivar: _fetching
@property (nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (nonatomic) NSString *keyboardInputMode; // ivar: _keyboardInputMode
@property (retain, nonatomic) SFMoreResults *moreResults; // ivar: _moreResults
@property (nonatomic) NSUInteger parsecQueryID; // ivar: _parsecQueryID
@property (copy, nonatomic) NSString *query; // ivar: _query
@property (retain, nonatomic) SFRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (readonly) Class superclass;


-(id)fetchMoreResultsWithLimit:(NSUInteger)arg0 qualityOfService:(NSInteger)arg1 callbackQueue:(id)arg2 completionHandler:(id)arg3 ;
-(id)initWithParsecQueryID:(NSUInteger)arg0 ;


@end


#endif