// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CUNFCSCANNER_H
#define CUNFCSCANNER_H

@class NFTag, NSMutableArray, NFReaderSession, NSString;
@protocol NFReaderSessionDelegate, OS_dispatch_queue, OS_dispatch_source, NFSession;

#import <Foundation/Foundation.h>

#import "CURetrier.h"

@interface CUNFCScanner : NSObject <NFReaderSessionDelegate>

 {
    BOOL _invalidateCalled;
    NSObject<OS_dispatch_queue> *_nfcDispatchQueue;
    NFTag *_nfcConnectedTag;
    NSMutableArray *_nfcDevices;
    BOOL _nfcPollingHW;
    NSObject<OS_dispatch_source> *_nfcPollTimer;
    CURetrier *_nfcRetrier;
    NFReaderSession *_nfcSession;
    BOOL _nfcStarted;
    NSObject<NFSession> *_nfcTempSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (copy, nonatomic) id *foundDeviceHandler; // ivar: _foundDeviceHandler
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) id *lostDeviceHandler; // ivar: _lostDeviceHandler
@property (nonatomic) BOOL pauseWhenFound; // ivar: _pauseWhenFound
@property (readonly) Class superclass;


-(BOOL)_pollTag:(id)arg0 ;
-(id)_parseRecord:(id)arg0 ;
-(id)_readTag:(id)arg0 ;
-(id)init;
-(void)_ensureSessionStarted;
-(void)_ensureSessionStopped;
-(void)_handleSessionStarted:(id)arg0 error:(id)arg1 ;
-(void)_handleTagFound:(id)arg0 ;
-(void)_invalidateWithError:(id)arg0 ;
-(void)_pause;
-(void)_pollTags;
-(void)_updatePolling;
-(void)activate;
-(void)invalidate;
-(void)pause;
-(void)readerSession:(id)arg0 didDetectTags:(id)arg1 ;
-(void)readerSessionDidEndUnexpectedly:(id)arg0 ;
-(void)resume;


@end


#endif