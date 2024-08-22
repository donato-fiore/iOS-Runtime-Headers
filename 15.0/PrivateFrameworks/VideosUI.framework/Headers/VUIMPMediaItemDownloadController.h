// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIMPMEDIAITEMDOWNLOADCONTROLLER_H
#define VUIMPMEDIAITEMDOWNLOADCONTROLLER_H

@class MPMediaItem, NSHashTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "VUIMPMediaItemDownloadControllerState.h"

@interface VUIMPMediaItemDownloadController : NSObject

@property (retain, nonatomic) MPMediaItem *mediaItem; // ivar: _mediaItem
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *observerDispatchQueue; // ivar: _observerDispatchQueue
@property (retain, nonatomic) NSHashTable *observers; // ivar: _observers
@property (readonly, nonatomic, getter=isRestoreDownload) BOOL restoreDownload;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialProcessingDispatchQueue; // ivar: _serialProcessingDispatchQueue
@property (copy, nonatomic) VUIMPMediaItemDownloadControllerState *state; // ivar: _state
@property (readonly, nonatomic) BOOL supportsCancellation;
@property (readonly, nonatomic) BOOL supportsPausing;


-(id)init;
-(id)initWithMediaItem:(id)arg0 state:(id)arg1 serialProcessingDispatchQueue:(id)arg2 ;
-(void)_enqueueAsyncProcessingQueueBlock:(id)arg0 ;
-(void)_enqueueAsyncStrongSelfProcessingQueueBlock:(id)arg0 ;
-(void)_enqueueObserverQueueBlock:(id)arg0 ;
-(void)_notifyObservers:(id)arg0 stateDidChange:(id)arg1 ;
-(void)_onProcessingQueue_cancelDownload;
-(void)_onProcessingQueue_invalidate;
-(void)_onProcessingQueue_pauseDownload;
-(void)_onProcessingQueue_resumeDownload;
-(void)addObserver:(id)arg0 ;
-(void)cancelDownload;
-(void)invalidate;
-(void)pauseDownload;
-(void)removeObserver:(id)arg0 ;
-(void)resumeDownload;


@end


#endif