// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDDATASTREAMCONTROLPROTOCOL_H
#define HMDDATASTREAMCONTROLPROTOCOL_H

@class NSString, NSNumber;
@protocol HMFLogging, HMDDataStreamProtocol;

#import <Foundation/Foundation.h>


@interface HMDDataStreamControlProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL controlHandshakeComplete; // ivar: _controlHandshakeComplete
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL helloMessageResponseReceived; // ivar: _helloMessageResponseReceived
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain, nonatomic) NSNumber *peerDataStreamProtocolVersion; // ivar: _peerDataStreamProtocolVersion
@property (retain, nonatomic) NSNumber *pendingHelloMessageIdentifier; // ivar: _pendingHelloMessageIdentifier
@property (readonly) Class superclass;


+(id)logCategory;
-(BOOL)isExpectedHelloControlMessage:(id)arg0 header:(id)arg1 ;
-(id)initWithLogIdentifier:(id)arg0 ;
-(void)_sendHelloMessageOnDataStream:(id)arg0 ;
-(void)_sendVersionRequestOnDataStream:(id)arg0 ;
-(void)dataStream:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataStream:(id)arg0 didReceiveEvent:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveRequest:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveResponse:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStreamDidClose:(id)arg0 ;
-(void)dataStreamDidOpen:(id)arg0 ;
-(void)dataStreamInitiatedClose:(id)arg0 ;


@end


#endif