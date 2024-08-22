// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WPDATATRANSFER_H
#define WPDATATRANSFER_H

@class NSMutableData, NSUUID;

#import <Foundation/Foundation.h>


@interface WPDataTransfer : NSObject

@property (nonatomic) unsigned short currentDataSize; // ivar: _currentDataSize
@property (retain, nonatomic) NSMutableData *currentReceivedData; // ivar: _currentReceivedData
@property (retain, nonatomic) NSUUID *peerUUID; // ivar: _peerUUID
@property (nonatomic) BOOL receivedFirstPacket; // ivar: _receivedFirstPacket


-(BOOL)addNewData:(id)arg0 ;
-(id)initDataTransferForPeer:(id)arg0 ;
-(void)resetTransfer;


@end


#endif