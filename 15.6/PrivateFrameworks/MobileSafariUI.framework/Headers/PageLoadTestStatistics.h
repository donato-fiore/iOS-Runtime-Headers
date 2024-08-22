// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PAGELOADTESTSTATISTICS_H
#define PAGELOADTESTSTATISTICS_H

@class NSTimer, NSDate, NSError, WKNavigation;

#import <Foundation/Foundation.h>


@interface PageLoadTestStatistics : NSObject {
    NSInteger _framesToLoad;
    NSInteger _onloadEventsHandled;
    BOOL _pendingResourceLoad;
    NSTimer *_waitForNewPageLoadEventsTimer;
    NSTimer *_pageLoadingTimeoutTimer;
}


@property (retain, nonatomic) NSDate *allSubresourcesLoadedDate; // ivar: _allSubresourcesLoadedDate
@property (copy, nonatomic) id *callbackBlock; // ivar: _callbackBlock
@property (retain, nonatomic) NSDate *domContentLoadedDate; // ivar: _domContentLoadedDate
@property (retain, nonatomic) NSDate *firstMeaningfulPaintDate; // ivar: _firstMeaningfulPaintDate
@property (retain, nonatomic) NSDate *firstVisualLayoutDate; // ivar: _firstVisualLayoutDate
@property (retain, nonatomic) NSDate *lastOnloadEventDate; // ivar: _lastOnloadEventDate
@property (retain, nonatomic) NSDate *lastPageLoadEventDate; // ivar: _lastPageLoadEventDate
@property (retain, nonatomic) NSDate *lastResourceLoadDate; // ivar: _lastResourceLoadDate
@property (retain, nonatomic) NSError *loadError; // ivar: _loadError
@property (retain, nonatomic) NSDate *loadStartDate; // ivar: _loadStartDate
@property (retain, nonatomic) NSDate *mainFrameLoadDate; // ivar: _mainFrameLoadDate
@property (nonatomic) NSUInteger memoryAfterWarning; // ivar: _memoryAfterWarning
@property (nonatomic) NSUInteger memoryBeforeWarning; // ivar: _memoryBeforeWarning
@property (retain, nonatomic) WKNavigation *navigation; // ivar: _navigation
@property (nonatomic) CGFloat pageLoadingTimeoutInterval; // ivar: _pageLoadingTimeoutInterval


+(void)setRestInterval:(CGFloat)arg0 ;
-(BOOL)_pageLoadEventsAreStillPending;
-(id)initWithCallback:(id)arg0 ;
-(void)_cancelPageLoadingTimeoutTimerIfNeeded;
-(void)_cancelWaitForNewPageLoadEventsTimer;
-(void)_maybePageLoadFinishedForTests;
-(void)_pageLoadFinishedForTests;
-(void)_pageLoadTimeoutTimerFired:(id)arg0 ;
-(void)_scheduleWaitForNewPageLoadEventsTimer;
-(void)_waitForNewPageLoadEventsTimerFired:(id)arg0 ;
-(void)dealloc;
-(void)failedNavigation:(id)arg0 withError:(id)arg1 ;
-(void)finishedFirstVisualLayout;
-(void)finishedLoadingResources;
-(void)finishedNavigation:(id)arg0 ;
-(void)handledOnloadEvents;
-(void)pageLoadFinishedForTestsWK2WithLoadData:(id)arg0 ;
-(void)startedLoadingResources;
-(void)startedNavigation:(id)arg0 ;
-(void)startedPageLoad;


@end


#endif