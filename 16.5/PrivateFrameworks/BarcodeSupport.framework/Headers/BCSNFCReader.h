// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSNFCREADER_H
#define BCSNFCREADER_H

@class NFReaderSession, NSMutableArray, CPSClipRequest, NSTimer, NSString;
@protocol NFReaderSessionDelegate, BCSNFCReaderDelegate, OS_dispatch_queue, NFSession, OS_os_transaction;

#import <Foundation/Foundation.h>

#import "BCSNotificationService.h"

@interface BCSNFCReader : NSObject <NFReaderSessionDelegate>

 {
    id<BCSNFCReaderDelegate> *_delegate;
    NSInteger _state;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_disconnectQueue;
    id<NFSession> *_tentativeSession;
    NFReaderSession *_session;
    NSMutableArray *_urlQueue;
    CPSClipRequest *_clipRequest;
    NSTimer *_reactivateTimer;
    NSObject<OS_os_transaction> *_transaction;
    NSInteger _sessionErrorCount;
    BOOL _debouncedTagNotNDEFFormattedError;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat dismissProxCardReactivationDelay; // ivar: _dismissProxCardReactivationDelay
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) BCSNotificationService *notificationService; // ivar: _notificationService
@property (nonatomic) CGFloat postNotificationReactivationDelay; // ivar: _postNotificationReactivationDelay
@property (readonly, nonatomic) NSInteger state;
@property (readonly) Class superclass;


-(BOOL)_isWaiting;
-(BOOL)_readTag:(id)arg0 ;
-(BOOL)_startPolling;
-(id)initWithDelegate:(id)arg0 ;
-(void)_didDetectTags:(id)arg0 ;
-(void)_didFindLink;
-(void)_disconnectTag;
-(void)_disconnectTagAndBlockReadingUntilRemoved;
-(void)_performBlockOnQueue:(id)arg0 ;
-(void)_processNextURL;
-(void)_requestAppClipForURLRecord:(id)arg0 ;
-(void)_requestNotificationForURLRecord:(id)arg0 ;
-(void)_restart;
-(void)_restartPolling;
-(void)_scheduleReactivationWithDelay:(CGFloat)arg0 ;
-(void)_startProcessingURLs;
-(void)_startReading;
-(void)_stopPolling;
-(void)_stopReadingAndTransitionToState:(NSInteger)arg0 ;
-(void)dealloc;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)readerSession:(id)arg0 externalReaderFieldNotification:(id)arg1 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg0 reason:(id)arg1 ;
-(void)startReading;
-(void)stopReading;


@end


#endif