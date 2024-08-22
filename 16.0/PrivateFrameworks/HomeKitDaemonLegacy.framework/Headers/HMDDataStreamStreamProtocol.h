// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDATASTREAMSTREAMPROTOCOL_H
#define HMDDATASTREAMSTREAMPROTOCOL_H

@class NSString, NSMapTable;
@protocol HMFLogging, HMDDataStreamProtocol, HMDDataStreamProtocolDelegate;

#import <Foundation/Foundation.h>


@interface HMDDataStreamStreamProtocol : NSObject <HMFLogging, HMDDataStreamProtocol>



@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, weak) NSObject<HMDDataStreamProtocolDelegate> *dataStream; // ivar: _dataStream
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSMapTable *sockets; // ivar: _sockets
@property (readonly) Class superclass;


+(id)logCategory;
+(id)protocolName;
-(id)initWithDataStream:(id)arg0 ;
-(void)_closeAllSocketsWithError:(id)arg0 ;
-(void)_notifyActiveStatusChangedFromPreviousValue:(BOOL)arg0 ;
-(void)_reevaluateTrafficClassForDataStream;
-(void)dataStream:(id)arg0 didFailWithError:(id)arg1 ;
-(void)dataStream:(id)arg0 didReceiveEvent:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveRequest:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStream:(id)arg0 didReceiveResponse:(id)arg1 header:(id)arg2 payload:(id)arg3 ;
-(void)dataStreamDidClose:(id)arg0 ;
-(void)dataStreamDidOpen:(id)arg0 ;
-(void)dataStreamInitiatedClose:(id)arg0 ;
-(void)evaluateOptionsForSocket:(id)arg0 ;
-(void)registerSocket:(id)arg0 ;
-(void)sendData:(id)arg0 socket:(id)arg1 completion:(id)arg2 ;
-(void)unregisterSocket:(id)arg0 ;


@end


#endif