// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATCONCRETEASSETLINK_H
#define ATCONCRETEASSETLINK_H

@class ATMessageLink, NSMutableArray, NSMutableSet, NSMutableDictionary, NSString;
@protocol ATAssetLink, ATMessageLinkObserver, OS_dispatch_queue, OS_dispatch_group, OS_dispatch_semaphore, ATAssetLinkDelegate;

#import <Foundation/Foundation.h>


@interface ATConcreteAssetLink : NSObject <ATAssetLink, ATMessageLinkObserver>

 {
    ATMessageLink *_messageLink;
    NSMutableArray *_outstandingAssets;
    NSMutableSet *_readers;
    NSMutableSet *_readersPendingStop;
    NSMutableDictionary *_readersToAssetsMap;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_readerQueue;
    NSObject<OS_dispatch_queue> *_fileIOQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_group> *_readersPendingStopGroup;
    int _pendingWriteAmount;
    NSObject<OS_dispatch_semaphore> *_pendingWriteSemaphore;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ATAssetLinkDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly) Class superclass;


-(BOOL)canEnqueueAsset:(id)arg0 ;
-(BOOL)linkIsReady;
-(BOOL)open;
-(NSUInteger)maximumBatchSize;
-(NSUInteger)priority;
-(id)_keyForATAssetInReaderMap:(id)arg0 ;
-(id)_urlForWritingAsset:(id)arg0 withFileName:(id)arg1 ;
-(id)enqueueAssets:(id)arg0 force:(BOOL)arg1 ;
-(id)initWithMessageLink:(id)arg0 ;
-(void)_finishAsset:(id)arg0 withError:(id)arg1 ;
-(void)_requestAsset:(id)arg0 ;
-(void)cancelAssets:(id)arg0 ;
-(void)close;
-(void)messageLinkWasClosed:(id)arg0 ;
-(void)prioritizeAsset:(id)arg0 ;


@end


#endif