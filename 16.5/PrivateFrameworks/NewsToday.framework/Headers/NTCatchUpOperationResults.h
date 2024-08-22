// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTCATCHUPOPERATIONRESULTS_H
#define NTCATCHUPOPERATIONRESULTS_H

@class NSArray, SFRankingFeedback;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NTCatchUpOperationResults : NSObject <NSCopying>



@property (readonly, copy, nonatomic) NSArray *items; // ivar: _items
@property (readonly, copy, nonatomic) SFRankingFeedback *rankingFeedback; // ivar: _rankingFeedback
@property (readonly, nonatomic) NSObject *supplementalInterestToken; // ivar: _supplementalInterestToken


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithItems:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithFeedItems:(id)arg0 supplementalInterestToken:(id)arg1 ;
-(id)initWithHeadlines:(id)arg0 rankingFeedback:(id)arg1 actionURLsByArticleID:(id)arg2 ;
-(id)initWithItems:(id)arg0 rankingFeedback:(id)arg1 supplementalInterestToken:(id)arg2 ;
-(id)resultsByCombiningWithResults:(id)arg0 ;


@end


#endif