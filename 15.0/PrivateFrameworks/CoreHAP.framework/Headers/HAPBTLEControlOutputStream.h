// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPBTLECONTROLOUTPUTSTREAM_H
#define HAPBTLECONTROLOUTPUTSTREAM_H

@class HMFObject, NSOperationQueue, NSData;
@protocol OS_dispatch_queue, HAPBTLEControlOutputStreamDelegate;


#import "HAPBTLETransactionIdentifier.h"

@interface HAPBTLEControlOutputStream : HMFObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue; // ivar: _clientQueue
@property (nonatomic, getter=isComplete) BOOL complete; // ivar: _complete
@property (copy, nonatomic) id *completionHandler;
@property (nonatomic) NSUInteger controlPayloadWrittenLength; // ivar: _controlPayloadWrittenLength
@property (weak) NSObject<HAPBTLEControlOutputStreamDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSUInteger mtuLength; // ivar: _mtuLength
@property (nonatomic, getter=isOpen) BOOL open; // ivar: _open
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, copy, nonatomic) NSData *payload; // ivar: _payload
@property (readonly, nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval
@property (readonly, nonatomic) HAPBTLETransactionIdentifier *transactionIdentifier; // ivar: _transactionIdentifier
@property (readonly, nonatomic) unsigned char type; // ivar: _type


+(id)shortDescription;
-(NSUInteger)remainingControlPayloadLength;
-(id)_nextPacketWithMaximumLength:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)debugDescription;
-(id)description;
-(id)descriptionWithPointer:(BOOL)arg0 ;
-(id)init;
-(id)initWithControlType:(unsigned char)arg0 transactionIdentifier:(id)arg1 controlPayload:(id)arg2 mtuLength:(NSUInteger)arg3 timeoutInterval:(CGFloat)arg4 ;
-(id)shortDescription;
-(void)_closeWithError:(id)arg0 ;
-(void)_complete;
-(void)_sendNextPayloadFragmentWithCompletionHandler:(id)arg0 ;
-(void)close;
-(void)open;
-(void)sendNextPayloadFragment;


@end


#endif