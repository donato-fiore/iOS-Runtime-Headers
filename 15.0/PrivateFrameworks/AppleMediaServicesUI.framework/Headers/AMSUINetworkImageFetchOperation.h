// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUINETWORKIMAGEFETCHOPERATION_H
#define AMSUINETWORKIMAGEFETCHOPERATION_H

@class AMSURLSession, NSURLSessionTask, NSURL;


#import "AMSUIAssetFetchOperation.h"

@interface AMSUINetworkImageFetchOperation : AMSUIAssetFetchOperation

@property (retain, nonatomic) AMSURLSession *URLSession; // ivar: _URLSession
@property (retain, nonatomic) NSURLSessionTask *sessionTask; // ivar: _sessionTask
@property (retain, nonatomic) NSURL *url; // ivar: _url


+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
-(BOOL)isAsynchronous;
-(BOOL)isExecuting;
-(BOOL)isFinished;
-(float)_sessionTaskPriorityForQueuePriority:(NSInteger)arg0 ;
-(id)_eagerlyDecompressImage:(id)arg0 ;
-(id)initWithURL:(id)arg0 URLSession:(id)arg1 ;
-(void)_didCompleteTaskWithResult:(id)arg0 error:(id)arg1 ;
-(void)cancel;
-(void)setQueuePriority:(NSInteger)arg0 ;
-(void)start;


@end


#endif