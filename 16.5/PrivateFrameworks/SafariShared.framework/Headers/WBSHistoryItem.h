// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WBSHISTORYITEM_H
#define WBSHISTORYITEM_H

@class NSData, NSDate, NSString, NSURL, NSArray, NSSet;

#import <Foundation/Foundation.h>

#import "WBSHistoryVisit.h"
#import "WBSHistoryItem.h"

@interface WBSHistoryItem : NSObject {
    WBSHistoryVisit *_lastVisit;
    int _visitCount;
    unique_ptr<WBSHistoryItemVisitCountScoresStorage, std::default_delete<WBSHistoryItemVisitCountScoresStorage>> _visitCountScores;
}


@property (readonly, nonatomic) NSUInteger dailyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *dailyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) *int dailyVisitCountScoresPtrOnSynchronizationQueue;
@property (nonatomic) NSInteger databaseID; // ivar: _databaseID
@property (readonly, nonatomic) WBSHistoryItem *endOfLastVisitRedirectChain;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisit;
@property (readonly, nonatomic) WBSHistoryVisit *lastVisitOnSynchronizationQueue;
@property (readonly, nonatomic) WBSHistoryItem *lastVisitRedirectDestinationItem;
@property (nonatomic) BOOL lastVisitWasFailure;
@property (readonly, nonatomic) BOOL lastVisitWasHTTPNonGet;
@property (readonly, nonatomic) NSDate *lastVisitedDate;
@property (readonly, nonatomic) CGFloat lastVisitedTimeInterval;
@property (readonly, nonatomic) CGFloat lastVisitedTimeIntervalOnSynchronizationQueue;
@property (readonly, nonatomic) BOOL shouldRecomputeDerivedVisitCountScores; // ivar: _shouldRecomputeDerivedVisitCountScores
@property (nonatomic) NSInteger statusCode; // ivar: _statusCode
@property (readonly, nonatomic) NSString *stringForUserTypedDomainExpansion;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (readonly, nonatomic) NSString *urlString; // ivar: _urlString
@property (readonly, copy, nonatomic) NSString *userVisibleHostOrFallbackURLString;
@property (readonly, nonatomic) NSString *userVisibleURLString;
@property (readonly, nonatomic) int visitCount;
@property (readonly, nonatomic) int visitCountScore; // ivar: _visitCountScore
@property (readonly, nonatomic) NSArray *visits; // ivar: _visits
@property (readonly, nonatomic) NSSet *visitsPendingWriteToDataStoreOnSynchronizationQueue;
@property (readonly, nonatomic) NSUInteger weeklyVisitCountScoresCountOnSynchronizationQueue;
@property (readonly, nonatomic) NSData *weeklyVisitCountScoresDataOnSynchronizationQueue;
@property (readonly, nonatomic) *int weeklyVisitCountScoresPtrOnSynchronizationQueue;


+(CGFloat)timeIntervalForDailyAndWeeklyVisitCountScores;
+(id)synchronizationQueue;
+(void)initialize;
-(BOOL)_visitsPendingWriteSetContains:(id)arg0 ;
-(id)_visitsPendingWriteSetCreatingIfNeeded:(BOOL)arg0 ;
-(id)initWithHistoryStreamedItem:(struct _HistoryStreamedItem *)arg0 ;
-(id)initWithSQLiteRow:(id)arg0 ;
-(id)initWithURLString:(id)arg0 ;
-(void)_accessVisitCountScoresStorage:(id)arg0 ;
-(void)_addExistingVisit:(id)arg0 ;
-(void)_addVisit:(id)arg0 ;
-(void)_addVisitToPendingWriteSet:(id)arg0 ;
-(void)_wasVisitedOnSynchronizationQueue:(id)arg0 ;
-(void)addExistingVisit:(id)arg0 ;
-(void)clearVisitsPendingWriteToDataStoreFromSynchronizationQueue;
-(void)dealloc;
-(void)mergeDataFromItem:(id)arg0 ;
-(void)recomputeDerivedVisitCountScoresWithVisits:(id)arg0 ;
-(void)removeVisits:(id)arg0 candidateLastVisit:(id)arg1 ;
-(void)removeVisitsOnSynchronizationQueue:(id)arg0 candidateLastVisit:(id)arg1 ;
-(void)scoreOfVisit:(id)arg0 wasUpdatedFrom:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)updateLastVisitIfNil:(id)arg0 ;
-(void)updateWithServiceItem:(id)arg0 ;
-(void)updateWithStreamedItem:(struct _HistoryStreamedItem *)arg0 ;
-(void)visitWasModified:(id)arg0 ;
-(void)wasRedirectedFrom:(id)arg0 to:(id)arg1 ;
-(void)wasVisited:(id)arg0 ;


@end


#endif