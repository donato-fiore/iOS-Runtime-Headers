// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETRESOURCEREQUEST_H
#define PHASSETRESOURCEREQUEST_H

@class NSProgress, PLProgressFollower, NSString, NSDictionary;
@protocol PHAssetResourceRequest, PHAssetResourceRequestDelegate;

#import <Foundation/Foundation.h>

#import "PHAssetResource.h"
#import "PHAssetResourceRequestOptions.h"

@interface PHAssetResourceRequest : NSObject <PHAssetResourceRequest>

 {
    os_unfair_lock_s _lock;
    BOOL _cancelled;
    NSProgress *_availabilityProgress;
    NSInteger _availabilityPendingCount;
    NSProgress *_fileStreamProgress;
    NSInteger _fileStreamPendingCount;
    NSProgress *_totalProgress;
    PLProgressFollower *_progressFollower;
}


@property (readonly, nonatomic) PHAssetResource *assetResource; // ivar: _assetResource
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler
@property (copy, nonatomic) id *dataHandler; // ivar: _dataHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<PHAssetResourceRequestDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSDictionary *info; // ivar: _info
@property (nonatomic) BOOL loadURLOnly; // ivar: _loadURLOnly
@property (readonly, nonatomic) NSUInteger managerID; // ivar: _managerID
@property (readonly, nonatomic) PHAssetResourceRequestOptions *options; // ivar: _options
@property (readonly, nonatomic) int requestID; // ivar: _requestID
@property (readonly) Class superclass;
@property (nonatomic, getter=isSynchronous) BOOL synchronous; // ivar: _synchronous
@property (copy, nonatomic) NSString *taskIdentifier; // ivar: _taskIdentifier
@property (copy, nonatomic) id *urlReceivedHandler; // ivar: _urlReceivedHandler


+(id)_globalFileIOQueue;
-(NSInteger)_streamDataAtURL:(id)arg0 error:(*id)arg1 dataHandler:(id)arg2 ;
-(id)_initialValidationError;
// -(id)initWithAssetResource:(id)arg0 options:(id)arg1 requestID:(int)arg2 managerID:(NSUInteger)arg3 delegate:(id)arg4 urlReceivedHandler:(id)arg5 dataReceivedHandler:(unk)arg6 completionHandler:(id)arg7  ;
-(void)_addAvailabilityProgressIfNeeded:(id)arg0 ;
-(void)_finishAsyncWithFileURL:(id)arg0 didBecomeAvailable:(BOOL)arg1 error:(id)arg2 ;
-(void)_finishWithFileURL:(id)arg0 didBecomeAvailable:(BOOL)arg1 error:(id)arg2 ;
-(void)_setupFilestreamProgressIfNeeded;
-(void)_setupTotalProgressIfNeeded;
-(void)_updateAssetResourceWithLocallyAvailable:(BOOL)arg0 fileURL:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)startRequest;


@end


#endif