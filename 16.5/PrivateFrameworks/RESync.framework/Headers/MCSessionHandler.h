// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCSESSIONHANDLER_H
#define MCSESSIONHANDLER_H

@class NSString, NSLock, NSMutableDictionary, NSMutableArray, MCSession;
@protocol MCSessionPrivateDelegate;

#import <Foundation/Foundation.h>


@interface MCSessionHandler : NSObject <MCSessionPrivateDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) *void handles; // ivar: _handles
@property (retain, nonatomic) NSLock *handlesLock; // ivar: _handlesLock
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<MCSessionPrivateDelegate> *nextDelegate; // ivar: _nextDelegate
@property (retain, nonatomic) NSMutableDictionary *peersToHandles; // ivar: _peersToHandles
@property (retain, nonatomic) NSMutableArray *pendingData; // ivar: _pendingData
@property (nonatomic) *void protocolLayer; // ivar: _protocolLayer
@property (retain, nonatomic) MCSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) DynamicArray<unsigned char> tempBuf; // ivar: _tempBuf


-(id)dataForPacket:(*void)arg0 channel:(unsigned char)arg1 ;
-(id)initWithSession:(id)arg0 protocolLayer:(*void)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)session:(id)arg0 didFinishReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 atURL:(id)arg3 withError:(id)arg4 propagate:(*BOOL)arg5 ;
-(void)session:(id)arg0 didReceiveData:(id)arg1 fromPeer:(id)arg2 propagate:(*BOOL)arg3 ;
-(void)session:(id)arg0 didReceiveStream:(id)arg1 withName:(id)arg2 fromPeer:(id)arg3 propagate:(*BOOL)arg4 ;
-(void)session:(id)arg0 didStartReceivingResourceWithName:(id)arg1 fromPeer:(id)arg2 withProgress:(id)arg3 propagate:(*BOOL)arg4 ;
-(void)session:(id)arg0 peer:(id)arg1 didChangeState:(NSInteger)arg2 propagate:(*BOOL)arg3 ;


@end


#endif