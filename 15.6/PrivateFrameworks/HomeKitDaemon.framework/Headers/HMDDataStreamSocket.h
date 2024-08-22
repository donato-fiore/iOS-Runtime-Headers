// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATASTREAMSOCKET_H
#define HMDDATASTREAMSOCKET_H

@class NSString, HMFUnfairLock, NSMutableArray;
@protocol HMFLogging, HMDDataStreamSocketPrivate, HMDDataStreamSocketDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "HMDDataStreamStreamProtocol.h"

@interface HMDDataStreamSocket : NSObject <HMFLogging, HMDDataStreamSocketPrivate>



@property (readonly) NSString *applicationProtocolName; // ivar: _applicationProtocolName
@property (nonatomic, getter=isClosed) BOOL closed; // ivar: _closed
@property (nonatomic, getter=isClosing) BOOL closing; // ivar: _closing
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDDataStreamSocketDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFUnfairLock *lock; // ivar: _lock
@property (readonly) NSMutableArray *pendingReads; // ivar: _pendingReads
@property (readonly, weak) HMDDataStreamStreamProtocol *streamProtocol; // ivar: _streamProtocol
@property (readonly) Class superclass;
@property NSUInteger trafficClass; // ivar: _trafficClass
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)writeData:(id)arg0 error:(*id)arg1 ;
-(id)initWithStreamProtocol:(id)arg0 applicationProtocolName:(id)arg1 workQueue:(id)arg2 ;
-(id)readData;
-(void)_writeData:(id)arg0 completion:(id)arg1 ;
-(void)close;
-(void)closeInitiated;
-(void)closeWithError:(id)arg0 ;
-(void)handleIncomingData:(id)arg0 ;
-(void)writeData:(id)arg0 completion:(id)arg1 ;


@end


#endif