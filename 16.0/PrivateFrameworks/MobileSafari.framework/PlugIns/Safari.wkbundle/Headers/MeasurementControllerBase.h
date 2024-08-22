// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MEASUREMENTCONTROLLERBASE_H
#define MEASUREMENTCONTROLLERBASE_H

@class NSTimer, NSMutableDictionary, NSMutableSet, WKWebProcessPlugInBrowserContextController, NSString;
@protocol WKWebProcessPlugInLoadDelegate, PageLoadTestEventsListener;

#import <Foundation/Foundation.h>


@interface MeasurementControllerBase : NSObject <WKWebProcessPlugInLoadDelegate>

 {
    NSTimer *_waitForLoadToReallyEnd;
    NSMutableDictionary *_loadData;
    BOOL _currentPageLoadFinished;
    set<unsigned long long, std::less<unsigned long long>, std::allocator<unsigned long long>> _loadingSubresources;
    NSMutableSet *_loadingFrames;
    WKWebProcessPlugInBrowserContextController *_contextController;
    id<PageLoadTestEventsListener> *_pageLoadTestEventsProxy;
}


@property (nonatomic) CGFloat allSubresourcesFinishedLoadingDelay; // ivar: _allSubresourcesFinishedLoadingDelay
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)_shouldConsiderPageLoadEnded;
-(id)initWithPluginPageContextController:(id)arg0 ;
-(void)_clearPageLoadState;
-(void)_doAfterPageLoad;
-(void)_doBeforePageLoad;
-(void)_maybeEndPageLoadSoon;
-(void)_postPageLoadEnd;
-(void)_resourceLoadCompleted:(NSUInteger)arg0 ;
-(void)_sendPageLoadFinishedEvent;
-(void)_waitforLoadEndTimerFired:(id)arg0 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFailLoadWithErrorForFrame:(id)arg1 error:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFirstVisuallyNonEmptyLayoutForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didHandleOnloadEventsForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didFailLoadForResource:(NSUInteger)arg2 error:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didFinishLoadForResource:(NSUInteger)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didInitiateLoadForResource:(NSUInteger)arg2 request:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;


@end


#endif