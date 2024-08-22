// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIAITEMCLOUDDOWNLOADCONTROLLER_H
#define VUIMPMEDIAITEMCLOUDDOWNLOADCONTROLLER_H

@class NSString, MPStoreDownload;
@protocol MPStoreDownloadManagerObserver;


#import "VUIMPMediaItemDownloadController.h"

@interface VUIMPMediaItemCloudDownloadController : VUIMPMediaItemDownloadController <MPStoreDownloadManagerObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MPStoreDownload *storeDownload; // ivar: _storeDownload
@property (readonly) Class superclass;


+(id)_stateFromStoreDownload:(id)arg0 ;
-(BOOL)supportsPausing;
-(id)initWithMediaItem:(id)arg0 serialProcessingDispatchQueue:(id)arg1 ;
-(id)initWithMediaItem:(id)arg0 state:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(void)_addStoreObserver;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)_removeStoreObserver;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadDidFinish:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadDidProgress:(id)arg1 ;


@end


#endif