// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRSQUERYRANKINGCONFIGURATION_H
#define PRSQUERYRANKINGCONFIGURATION_H

@class NSArray, NSOrderedSet;

#import <Foundation/Foundation.h>


@interface PRSQueryRankingConfiguration : NSObject

@property (nonatomic) BOOL allowAnonymousDataCollection; // ivar: _allowAnonymousDataCollection
@property (nonatomic) NSUInteger dominantRankingQueryCount; // ivar: _dominantRankingQueryCount
@property (nonatomic) NSUInteger dominatedRankingQueryCount; // ivar: _dominatedRankingQueryCount
@property (nonatomic) unk fuzzyMatchCheck; // ivar: _fuzzyMatchCheck
@property (nonatomic) unk fuzzyMatchMask; // ivar: _fuzzyMatchMask
@property (nonatomic) NSUInteger highMatchBit; // ivar: _highMatchBit
@property (nonatomic) NSUInteger highRecencyBit; // ivar: _highRecencyBit
@property (nonatomic) NSUInteger lowMatchBit; // ivar: _lowMatchBit
@property (nonatomic) NSUInteger lowRecencyBit; // ivar: _lowRecencyBit
@property (nonatomic) CGFloat maxAge; // ivar: _maxAge
@property (nonatomic) CGFloat minCount; // ivar: _minCount
@property (nonatomic) CGFloat minL2Score; // ivar: _minL2Score
@property (nonatomic) NSUInteger rankingBitCount; // ivar: _rankingBitCount
@property (retain, nonatomic) NSArray *rankingQueries; // ivar: _rankingQueries
@property (retain, nonatomic) NSOrderedSet *requiredAttributes; // ivar: _requiredAttributes
@property (nonatomic) NSUInteger shortcutBit; // ivar: _shortcutBit
@property (nonatomic) NSUInteger strongRankingQueryCount; // ivar: _strongRankingQueryCount


+(void)updateMailVIP:(id)arg0 phoneFavorites:(id)arg1 meEmailAddresses:(id)arg2 ;


@end


#endif