// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVPAGEPERFORMANCECONTROLLER_H
#define _TVPAGEPERFORMANCECONTROLLER_H

@class NSMutableArray, NSDictionary;
@protocol _TVPagePerformanceDelegate;

#import <Foundation/Foundation.h>


@interface _TVPagePerformanceController : NSObject {
    timeval _baseTimeval;
    NSUInteger _baseAbsoluteTime;
    NSMutableArray *_templateEntries;
}


@property (weak, nonatomic) NSObject<_TVPagePerformanceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSDictionary *metrics;
@property (nonatomic) NSUInteger pageCompleteDuration; // ivar: _pageCompleteDuration
@property (nonatomic) BOOL pageHasSubpages; // ivar: _pageHasSubpages
@property (nonatomic) BOOL pageIsLoading; // ivar: _pageIsLoading
@property (nonatomic) NSUInteger pageRenderDuration; // ivar: _pageRenderDuration
@property (nonatomic) NSUInteger pageResourceDuration; // ivar: _pageResourceDuration
@property (nonatomic) NSUInteger pageSetupDuration; // ivar: _pageSetupDuration
@property (nonatomic) NSUInteger pageTransitionDuration; // ivar: _pageTransitionDuration
@property (nonatomic) BOOL pageWasInterrupted; // ivar: _pageWasInterrupted
@property (nonatomic) BOOL pageWasUpdated; // ivar: _pageWasUpdated
@property (nonatomic) NSUInteger viewDidAppear; // ivar: _viewDidAppear
@property (nonatomic) NSUInteger viewDidDisappear; // ivar: _viewDidDisappear
@property (nonatomic) NSUInteger viewDidLoad; // ivar: _viewDidLoad
@property (nonatomic) NSUInteger viewWillAppear; // ivar: _viewWillAppear
@property (nonatomic) NSUInteger viewWillDisappear; // ivar: _viewWillDisappear
@property (nonatomic) NSUInteger viewWillLoad; // ivar: _viewWillLoad


+(BOOL)isPerformanceUIEnabled;
+(void)postNotificationForImageProxy:(id)arg0 withLoadingStatus:(BOOL)arg1 ;
-(BOOL)_isMetricsReady;
-(NSUInteger)templateDidComplete;
-(id)buildPagePerformanceView;
-(id)getEntryForTemplate:(id)arg0 ;
-(id)init;
-(void)_calculatePageDurations;
-(void)_maybeDeliverMetrics;
-(void)markViewDidAppear;
-(void)markViewDidDisappear;
-(void)markViewDidLoad;
-(void)markViewWillAppear;
-(void)markViewWillDisappear;
-(void)markViewWillLoad;


@end


#endif