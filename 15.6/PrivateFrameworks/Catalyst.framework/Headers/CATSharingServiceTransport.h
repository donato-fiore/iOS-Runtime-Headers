// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CATSHARINGSERVICETRANSPORT_H
#define CATSHARINGSERVICETRANSPORT_H

@class NSMutableArray, NSString;
@protocol CATSharingConnectionDelegate, CATSharingConnection;


#import "CATTransport.h"
#import "CATOperationQueue.h"

@interface CATSharingServiceTransport : CATTransport <CATSharingConnectionDelegate>

 {
    id<CATSharingConnection> *mConnection;
    CATOperationQueue *mCatalystQueue;
    NSMutableArray *mReceivedMessages;
    BOOL mIsActive;
    BOOL mIsInvalidated;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithConnection:(id)arg0 ;
-(id)name;
-(id)operationToSendMessage:(id)arg0 ;
-(void)connection:(id)arg0 receivedData:(id)arg1 ;
-(void)connectionClosed:(id)arg0 ;
-(void)invalidateConnection;
-(void)invalidateIfNeeded;
-(void)processReceivedMessages;
-(void)resumeConnection;
-(void)suspendConnection;


@end


#endif