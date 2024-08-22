// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PAGELOADTESTRUNNER_H
#define PAGELOADTESTRUNNER_H

@class NSMutableArray, NSOutputStream, NSString;
@protocol PageLoadTestRunnerDelegate;

#import <Foundation/Foundation.h>

#import "BrowserController.h"

@interface PageLoadTestRunner : NSObject {
    BOOL _started;
    BOOL _measureTime;
    NSMutableArray *_pagesNeedingMemoryWarningSent;
    NSMutableArray *_pageLoadArray;
    unsigned int _version;
    CGFloat _allSubresourcesFinishedLoadingDelay;
    CGFloat _savedDefaultTimeoutInterval;
    unsigned int _currentTestIteration;
    unsigned int _testIterations;
    CGFloat _initialDelay;
    NSOutputStream *_logStream;
}


@property (readonly, nonatomic) BrowserController *browserController; // ivar: _browserController
@property (nonatomic) int cacheClearDirective; // ivar: _cacheClearDirective
@property (nonatomic) BOOL checkForWorldLeaks; // ivar: _checkForWorldLeaks
@property (nonatomic) BOOL collectHeapStatistics; // ivar: _collectHeapStatistics
@property (weak, nonatomic) NSObject<PageLoadTestRunnerDelegate> *delegate; // ivar: _delegate
@property (nonatomic) BOOL disableProgressBar; // ivar: _disableProgressBar
@property (nonatomic) BOOL failFast; // ivar: _failFast
@property (nonatomic) BOOL loadURLInNewTab; // ivar: _loadURLInNewTab
@property (retain, nonatomic) NSString *logFile; // ivar: _logFile
@property (retain, nonatomic) NSString *outputFilename; // ivar: _outputFilename
@property (nonatomic) CGFloat pageActionInterval; // ivar: _pageActionInterval
@property (nonatomic) CGFloat pageRestInterval; // ivar: _pageRestInterval
@property (nonatomic) CGFloat pageTimeout; // ivar: _pageTimeout
@property (nonatomic) BOOL resetsZoomBetweenPages; // ivar: _resetsZoomBetweenPages
@property (nonatomic) NSUInteger skipCount; // ivar: _skipCount
@property (retain, nonatomic) NSString *suiteName; // ivar: _suiteName
@property (nonatomic) NSUInteger tabCount; // ivar: _tabCount
@property (copy, nonatomic) NSString *testName; // ivar: _testName


+(BOOL)closingBrowserWindowsForWorldLeakTest;
+(id)worldLeaksString;
+(struct ? )heapStatistics;
+(void)addLeakToArray:(id)arg0 count:(int)arg1 name:(id)arg2 ;
-(BOOL)finishCheckingForWorldLeaks;
-(BOOL)loadTestSuiteFile:(id)arg0 ;
-(BOOL)performActionForPage:(id)arg0 ;
-(BOOL)startPageAction:(id)arg0 ;
-(id)_pageLoadForTabDocument:(id)arg0 ;
-(id)initWithTestName:(id)arg0 browserController:(id)arg1 ;
-(void)_checkRedirect:(id)arg0 ;
-(void)_closeLogStream;
-(void)_handleActionTimer:(id)arg0 ;
-(void)_pageRestExpired:(id)arg0 ;
-(void)_pageTimeoutExpired:(id)arg0 ;
-(void)_startNextPageNow;
-(void)_updatePageLoad:(id)arg0 stats:(id)arg1 ;
-(void)addPageURL:(id)arg0 withProcessSwap:(BOOL)arg1 ;
-(void)clearCacheWithURL:(id)arg0 ;
-(void)closeBrowserWindows;
-(void)closeBrowserWindowsAndFinishCheckingForWorldLeaks;
-(void)dealloc;
-(void)finish;
-(void)finishPage:(id)arg0 stats:(id)arg1 error:(id)arg2 ;
-(void)finishedTestPage:(id)arg0 ;
-(void)finishedTestRunner;
-(void)finishedTestRunnerIteration;
-(void)log:(id)arg0 ;
-(void)removeURLsInRange:(struct _NSRange )arg0 ;
-(void)setExistingProperty:(id)arg0 to:(id)arg1 ;
-(void)setTestOptions:(id)arg0 ;
-(void)start;
-(void)startNextPage;
-(void)startingTestPage:(id)arg0 ;
-(void)startingTestRunner;


@end


#endif