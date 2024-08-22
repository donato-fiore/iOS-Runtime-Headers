// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOSGRIDDOWNLOADHELPER_H
#define PUPHOTOSGRIDDOWNLOADHELPER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue, PUPhotosGridDownloadUpdateHandler;

#import <Foundation/Foundation.h>


@interface PUPhotosGridDownloadHelper : NSObject {
    NSMutableDictionary *_downloadContexts;
    NSObject<OS_dispatch_queue> *_downloadContextsIsolationQueue;
}


@property (nonatomic) NSInteger mode; // ivar: _mode
@property (nonatomic) BOOL shouldTreatLivePhotosAsStills; // ivar: _shouldTreatLivePhotosAsStills
@property (readonly, weak, nonatomic) NSObject<PUPhotosGridDownloadUpdateHandler> *updateHandler; // ivar: _updateHandler


+(id)createAlertControllerForDownloadError:(id)arg0 withAsset:(id)arg1 ;
-(BOOL)isAnyPickerAssetDownloading:(id)arg0 ;
-(id)_defaultOptions;
-(id)_downloadContextForIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithGridViewController:(id)arg0 ;
-(id)initWithUpdateHandler:(id)arg0 ;
-(void)_cancelPreviousDownloadsForAsset:(id)arg0 ;
-(void)_checkIfRetrievalIsRequiredForResourceRequest:(id)arg0 completion:(id)arg1 ;
-(void)_downloadForRequest:(id)arg0 didCompleteWithSuccess:(BOOL)arg1 canceled:(BOOL)arg2 error:(id)arg3 ;
-(void)_removeDownloadRequestForIdentifier:(id)arg0 ;
-(void)_setDownloadContext:(id)arg0 forIdentifier:(id)arg1 ;
-(void)_startRetrievingRequiredResourcesForRequest:(id)arg0 options:(id)arg1 inCollection:(id)arg2 ;
-(void)_updateDownloadProgressForAsset:(id)arg0 ;
-(void)cancelAllDownloads;
-(void)cancelDownloadForIdentifier:(id)arg0 ;
-(void)handleDownloadOfAssetIfNeeded:(id)arg0 inCollection:(id)arg1 withSuccessHandler:(id)arg2 ;


@end


#endif