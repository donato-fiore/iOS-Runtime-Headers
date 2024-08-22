// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MMCSENGINE_H
#define MMCSENGINE_H

@class NSURL, NSString, NSDictionary, NSMutableDictionary, NSMutableArray, NSTimer, NSThread;
@protocol OS_dispatch_queue, MMCSEngineDelegate;

#import <Foundation/Foundation.h>


@interface MMCSEngine : NSObject {
    NSURL *_workPathURL;
    NSString *_appIDHeader;
    NSString *_dataClass;
    NSDictionary *_options;
    *_mmcs_engine _engine;
    ? _engineClientContext;
    NSMutableDictionary *_itemIDToAssetMap;
    NSObject<OS_dispatch_queue> *_itemIDToAssetMapQueue;
    NSMutableArray *_requestorContexts;
    NSObject<OS_dispatch_queue> *_reqestorContextQueue;
    NSMutableDictionary *_autoItemIDDictionary;
    NSURL *_autoItemIDPersistenceURL;
    NSObject<OS_dispatch_queue> *_autoItemIDDictionaryQueue;
}


@property (nonatomic) BOOL autoGenerateItemID; // ivar: _autoGenerateItemID
@property (weak, nonatomic) NSObject<MMCSEngineDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) BOOL hasOutstandingActivity;
@property (nonatomic) BOOL isDone; // ivar: _isDone
@property (nonatomic) BOOL isMetricsGatheringEnabled; // ivar: _isMetricsGatheringEnabled
@property (retain, nonatomic) NSTimer *threadKeepAliveTimer; // ivar: _threadKeepAliveTimer
@property (retain, nonatomic) NSThread *workThread; // ivar: _workThread


+(id)logStringForGetItemState:(int)arg0 ;
+(id)logStringForPutItemState:(int)arg0 ;
-(BOOL)_getFileDescriptorAndContentTypeFromItemID:(NSUInteger)arg0 outFD:(*int)arg1 outItemType:(*id)arg2 outError:(*id)arg3 ;
-(BOOL)isActive;
-(NSUInteger)_nextItemID;
-(id)_assetWithItemID:(NSUInteger)arg0 ;
-(id)initWithWorkPath:(id)arg0 appIDHeader:(id)arg1 dataClass:(id)arg2 options:(id)arg3 ;
-(id)initWithWorkPath:(id)arg0 appIDHeader:(id)arg1 dataClass:(id)arg2 options:(id)arg3 modes:(id)arg4 ;
-(void)_doNothingTimerHandler:(id)arg0 ;
-(void)_getItemDoneItemID:(NSUInteger)arg0 path:(id)arg1 requestorContext:(id)arg2 error:(id)arg3 ;
-(void)_getItemProgressItemID:(NSUInteger)arg0 state:(int)arg1 progress:(CGFloat)arg2 requestorContext:(id)arg3 error:(id)arg4 ;
-(void)_initItemIDPersistence;
-(void)_putItemDoneItemID:(NSUInteger)arg0 requestorContext:(id)arg1 putReceipt:(id)arg2 error:(id)arg3 ;
-(void)_putItemProgressItemID:(NSUInteger)arg0 state:(int)arg1 progress:(CGFloat)arg2 requestorContext:(id)arg3 error:(id)arg4 ;
-(void)_registerAsset:(id)arg0 ;
-(void)_registerRequestorContext:(id)arg0 ;
-(void)_removeAssetForItemID:(NSUInteger)arg0 ;
-(void)_removeRequestorContext:(id)arg0 ;
-(void)_requestCompletedRequestorContext:(id)arg0 ;
-(void)cancelAllOperations;
-(void)cancelOperationsWithContext:(id)arg0 ;
-(void)getAssets:(id)arg0 requestURL:(id)arg1 DSID:(id)arg2 options:(id)arg3 ;
-(void)performBlock:(id)arg0 ;
-(void)performBlockOnWorkThread:(id)arg0 ;
// -(void)performBlockOnWorkThread:(id)arg0 waitUntilDone:(unk)arg1  ;
-(void)putAssets:(id)arg0 requestURL:(id)arg1 DSID:(id)arg2 options:(id)arg3 ;
-(void)registerAssetForUpload:(id)arg0 completionBlock:(id)arg1 ;
-(void)registerAssets:(id)arg0 forDownloadCompletionBlock:(id)arg1 ;
-(void)reregisterAssetForDownload:(id)arg0 ;
-(void)reregisterAssetForUpload:(id)arg0 ;
-(void)shutDownCompletionBlock:(id)arg0 ;
-(void)threadMain:(id)arg0 ;
-(void)unregisterAsset:(id)arg0 ;
-(void)unregisterAssets:(id)arg0 ;


@end


#endif