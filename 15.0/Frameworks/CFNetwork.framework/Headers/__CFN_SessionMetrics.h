// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __CFN_SESSIONMETRICS_H
#define __CFN_SESSIONMETRICS_H

@class NSUUID, NSString;
@protocol _NSURLSessionEventDelegate;

#import <Foundation/Foundation.h>


@interface __CFN_SessionMetrics : NSObject <_NSURLSessionEventDelegate>

 {
    id<_NSURLSessionEventDelegate> *_delegate;
    NSUUID *_UUID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)connectionBegin:(id)arg0 fromTransaction:(id)arg1 properties:(id)arg2 absoluteTime:(CGFloat)arg3 ;
-(void)connectionEnd:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)connectionEstablish:(id)arg0 properties:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)connectionWait:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)sessionCreate:(id)arg0 pointer:(NSUInteger)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)sessionDestroy:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)taskComplete:(id)arg0 withError:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)taskCreate:(id)arg0 pointer:(NSUInteger)arg1 withRequest:(id)arg2 fromSession:(id)arg3 absoluteTime:(CGFloat)arg4 ;
-(void)taskResume:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)taskSuspend:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)transactionCacheLookupBegin:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)transactionCacheLookupEnd:(id)arg0 cachedResponse:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)transactionCreate:(id)arg0 withRequest:(id)arg1 fromTask:(id)arg2 absoluteTime:(CGFloat)arg3 ;
-(void)transactionEnd:(id)arg0 reason:(NSUInteger)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)transactionRequestBegin:(id)arg0 onConnection:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)transactionRequestBody:(id)arg0 data:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)transactionRequestEnd:(id)arg0 size:(NSInteger)arg1 transferSize:(NSInteger)arg2 absoluteTime:(CGFloat)arg3 ;
-(void)transactionRequestHeaderEnd:(id)arg0 request:(id)arg1 size:(NSInteger)arg2 absoluteTime:(CGFloat)arg3 ;
-(void)transactionResponseBegin:(id)arg0 absoluteTime:(CGFloat)arg1 ;
-(void)transactionResponseBody:(id)arg0 data:(id)arg1 absoluteTime:(CGFloat)arg2 ;
-(void)transactionResponseEnd:(id)arg0 size:(NSInteger)arg1 transferSize:(NSInteger)arg2 absoluteTime:(CGFloat)arg3 ;
-(void)transactionResponseHeaderEnd:(id)arg0 response:(id)arg1 size:(NSInteger)arg2 absoluteTime:(CGFloat)arg3 ;


@end


#endif