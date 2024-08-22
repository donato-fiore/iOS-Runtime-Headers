// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSFREQUENTLYVISITEDSITESCONTROLLER_H
#define WBSFREQUENTLYVISITEDSITESCONTROLLER_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WBSFrequentlyVisitedSitesBannedURLStore.h"
#import "WBSHistory.h"

@interface WBSFrequentlyVisitedSitesController : NSObject {
    WBSFrequentlyVisitedSitesBannedURLStore *_bannedURLStore;
    CGFloat _timeOfLastFrequentlyVisitedSitesComputation;
    WBSHistory *_history;
}


@property (readonly, nonatomic) NSArray *frequentlyVisitedSites;


+(float)scoreForHistoryItem:(id)arg0 atTime:(CGFloat)arg1 ;
+(float)scoreForHistoryItem:(id)arg0 atTime:(CGFloat)arg1 withMinimumVisitCount:(NSUInteger)arg2 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg0 historyItemForURLScoring:(id)arg1 atTime:(CGFloat)arg2 ;
+(float)scoreWithHistoryItemForVisitScoring:(id)arg0 historyItemForURLScoring:(id)arg1 atTime:(CGFloat)arg2 withMinimumVisitCount:(NSUInteger)arg3 ;
-(BOOL)_saveFrequentlyVisitedSites:(id)arg0 ;
-(BOOL)recomputeFrequentlyVisitedSitesIfNecessary;
-(float)_scoreForHistoryItem:(id)arg0 ;
-(id)_canonicalizedFavoritesURLStringSet;
-(id)_computeFrequentlyVisitedSiteCandidates;
-(id)initWithHistory:(id)arg0 bannedURLStore:(id)arg1 ;
-(void)_postFrequentlyVisitedSitesDidChangeNotification;
-(void)_recomputeFrequentlyVisitedSitesNow;
-(void)_updateFrequentlyVisitedSitesWithCandidates:(id)arg0 ;
-(void)clearFrequentlyVisitedSites;


@end


#endif