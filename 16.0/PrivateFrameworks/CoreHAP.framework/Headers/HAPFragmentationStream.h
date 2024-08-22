// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAPFRAGMENTATIONSTREAM_H
#define HAPFRAGMENTATIONSTREAM_H

@class HMFObject, NSNumber, NSMutableOrderedSet;
@protocol OS_dispatch_queue, HAPFragmentationStreamDelegate;



@interface HAPFragmentationStream : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (retain, nonatomic) NSNumber *currentPacketTransactionIdentifier; // ivar: _currentPacketTransactionIdentifier
@property (weak) NSObject<HAPFragmentationStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableOrderedSet *pendingPackets; // ivar: _pendingPackets


+(id)fragmentationPacketsForData:(id)arg0 maxLength:(NSUInteger)arg1 transactionIdentifier:(unsigned short)arg2 ;
-(BOOL)__isTransactionCompleteWithTransactionIdentifier:(unsigned short)arg0 ;
-(id)__filteredPacketsWithTransactionIdentifier:(unsigned short)arg0 ;
-(id)__transactionDataWithTransactionIdentifier:(unsigned short)arg0 ;
-(id)init;
-(void)__addFragmentationPacket:(id)arg0 ;
-(void)__removeAllPendingPacketsWithTransactionIdentifier:(unsigned short)arg0 ;
-(void)close;
-(void)open;
-(void)receivedFragmentedPacket:(id)arg0 ;


@end


#endif