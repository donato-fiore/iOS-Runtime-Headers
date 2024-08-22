// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XRMOBILEAGENT_H
#define XRMOBILEAGENT_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "XRMobileAgentItinerary.h"

@interface XRMobileAgent : NSObject {
    id *_ticket;
    unsigned int _desiredQoS;
}


@property (readonly, nonatomic) NSString *agentDiagnosticsName;
@property (readonly, nonatomic) unsigned int desiredQoS;
@property (readonly, nonatomic) XRMobileAgentItinerary *itinerary; // ivar: _itinerary
@property (readonly, nonatomic) NSObject<OS_os_log> *loggingHandle;
@property (retain, nonatomic) NSString *mode; // ivar: _mode
@property (readonly, nonatomic) int movementType; // ivar: _movementType


+(void)initialize;
-(BOOL)holdsItinerary:(id)arg0 ;
-(id)activateUsingCompletionOperationAtStop:(id)arg0 activationTicket:(id)arg1 ;
-(id)init;
-(id)ticket;
-(int)nextMovementType;
-(void)__park;
-(void)activateAtStop:(id)arg0 activationTicket:(id)arg1 activationQoS:(unsigned int)arg2 finalDestination:(id)arg3 finalTicket:(id)arg4 ;
-(void)activateAtStop:(id)arg0 activationTicket:(id)arg1 finalDestination:(id)arg2 finalTicket:(id)arg3 ;
-(void)activateWithFinalDestination:(id)arg0 ticket:(id)arg1 ;
-(void)deactivated;
-(void)executeStopOnItinerary:(id)arg0 ;
-(void)goodbye;
-(void)hello;


@end


#endif