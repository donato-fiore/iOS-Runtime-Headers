// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSURLCONNECTION_H
#define NSURLCONNECTION_H

@class NSString;
@protocol NSURLAuthenticationChallengeSender;

#import <Foundation/Foundation.h>

#import "NSURLConnectionInternal.h"
#import "NSURLRequest.h"

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender>

 {
    NSURLConnectionInternal *_internal;
}


@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly) Class superclass;


+(BOOL)_collectsTimingData;
+(BOOL)canHandleRequest:(id)arg0 ;
+(NSUInteger)_sweeperInterval;
+(NSUInteger)_timingDataOptions;
+(id)connectionWithRequest:(id)arg0 delegate:(id)arg1 ;
+(id)sendSynchronousRequest:(id)arg0 returningResponse:(*id)arg1 error:(*id)arg2 ;
+(struct __CFRunLoop *)resourceLoaderRunLoop;
+(void)_collectTimingDataWithOptions:(NSUInteger)arg0 ;
+(void)_setCollectsTimingData:(BOOL)arg0 ;
+(void)_setLoaderThreadPriority:(int)arg0 ;
+(void)_setMIMETypesWithNoSizeLimit:(id)arg0 ;
+(void)_setSweeperInterval:(NSUInteger)arg0 ;
+(void)sendAsynchronousRequest:(id)arg0 queue:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)defersCallbacks;
-(id)_cfInternal;
-(id)_dlInternal;
-(id)_initWithRequest:(id)arg0 delegate:(id)arg1 usesCache:(BOOL)arg2 maxContentLength:(NSInteger)arg3 startImmediately:(BOOL)arg4 connectionProperties:(id)arg5 ;
-(id)_timingData;
-(id)connectionProperties;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 ;
-(id)initWithRequest:(id)arg0 delegate:(id)arg1 startImmediately:(BOOL)arg2 ;
-(void)_resumeLoading;
-(void)_suspendLoading;
-(void)cancel;
-(void)cancelAuthenticationChallenge:(id)arg0 ;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg0 ;
-(void)dealloc;
-(void)download;
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg0 ;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg0 ;
-(void)scheduleInRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)setDefersCallbacks:(BOOL)arg0 ;
-(void)setDelegateQueue:(id)arg0 ;
-(void)start;
-(void)unscheduleFromRunLoop:(id)arg0 forMode:(id)arg1 ;
-(void)useCredential:(id)arg0 forAuthenticationChallenge:(id)arg1 ;


@end


#endif