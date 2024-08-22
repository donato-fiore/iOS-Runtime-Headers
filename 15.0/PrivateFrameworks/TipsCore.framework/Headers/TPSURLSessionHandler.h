// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TPSURLSESSIONHANDLER_H
#define TPSURLSESSIONHANDLER_H

@class NSString, NSIndexSet;
@protocol TPSURLSessionManagerDelegate, TPSURLSessionDelegate, TPSURLSessionHandlerDelegate;

#import <Foundation/Foundation.h>


@interface TPSURLSessionHandler : NSObject <TPSURLSessionManagerDelegate, TPSURLSessionDelegate>



@property (retain, nonatomic) NSString *certificateFilePath; // ivar: _certificateFilePath
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TPSURLSessionHandlerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSIndexSet *excludeCachingDataTypes; // ivar: _excludeCachingDataTypes
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *passphrase; // ivar: _passphrase
@property (nonatomic) BOOL shouldIgnoreInMemoryCaching; // ivar: _shouldIgnoreInMemoryCaching
@property (readonly) Class superclass;


+(id)sharedInstance;
-(BOOL)URLSessionManagerShouldCoalesceRequest:(id)arg0 ;
-(BOOL)respectCachingForRequest:(id)arg0 ;
-(BOOL)shouldCacheToDiskForSessionTask:(id)arg0 ;
-(id)URLSessionManagerSessionConfiguration:(id)arg0 ;
-(id)URLSessionManagerSessionOperationQueue:(id)arg0 ;
-(id)cacheControllerForDataType:(NSInteger)arg0 ;
-(id)init;
-(id)processJSONFormattedDataForCDSError:(id)arg0 ;
-(void)URLSessionManagerDidReceiveChallenge:(id)arg0 completionHandler:(id)arg1 ;
-(void)sessionTask:(id)arg0 didCompleteWithError:(id)arg1 ;
-(void)sessionTask:(id)arg0 didFinishDownloadingToURL:(id)arg1 ;
-(void)sessionTask:(id)arg0 didReceiveChallenge:(id)arg1 completionHandler:(id)arg2 ;
-(void)sessionTask:(id)arg0 didReceiveResponse:(id)arg1 completionHandler:(id)arg2 ;
-(void)sessionTask:(id)arg0 willCacheResponse:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif