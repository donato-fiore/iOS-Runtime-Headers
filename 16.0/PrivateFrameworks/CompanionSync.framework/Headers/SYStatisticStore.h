// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SYSTATISTICSTORE_H
#define SYSTATISTICSTORE_H

@class NSString, NSOperationQueue, NSSet, NSURL;
@protocol NSFilePresenter, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SYStatisticStore : NSObject <NSFilePresenter>

 {
    NSString *_path;
    *sqlite3 _db;
    *sqlite3_stmt _insertIncoming;
    *sqlite3_stmt _addProcessingTimeIncoming;
    *sqlite3_stmt _addErrorIncoming;
    *sqlite3_stmt _markCompleteIncoming;
    *sqlite3_stmt _insertOutgoing;
    *sqlite3_stmt _updateOutgoingIdentifier;
    *sqlite3_stmt _updateOutgoing;
    *sqlite3_stmt _timestampForID;
    *sqlite3_stmt _reserveRowID;
    *sqlite3_stmt _responseReceived;
    *sqlite3_stmt _requestAcked;
    *sqlite3_stmt _logFileActivity;
    *sqlite3_stmt _updateFileOutgoing;
    NSInteger _lastIncomingRowID;
    NSObject<OS_dispatch_queue> *_preemption_queue;
    NSObject<OS_dispatch_queue> *_operations_queue;
    NSOperationQueue *_presenterOperationQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


+(id)sharedInstance;
+(id)unpackMessageData:(id)arg0 ;
-(BOOL)_LOCKED_pruneFileTransferLogForServices:(id)arg0 ;
-(BOOL)_LOCKED_pruneMessageLogForServices:(id)arg0 ;
-(BOOL)_openDBFile:(BOOL)arg0 ;
-(BOOL)_tableEmpty:(id)arg0 ;
-(CGFloat)_getMachTimestamp;
-(NSUInteger)rowIDForPartialMessage:(id)arg0 ;
-(id)_LOCKED_allServiceNames;
-(id)_keySetForMessageLogTable;
-(id)_openDBIfNecessary;
-(id)_unpackMessageData:(id)arg0 ;
-(id)_unpackMetadata:(id)arg0 ;
-(id)init;
-(id)initWithPath:(id)arg0 ;
-(id)operationQ;
-(int)_closeDB;
-(int)_getSchemaVersion;
-(struct sqlite3 *)dbRef;
-(void)_ensureCorrectFileOwnership:(id)arg0 ;
-(void)_initializeFilePresentation;
-(void)_letGoForUnitTests:(id)arg0 ;
-(void)_onQueueAsync:(id)arg0 ;
-(void)_onQueueSync:(id)arg0 ;
-(void)_openDB;
-(void)_pruneOldData;
-(void)_unpackPBRequest:(id)arg0 forMessageID:(unsigned short)arg1 intoDictionary:(id)arg2 ;
-(void)_unpackPBResponse:(id)arg0 forMessageID:(unsigned short)arg1 intoDictionary:(id)arg2 ;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)assignIdentifier:(id)arg0 toOutgoingMessage:(id)arg1 ;
-(void)confirmDeliveryOfOutgoingFileTransfer:(id)arg0 ;
-(void)confirmDeliveryOfOutgoingMessage:(id)arg0 ;
-(void)dealloc;
-(void)markLastIncomingMessageComplete;
-(void)presentedItemDidMoveToURL:(id)arg0 ;
-(void)recordIncomingFileTransferAtURL:(id)arg0 metadata:(id)arg1 identifier:(id)arg2 forService:(id)arg3 ;
-(void)recordIncomingMessage:(id)arg0 forService:(id)arg1 ;
-(void)recordOutgoingFileTransferAtURL:(id)arg0 metadata:(id)arg1 identifier:(id)arg2 error:(id)arg3 forService:(id)arg4 ;
-(void)recordOutgoingMessage:(id)arg0 forService:(id)arg1 ;
-(void)setFileTransferIdentifier:(id)arg0 forOutgoingMessagesWithRowIDs:(id)arg1 ;
-(void)updateLastIncomingMessageWithError:(id)arg0 ;
-(void)updateLastIncomingMessageWithProcessingTime:(CGFloat)arg0 ;
-(void)updateOutgoingFileTransferWithIdentifier:(id)arg0 sentSuccessfully:(BOOL)arg1 error:(id)arg2 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg0 didReceiveResponse:(BOOL)arg1 error:(id)arg2 ;
-(void)updateOutgoingMessageWithIdentifier:(id)arg0 forService:(id)arg1 sentSuccessfully:(BOOL)arg2 sendError:(id)arg3 ;


@end


#endif