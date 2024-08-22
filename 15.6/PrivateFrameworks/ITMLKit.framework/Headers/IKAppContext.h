// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IKAPPCONTEXT_H
#define IKAPPCONTEXT_H

@class NSString, JSContext, NSNumber, NSMutableArray, NSURL, NSError;
@protocol ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate, OS_dispatch_source, IKApplication, IKAppScriptFallbackHandler, IKAppContextDelegate;

#import <Foundation/Foundation.h>

#import "IKJSArrayBufferStore.h"
#import "IKAppCache.h"
#import "IKJSApplication.h"
#import "IKJSFoundation.h"
#import "IKJSViewModelService.h"
#import "IKJSWeakMap.h"
#import "IKAppReloadContext.h"
#import "IKViewElementRegistry.h"
#import "IKJSInspectorController.h"

@interface IKAppContext : NSObject <ISURLOperationDelegate, IKAppCacheDelegate, IKJSInspectorControllerDelegate>

 {
    IKJSArrayBufferStore *_arrayBufferStore;
    *__CFRunLoop _jsThreadRunLoop;
    *__CFRunLoopSource _jsThreadRunLoopSource;
    NSObject<OS_dispatch_source> *_lowMemoryWarningSource;
    BOOL _respondsToTraitCollection;
    BOOL _isAirplaneModeEnabled;
    ? _delegateFlags;
}


@property (readonly, weak, nonatomic) NSObject<IKApplication> *app; // ivar: _app
@property (readonly, nonatomic) IKAppCache *appCache; // ivar: _appCache
@property (retain, nonatomic) NSObject<IKAppScriptFallbackHandler> *appScriptFallbackHandler; // ivar: _appScriptFallbackHandler
@property (nonatomic) CGFloat appScriptTimeoutInterval; // ivar: _appScriptTimeoutInterval
@property (readonly, nonatomic) BOOL appUsesDefaultStyleSheets; // ivar: _appUsesDefaultStyleSheets
@property (readonly, nonatomic) IKJSArrayBufferStore *arrayBufferStore;
@property (nonatomic) BOOL canAccessPendingQueue; // ivar: _canAccessPendingQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<IKAppContextDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property BOOL isValid; // ivar: _isValid
@property (retain, nonatomic) IKJSApplication *jsApp; // ivar: _jsApp
@property (retain, nonatomic) JSContext *jsContext; // ivar: _jsContext
@property (retain, nonatomic) IKJSFoundation *jsFoundation; // ivar: _jsFoundation
@property (retain, nonatomic) IKJSViewModelService *jsViewModelService; // ivar: _jsViewModelService
@property (retain, nonatomic) IKJSWeakMap *jsWeakMap; // ivar: _jsWeakMap
@property (nonatomic) BOOL mescalPrimeEnabledForXHRRequests; // ivar: _mescalPrimeEnabledForXHRRequests
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) NSString *nextJSChecksum; // ivar: _nextJSChecksum
@property (readonly, nonatomic) NSMutableArray *onStartQueue; // ivar: _onStartQueue
@property (retain, nonatomic) NSMutableArray *pendingQueue; // ivar: _pendingQueue
@property (retain, nonatomic) NSMutableArray *postEvaluationBlocks; // ivar: _postEvaluationBlocks
@property (nonatomic, getter=isPrivileged) BOOL privileged; // ivar: _privileged
@property (retain, nonatomic) IKAppReloadContext *reloadContext; // ivar: _reloadContext
@property (nonatomic) BOOL remoteInspectionEnabled; // ivar: _remoteInspectionEnabled
@property (readonly, copy, nonatomic) NSURL *resolvedBootURL; // ivar: _resolvedBootURL
@property (retain, nonatomic) NSError *responseError; // ivar: _responseError
@property (copy, nonatomic) NSString *responseScript; // ivar: _responseScript
@property (getter=isRunning) BOOL running; // ivar: _running
@property (readonly) Class superclass;
@property (nonatomic, getter=isTrusted) BOOL trusted; // ivar: _trusted
@property (readonly, nonatomic) IKViewElementRegistry *viewElementRegistry; // ivar: _viewElementRegistry
@property (retain, nonatomic) IKJSInspectorController *webInspectorController; // ivar: _webInspectorController


+(BOOL)isInFactoryMode;
+(id)currentAppContext;
+(void)registerPrivateProtocols:(id)arg0 forClass:(Class)arg1 ;
-(BOOL)_prepareStartWithURL:(id)arg0 ;
-(BOOL)cancelHighlightView;
-(BOOL)highlightViewForElementWithID:(NSInteger)arg0 contentColor:(id)arg1 paddingColor:(id)arg2 borderColor:(id)arg3 marginColor:(id)arg4 ;
-(BOOL)highlightViewsForElementsWithIDs:(id)arg0 contentColor:(id)arg1 paddingColor:(id)arg2 borderColor:(id)arg3 marginColor:(id)arg4 ;
-(BOOL)isInspectElementModeEnabled;
-(BOOL)validateDOMDocument:(id)arg0 error:(*id)arg1 ;
-(id)_errorWithMessage:(id)arg0 ;
-(id)_preferredLaunchURL;
-(id)initWithApplication:(id)arg0 mode:(NSUInteger)arg1 cache:(BOOL)arg2 delegate:(id)arg3 ;
-(id)initWithApplication:(id)arg0 mode:(NSUInteger)arg1 delegate:(id)arg2 ;
-(id)registerLoaderWithIdentifier:(id)arg0 ;
-(void)_addStopRecordToPendingQueueWithReload:(BOOL)arg0 ;
-(void)_dispatchError:(id)arg0 ;
-(void)_doEvaluate:(id)arg0 ;
-(void)_drainOnStartQueue;
-(void)_enqueueOnStartOrExecute:(id)arg0 ;
-(void)_evaluate:(id)arg0 ;
-(void)_evaluateFoundationWithDeviceConfig:(id)arg0 addPrivateInterfaces:(BOOL)arg1 ;
-(void)_invalidateJSThread;
-(void)_jsThreadMain;
-(void)_networkPropertiesChanged:(id)arg0 ;
-(void)_sourceCanceledOnRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_sourcePerform;
-(void)_sourceScheduledOnRunLoop:(struct __CFRunLoop *)arg0 ;
-(void)_startWithScript:(id)arg0 scriptUrl:(id)arg1 wasLoadedFromFallback:(BOOL)arg2 ;
-(void)_startWithURL:(id)arg0 urlTrusted:(BOOL)arg1 ;
-(void)_stopAndReload:(BOOL)arg0 ;
-(void)addPostEvaluateBlock:(id)arg0 ;
-(void)appCache:(id)arg0 didUpdateWithChecksum:(id)arg1 ;
-(void)appTraitCollectionChanged:(id)arg0 ;
-(void)contextDidFailWithError:(id)arg0 ;
-(void)contextDidStartWithJS:(id)arg0 options:(id)arg1 ;
-(void)contextDidStopWithOptions:(id)arg0 ;
-(void)dealloc;
// -(void)evaluate:(id)arg0 completionBlock:(unk)arg1  ;
-(void)evaluateDelegateBlockSync:(id)arg0 ;
-(void)evaluateFoundationJS;
-(void)exitAppWithOptions:(id)arg0 ;
-(void)handleCacheUpdate;
-(void)handleReloadWithUrgencyType:(NSUInteger)arg0 minInterval:(CGFloat)arg1 data:(id)arg2 ;
-(void)inspectElement:(id)arg0 ;
-(void)inspectElementModeChanged:(BOOL)arg0 ;
-(void)launchAppWithOptions:(id)arg0 ;
-(void)openURLWithOptions:(id)arg0 ;
-(void)operation:(id)arg0 failedWithError:(id)arg1 ;
-(void)operation:(id)arg0 finishedWithOutput:(id)arg1 ;
-(void)reload;
-(void)resumeWithOptions:(id)arg0 ;
-(void)setException:(id)arg0 withErrorMessage:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)suspendWithOptions:(id)arg0 ;
-(void)unregisterLoaderWithIdentifier:(id)arg0 ;
-(void)willPerformXhrRequest:(id)arg0 ;


@end


#endif