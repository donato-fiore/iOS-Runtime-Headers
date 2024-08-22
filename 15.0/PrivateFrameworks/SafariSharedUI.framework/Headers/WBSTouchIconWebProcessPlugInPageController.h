// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WBSTOUCHICONWEBPROCESSPLUGINPAGECONTROLLER_H
#define WBSTOUCHICONWEBPROCESSPLUGINPAGECONTROLLER_H

@protocol WBSTouchIconObserver;


#import "WBSWebProcessPlugInPageController.h"

@interface WBSTouchIconWebProcessPlugInPageController : WBSWebProcessPlugInPageController {
    id<WBSTouchIconObserver> *_touchIconObserver;
    NSUInteger _mainFrameMainResourceId;
    BOOL _didRecieveDidHandleOnloadEventsForFrameCallback;
    BOOL _shouldExtractIconsWhenRecievingDidHandleOnloadEventsForFrameCallback;
}


@property (readonly, nonatomic) NSObject<WBSTouchIconObserver> *touchIconObserver;


-(id)_extractFaviconURLsIncludingDefaultURLs:(BOOL)arg0 didExtractNonDefaultIconURLs:(*BOOL)arg1 ;
-(id)_extractTouchIconURLsIncludingDefaultURLs:(BOOL)arg0 didExtractNonDefaultIconURLs:(*BOOL)arg1 ;
-(id)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 willSendRequestForResource:(NSUInteger)arg2 request:(id)arg3 redirectResponse:(id)arg4 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didHandleOnloadEventsForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 didInitiateLoadForResource:(NSUInteger)arg2 request:(id)arg3 pageIsProvisionallyLoading:(BOOL)arg4 ;


@end


#endif