// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef JXHTTPOPERATIONQUEUE_H
#define JXHTTPOPERATIONQUEUE_H

@class NSOperationQueue, NSNumber, NSMutableDictionary, NSDate, NSMutableSet, NSString;
@protocol OS_dispatch_queue, JXHTTPOperationQueueDelegate;



@interface JXHTTPOperationQueue : NSOperationQueue

@property (retain) NSObject<OS_dispatch_queue> *blockQueue; // ivar: _blockQueue
@property (retain) NSNumber *bytesDownloaded; // ivar: _bytesDownloaded
@property (retain) NSMutableDictionary *bytesDownloadedPerOperation; // ivar: _bytesDownloadedPerOperation
@property (retain) NSNumber *bytesUploaded; // ivar: _bytesUploaded
@property (retain) NSMutableDictionary *bytesUploadedPerOperation; // ivar: _bytesUploadedPerOperation
@property (weak) NSObject<JXHTTPOperationQueueDelegate> *delegate; // ivar: _delegate
@property (copy) id *didDownloadBlock; // ivar: _didDownloadBlock
@property (copy) id *didFinishBlock; // ivar: _didFinishBlock
@property (copy) id *didMakeProgressBlock; // ivar: _didMakeProgressBlock
@property (copy) id *didStartBlock; // ivar: _didStartBlock
@property (copy) id *didUploadBlock; // ivar: _didUploadBlock
@property (retain) NSNumber *downloadProgress; // ivar: _downloadProgress
@property (readonly) CGFloat elapsedSeconds;
@property (retain) NSNumber *expectedDownloadBytes; // ivar: _expectedDownloadBytes
@property (retain) NSMutableDictionary *expectedDownloadBytesPerOperation; // ivar: _expectedDownloadBytesPerOperation
@property (retain) NSNumber *expectedUploadBytes; // ivar: _expectedUploadBytes
@property (retain) NSMutableDictionary *expectedUploadBytesPerOperation; // ivar: _expectedUploadBytesPerOperation
@property (retain) NSDate *finishDate; // ivar: _finishDate
@property (retain) NSObject<OS_dispatch_queue> *observationQueue; // ivar: _observationQueue
@property (retain) NSMutableSet *observedOperationSet; // ivar: _observedOperationSet
@property BOOL performsBlocksOnMainQueue; // ivar: _performsBlocksOnMainQueue
@property (retain) NSObject<OS_dispatch_queue> *progressQueue; // ivar: _progressQueue
@property (retain) NSDate *startDate; // ivar: _startDate
@property (retain) NSString *uniqueString; // ivar: _uniqueString
@property (retain) NSNumber *uploadProgress; // ivar: _uploadProgress
@property (copy) id *willFinishBlock; // ivar: _willFinishBlock
@property (copy) id *willStartBlock; // ivar: _willStartBlock


+(id)sharedQueue;
-(id)blockForSelector:(SEL)arg0 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)performDelegateMethod:(SEL)arg0 ;


@end


#endif