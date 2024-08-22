// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PIPEDATATRANSFER_H
#define PIPEDATATRANSFER_H

@class NSUUID, NSMutableData, NSData;

#import <Foundation/Foundation.h>


@interface PipeDataTransfer : NSObject

@property (retain) NSUUID *peerUUID; // ivar: _peerUUID
@property unsigned short rxCurrentDataSize; // ivar: _rxCurrentDataSize
@property (retain) NSMutableData *rxCurrentReceivedData; // ivar: _rxCurrentReceivedData
@property (retain) NSData *rxData; // ivar: _rxData
@property BOOL rxFirstPacket; // ivar: _rxFirstPacket
@property unsigned char rxSeqNum; // ivar: _rxSeqNum
@property (retain) NSData *rxTotalDataToReceive; // ivar: _rxTotalDataToReceive
@property (retain) NSMutableData *rxTotalDataWithLen; // ivar: _rxTotalDataWithLen
@property unsigned short rxTotalLenToReceive; // ivar: _rxTotalLenToReceive
@property BOOL rxWaitForMoreData; // ivar: _rxWaitForMoreData
@property (retain) NSData *txData; // ivar: _txData
@property NSUInteger txDataLeftToSend; // ivar: _txDataLeftToSend
@property unsigned char txSeqNum; // ivar: _txSeqNum
@property (retain) NSData *txTotalDataToSend; // ivar: _txTotalDataToSend
@property unsigned short txTotalLenToSend; // ivar: _txTotalLenToSend


-(id)description;
-(id)initPipeDataTransferForPeer:(id)arg0 ;
-(unsigned char)generateSequenceNumber;
-(void)resetAllTransfer;
-(void)resetRxTransfer;
-(void)resetTxTransfer;


@end


#endif