// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSVMEDIACONTENTTASTECONTROLLER_H
#define SSVMEDIACONTENTTASTECONTROLLER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SSVMediaContentTasteController : NSObject {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    NSObject<OS_dispatch_queue> *_calloutSerialQueue;
    NSUInteger _currentResponseRevisionID;
    NSUInteger _lastNotificationReceivedResponseRevisionID;
    BOOL _havePendingRetryOperation;
    int _itemsDidChangeNotifyToken;
    int _exponentialBackOffSeconds;
    NSInteger _pendingMutateRequestCount;
    NSMutableDictionary *_playlistGlobalIDToContentTasteItem;
    NSMutableDictionary *_playlistGlobalIDToPendingContentTasteItem;
    NSMutableDictionary *_contentTasteItemsToRetry;
    NSMutableDictionary *_storeAdamIDToContentTasteItem;
    NSMutableDictionary *_storeAdamIDToPendingContentTasteItem;
}




+(id)defaultMediaTasteController;
-(BOOL)_isRetryableError:(id)arg0 ;
-(NSUInteger)contentTasteTypeForPlaylistGlobalID:(id)arg0 ;
-(NSUInteger)contentTasteTypeForStoreAdamID:(NSInteger)arg0 ;
-(id)init;
-(void)_contentTasteForItemUpdate:(id)arg0 finishedWithError:(id)arg1 ;
-(void)_handleContentTasteItemsUpdateResponse:(id)arg0 allowNotifications:(BOOL)arg1 ;
-(void)_refreshContentTasteItems;
-(void)_retryOperationForItemUpdates:(id)arg0 finishedWithError:(id)arg1 ;
-(void)_scheduleContentTasteUpdateOperationForFailedItems;
-(void)_sendUpdateWithItemUpdates:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)setContentTasteType:(NSUInteger)arg0 forPlaylistGlobalID:(id)arg1 withCompletionHandler:(id)arg2 ;
-(void)setContentTasteType:(NSUInteger)arg0 forStoreAdamID:(NSInteger)arg1 withContentType:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif