// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSHISTORYSERVICEURLCOMPLETION_H
#define WBSHISTORYSERVICEURLCOMPLETION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface WBSHistoryServiceURLCompletion : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    URLCompletionEntryMap _map;
    unordered_multimap<WTF::RetainPtr<NSString>, WTF::RetainPtr<NSString>, std::hash<RetainPtr<NSString>>, std::equal_to<RetainPtr<NSString>>, std::allocator<std::pair<const WTF::RetainPtr<NSString>, WTF::RetainPtr<NSString>>>> _redirectSources;
}




-(BOOL)queryVisitCounts:(id)arg0 outVisitCountScore:(*NSInteger)arg1 outDailyVisitCounts:(*id)arg2 outWeeklyVisitCounts:(*id)arg3 ;
-(CGFloat)lastVisitTimeForURLString:(id)arg0 ;
-(id)_endOfRedirectChain:(id)arg0 ;
-(id)_warmUpWithDatabase:(id)arg0 ;
-(id)init;
-(id)warmUpWithDatabase:(id)arg0 ;
-(void)computeFrequentlyVisitedSites:(NSUInteger)arg0 minimalVisitCountScore:(NSUInteger)arg1 disallowList:(id)arg2 allowList:(id)arg3 options:(NSUInteger)arg4 currentTime:(CGFloat)arg5 completionHandler:(id)arg6 ;
-(void)noteRedirectFromURLString:(id)arg0 toURLString:(id)arg1 ;
-(void)recordVisit:(id)arg0 sourceVisit:(id)arg1 title:(id)arg2 loadSuccessful:(BOOL)arg3 visitWasFromThisDevice:(BOOL)arg4 increaseVisitCount:(BOOL)arg5 score:(int)arg6 ;
-(void)removeURLStrings:(id)arg0 ;
-(void)searchForUserTypedString:(id)arg0 options:(NSUInteger)arg1 currentTime:(CGFloat)arg2 enumerationGroup:(id)arg3 enumerationBlock:(id)arg4 ;
-(void)updateItemWithLatestVisit:(id)arg0 database:(id)arg1 ;
-(void)updateURLString:(id)arg0 autocompleteTriggerData:(id)arg1 ;
-(void)updateVisit:(id)arg0 oldScore:(int)arg1 newScore:(int)arg2 completionHandler:(id)arg3 ;
-(void)updateVisit:(id)arg0 title:(id)arg1 ;


@end


#endif