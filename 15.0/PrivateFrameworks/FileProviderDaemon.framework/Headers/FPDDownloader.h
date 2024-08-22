// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDDOWNLOADER_H
#define FPDDOWNLOADER_H

@class NSMutableDictionary, NSObservation, NSProgress;
@protocol FPCancellable, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "FPDDomain.h"

@interface FPDDownloader : NSObject <FPCancellable>

 {
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSMutableDictionary *_parentToChildMap;
    NSMutableDictionary *_childProxies;
    NSObservation *_observation;
}


@property (readonly, nonatomic) NSProgress *cancellationProgress; // ivar: _cancellationProgress
@property (readonly, weak, nonatomic) FPDDomain *domain; // ivar: _domain
@property (nonatomic, getter=isDryRun) BOOL dryRun; // ivar: _dryRun
@property (readonly, nonatomic) NSProgress *progress; // ivar: _progress


-(id)initWithDomain:(id)arg0 callbackQueue:(id)arg1 ;
-(void)_cleanup;
-(void)_createChildItem:(id)arg0 ;
-(void)_didDownloadItem:(id)arg0 withError:(id)arg1 ;
-(void)_downloadItem:(id)arg0 recursively:(NSUInteger)arg1 retryCount:(int)arg2 request:(id)arg3 withCompletion:(id)arg4 ;
-(void)_logRootProgress;
// -(void)_nonRecursiveDownloadOfItem:(id)arg0 request:(id)arg1 perItemCompletion:(id)arg2 withCompletion:(unk)arg3  ;
-(void)_progressComputationPreflightForRecursiveRoot:(id)arg0 completion:(id)arg1 ;
// -(void)_recursiveDownloadOfItem:(id)arg0 request:(id)arg1 recursively:(NSUInteger)arg2 perItemCompletion:(id)arg3 withCompletion:(unk)arg4  ;
-(void)_stopTrackingFileURLs;
-(void)cancel;
-(void)dealloc;
-(void)downloadItem:(id)arg0 recursively:(NSUInteger)arg1 request:(id)arg2 withCompletion:(id)arg3 ;
-(void)downloadURL:(id)arg0 recursively:(NSUInteger)arg1 request:(id)arg2 withCompletion:(id)arg3 ;


@end


#endif