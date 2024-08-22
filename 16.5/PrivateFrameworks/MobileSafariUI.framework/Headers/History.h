// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HISTORY_H
#define HISTORY_H

@class WBUHistory, NSMutableArray, _WKVisitedLinkStore, NSString;
@protocol WKHistoryDelegatePrivate;



@interface History : WBUHistory <WKHistoryDelegatePrivate>

 {
    NSMutableArray *_deferredUpdates;
    _WKVisitedLinkStore *_visitedLinkStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;


+(BOOL)historyItemTitle:(id)arg0 matchesFilterString:(id)arg1 ;
+(BOOL)historyItemURL:(id)arg0 matchesFilter:(id)arg1 ;
+(BOOL)historyItemURL:(id)arg0 matchesFilterStrings:(id)arg1 ;
+(NSInteger)partOfDayFromHourOfDay:(NSInteger)arg0 ;
+(id)_localizedStringForTodayWithPartOfDay:(NSInteger)arg0 ;
+(id)_localizedStringForWeekday:(NSInteger)arg0 partOfDay:(NSInteger)arg1 ;
+(id)dayWithPeriodOfDayStringForDate:(id)arg0 ;
+(id)lowercaseStringTrimmedForHistorySearch:(id)arg0 ;
+(id)sessionIdentifierFromDate:(id)arg0 ;
+(id)sessionIdentifierFromSessionStartDate:(id)arg0 ;
+(id)sessionStartDateFromDate:(id)arg0 ;
+(id)sharedHistory;
+(id)titleForHistoryItem:(id)arg0 ;
+(struct _NSRange )hourRangeFromPartOfDay:(NSInteger)arg0 ;
+(void)initialize;
+(void)localeChanged:(struct __CFLocale *)arg0 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg0 ;
-(Class)_historyItemClass;
-(id)_weekdayMonthDateStringForDate:(id)arg0 ;
-(id)titleForDate:(id)arg0 ;
-(void)_addVisitedLinkForItemIfNeeded:(id)arg0 withVisitOrigin:(NSInteger)arg1 ;
-(void)_removeAllVisitedLinks;
-(void)_updateForWKWebView:(id)arg0 browserController:(id)arg1 updates:(id)arg2 ;
-(void)_webView:(id)arg0 didNavigateWithNavigationData:(id)arg1 ;
-(void)_webView:(id)arg0 didPerformClientRedirectFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_webView:(id)arg0 didPerformServerRedirectFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_webView:(id)arg0 didUpdateHistoryTitle:(id)arg1 forURL:(id)arg2 ;
-(void)cancelDeferredUpdates;
-(void)commitDeferredUpdates;
-(void)dealloc;
-(void)removeItem:(id)arg0 ;
-(void)removeItems:(id)arg0 completionHanlder:(id)arg1 ;


@end


#endif