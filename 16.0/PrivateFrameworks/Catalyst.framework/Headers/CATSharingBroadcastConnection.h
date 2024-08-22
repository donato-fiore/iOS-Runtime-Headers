// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CATSHARINGBROADCASTCONNECTION_H
#define CATSHARINGBROADCASTCONNECTION_H

@class NSError, NSString;
@protocol CATSharingConnection, CATSharingBroadcastPrimitives, CATTimerSource, CATTimer, CATSharingConnectionDelegate;

#import <Foundation/Foundation.h>

#import "CATOperationQueue.h"
#import "CATSharingDevice.h"

@interface CATSharingBroadcastConnection : NSObject <CATSharingConnection>

 {
    id<CATSharingBroadcastPrimitives> *mBroadcastPrimitives;
    BOOL mIsClosing;
    id<CATTimerSource> *mTimerSource;
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


-(id)initWithBroadcastPrimitives:(id)arg0 timerSource:(id)arg1 ;
-(void)_close;
-(void)_sendData:(id)arg0 completion:(id)arg1 ;
-(void)addBroadcastPrimitiveHandlers;
-(void)close;
-(void)closeWithError:(id)arg0 reportToRemote:(BOOL)arg1 ;
-(void)handleCloseMessage:(id)arg0 ;
-(void)handleSentMessage:(id)arg0 ;
-(void)handleUnparsableMessageDictionary:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)removeBroadcastPrimitiveHandlers;
-(void)sendData:(id)arg0 completion:(id)arg1 ;
-(void)sendMessage:(id)arg0 completion:(id)arg1 ;
-(void)sendTearDownMessageWithError:(id)arg0 ;
-(void)tombstoneWithError:(id)arg0 ;


@end


#endif