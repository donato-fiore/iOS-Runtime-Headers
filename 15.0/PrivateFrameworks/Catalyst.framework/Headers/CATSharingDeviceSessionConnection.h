// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CATSHARINGDEVICESESSIONCONNECTION_H
#define CATSHARINGDEVICESESSIONCONNECTION_H

@class NSError, NSString;
@protocol CATSharingConnection, CATSharingDeviceSession, CATTimerSource, CATTimer, CATSharingConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CATOperationQueue.h"
#import "CATSharingDevice.h"

@interface CATSharingDeviceSessionConnection : NSObject <CATSharingConnection>

 {
    id<CATSharingDeviceSession> *mDeviceSession;
    id<CATTimerSource> *mTimerSource;
    BOOL mIsClosing;
    id<CATTimer> *mTombstoneTimer;
    CATOperationQueue *mOutgoingQueue;
    CATOperationQueue *mCatalystQueue;
}


@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (retain, nonatomic) NSError *closedError; // ivar: _closedError
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CATSharingConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CATSharingDevice *remoteDevice;
@property (readonly) Class superclass;


-(id)initWithDeviceSession:(id)arg0 timerSource:(id)arg1 ;
-(void)_close;
-(void)_sendData:(id)arg0 completion:(id)arg1 ;
-(void)addDeviceSessionHandlers;
-(void)close;
-(void)closeWithError:(id)arg0 reportToRemote:(BOOL)arg1 ;
-(void)didReceiveMessage:(id)arg0 ;
-(void)handleCloseMessage:(id)arg0 ;
-(void)handleSentMessage:(id)arg0 ;
-(void)handleUnparsableMessageDictionary:(id)arg0 ;
-(void)removeDeviceSessionHandlers;
-(void)sendData:(id)arg0 completion:(id)arg1 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;
-(void)sendTearDownMessageWithError:(id)arg0 ;
-(void)tombstoneWithError:(id)arg0 ;


@end


#endif