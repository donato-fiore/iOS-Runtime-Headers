// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef XRCOURIERAGENT_H
#define XRCOURIERAGENT_H

@class NSDictionary, NSString, XRMobileAgent<XRMobileAgentOwner>;
@protocol XRMobileAgentVisitor, XRMinorFrameAgent;


#import "XRMobileAgent.h"

@interface XRCourierAgent : XRMobileAgent <XRMobileAgentVisitor, XRMinorFrameAgent>



@property (readonly, nonatomic) NSDictionary *details; // ivar: _details
@property (readonly, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSDictionary *reply; // ivar: _reply
@property (retain, nonatomic) XRMobileAgent<XRMobileAgentOwner> *roomOwner; // ivar: _roomOwner
@property (nonatomic) *uint8_t yieldNow;


+(id)sendCourierToVisitWaitingRoom:(id)arg0 message:(id)arg1 details:(id)arg2 ;
+(id)sendCourierToVisitWaitingRoom:(id)arg0 message:(id)arg1 details:(id)arg2 replyStop:(id)arg3 replyTicket:(id)arg4 ;
-(id)agentDiagnosticsName;
-(id)init;
-(id)initWithMessage:(id)arg0 details:(id)arg1 ;
-(void)executeStopOnItinerary:(id)arg0 ;
-(void)sendToWaitingRoom:(id)arg0 ;
-(void)sendToWaitingRoom:(id)arg0 replyStop:(id)arg1 replyTicket:(id)arg2 ;


@end


#endif