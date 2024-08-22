// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTIINPUTSYSTEMSOURCESESSION_H
#define RTIINPUTSYSTEMSOURCESESSION_H

@class NSString;
@protocol RTIInputSystemPayloadDelegate;


#import "RTIInputSystemSession.h"
#import "RTIDataPayload.h"

@interface RTIInputSystemSourceSession : RTIInputSystemSession <RTIInputSystemPayloadDelegate>



@property (readonly, copy, nonatomic) RTIDataPayload *currentForwardingDataPayload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<RTIInputSystemPayloadDelegate> *forwardingPayloadDelegate; // ivar: _forwardingPayloadDelegate
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<RTIInputSystemPayloadDelegate> *payloadDelegate; // ivar: _payloadDelegate
@property (readonly, nonatomic) NSUInteger payloadVersion; // ivar: _payloadVersion
@property (readonly) Class superclass;


-(id)init;
-(id)sessionIndependentPayloadDelegate;
-(void)addSessionDelegate:(id)arg0 ;
-(void)flushOperations;
-(void)handleForwardingResponseActionPayload:(id)arg0 ;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)notifySessionDelegateDidBegin:(id)arg0 ;
-(void)setSessionDelegate:(id)arg0 ;


@end


#endif