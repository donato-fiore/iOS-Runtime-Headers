// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HISTORY_H
#define HISTORY_H

@class WBUHistory, NSMutableArray, NSCalendar, _WKVisitedLinkStore, NSString;
@protocol WKHistoryDelegatePrivate;



@interface History : WBUHistory <WKHistoryDelegatePrivate>

 {
    NSMutableArray *_deferredUpdates;
    NSCalendar *_calendar;
    *__CFDateFormatter _weekdayMonthDateFormatter;
    _WKVisitedLinkStore *_visitedLinkStore;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) _WKVisitedLinkStore *visitedLinkStore;


+(NSInteger)partOfDayFromHourOfDay:(NSInteger)arg0 ;
+(id)_localizedStringForTodayWithPartOfDay:(NSInteger)arg0 ;
+(id)_localizedStringForWeekday:(NSInteger)arg0 partOfDay:(NSInteger)arg1 ;
+(id)dayWithPeriodOfDayStringForDate:(id)arg0 ;
+(id)sharedHistory;
+(id)titleForHistoryItem:(id)arg0 ;
+(struct _NSRange )hourRangeFromPartOfDay:(NSInteger)arg0 ;
-(BOOL)historyStoreShouldCheckDatabaseIntegrity:(id)arg0 ;
-(Class)_historyItemClass;
-(id)_weekdayMonthDateStringForDate:(id)arg0 ;
-(id)init;
-(id)titleForDate:(id)arg0 ;
-(struct __CFDateFormatter *)newDateFormatterForLocale:(struct __CFLocale *)arg0 formatType:(id)arg1 ;
-(void)_addVisitedLinksForItemsIfNeeded:(id)arg0 ;
-(void)_removeAllVisitedLinks;
-(void)_updateForWKWebView:(id)arg0 browserController:(id)arg1 updates:(id)arg2 ;
-(void)_webView:(id)arg0 didNavigateWithNavigationData:(id)arg1 ;
-(void)_webView:(id)arg0 didPerformClientRedirectFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_webView:(id)arg0 didPerformServerRedirectFromURL:(id)arg1 toURL:(id)arg2 ;
-(void)_webView:(id)arg0 didUpdateHistoryTitle:(id)arg1 forURL:(id)arg2 ;
-(void)cancelDeferredUpdates;
-(void)commitDeferredUpdates;
-(void)dealloc;
-(void)localeChanged:(struct __CFLocale *)arg0 ;
-(void)removeItem:(id)arg0 ;


@end


#endif