// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WEBPROCESSPLUGINBROWSERPAGECONTROLLER_H
#define WEBPROCESSPLUGINBROWSERPAGECONTROLLER_H

@class SFWebProcessPlugInReaderEnabledPageController, _WKRemoteObjectInterface, NSString;
@protocol PageLoadTestWebProcessController, TouchIconFetcherWebProcessController, TouchIconFetcherObserver;


#import "MeasurementControllerBase.h"

@interface WebProcessPlugInBrowserPageController : SFWebProcessPlugInReaderEnabledPageController <PageLoadTestWebProcessController, TouchIconFetcherWebProcessController>

 {
    _WKRemoteObjectInterface *_pageLoadTestControllerInterface;
    _WKRemoteObjectInterface *_touchIconFetcherControllerInterface;
    MeasurementControllerBase *_pageLoadTestMeasurementController;
    BOOL _haveCheckedIfPageLoadTestIsEnabled;
    id<TouchIconFetcherObserver> *_touchIconFetcherObserverProxy;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSUInteger)webProcessPlugInBrowserContextControllerRenderingProgressEvents:(id)arg0 ;
-(id)_touchIconFetcherObserverProxy;
-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(void)_logPageLoadCompleted:(id)arg0 withErrorCode:(NSInteger)arg1 ;
-(void)_logPageLoadStarted:(id)arg0 ;
-(void)_readPageLoadTestParameters;
-(void)_setupPageLoadTestController;
-(void)_setupTouchIconFetcherController;
-(void)dealloc;
-(void)enablePageMemoryMeasurementCollection:(id)arg0 ;
-(void)fetchTouchIconURLs;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didCommitLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFailLoadWithErrorForFrame:(id)arg1 error:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFailProvisionalLoadWithErrorForFrame:(id)arg1 error:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFirstVisuallyNonEmptyLayoutForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didHandleOnloadEventsForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didRemoveFrameFromHierarchy:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didStartProvisionalLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didFailLoadForResource:(NSUInteger)arg2 error:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didFinishLoadForResource:(NSUInteger)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didInitiateLoadForResource:(NSUInteger)arg2 request:(id)arg3 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 renderingProgressDidChange:(NSUInteger)arg1 ;
-(void)willDestroyBrowserContextController:(id)arg0 ;


@end


#endif