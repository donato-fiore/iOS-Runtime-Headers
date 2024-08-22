// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSCOMPOSEBUNDLEPAGECONTROLLER_H
#define MSCOMPOSEBUNDLEPAGECONTROLLER_H

@class NSMutableArray, WKWebProcessPlugInBrowserContextController, NSString, JSValue, JSContext;
@protocol WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController, MSComposeBodyFieldObserver, WKWebProcessPlugIn;

#import <Foundation/Foundation.h>


@interface MSComposeBundlePageController : NSObject <WKWebProcessPlugInLoadDelegate, MSBundlePageController, MSComposeBodyFieldController>

 {
    NSUInteger _performOnPageSuspendCount;
    NSMutableArray *_blocksToPerformOnPage;
}


@property (readonly, nonatomic) WKWebProcessPlugInBrowserContextController *controller; // ivar: _controller
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) JSValue *jsBodyField; // ivar: _jsBodyField
@property (readonly, nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (readonly, nonatomic) NSObject<MSComposeBodyFieldObserver> *observerProxy;
@property (readonly, weak, nonatomic) NSObject<WKWebProcessPlugIn> *plugIn; // ivar: _plugIn
@property (readonly) Class superclass;


-(id)initWithPlugIn:(id)arg0 contextController:(id)arg1 ;
-(id)webProcessPlugInBrowserContextController:(id)arg0 frame:(id)arg1 willSendRequestForResource:(NSUInteger)arg2 request:(id)arg3 redirectResponse:(id)arg4 ;
-(id)willSendRequest:(id)arg0 ;
-(void)changeQuoteLevelBy:(NSInteger)arg0 ;
-(void)initializeBodyField:(id)arg0 ;
-(void)initializeGlobalObject;
-(void)invalidate;
-(void)performBodyFieldMethodOnPage:(id)arg0 withArguments:(id)arg1 ;
-(void)performOnPage:(id)arg0 ;
-(void)resumePerformOnPage;
-(void)suspendPerformOnPage;
-(void)webProcessPlugInBrowserContextController:(id)arg0 didFinishDocumentLoadForFrame:(id)arg1 ;
-(void)webProcessPlugInBrowserContextController:(id)arg0 globalObjectIsAvailableForFrame:(id)arg1 inScriptWorld:(id)arg2 ;


@end


#endif