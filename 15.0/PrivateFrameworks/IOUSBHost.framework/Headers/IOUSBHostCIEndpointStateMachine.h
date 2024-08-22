// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTCIENDPOINTSTATEMACHINE_H
#define IOUSBHOSTCIENDPOINTSTATEMACHINE_H


#import <Foundation/Foundation.h>

#import "IOUSBHostControllerInterface.h"

@interface IOUSBHostCIEndpointStateMachine : NSObject

@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface; // ivar: _controllerInterface
@property (nonatomic) *IOUSBHostCIMessage currentTransferMessage; // ivar: _currentTransferMessage
@property (nonatomic) NSUInteger deviceAddress; // ivar: _deviceAddress
@property (nonatomic) NSUInteger endpointAddress; // ivar: _endpointAddress
@property (nonatomic) int endpointState; // ivar: _endpointState
@property (nonatomic) int endpointType; // ivar: _endpointType


-(BOOL)enqueueTransferCompletionForMessage:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 transferLength:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)inspectCommand:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
-(BOOL)processCommand:(struct IOUSBHostCIMessage *)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)processDoorbell:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 error:(*id)arg2 ;
-(id)initWithInterface:(id)arg0 command:(struct IOUSBHostCIMessage *)arg1 error:(*id)arg2 ;


@end


#endif