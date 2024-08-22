// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IOUSBHOSTCIDEVICESTATEMACHINE_H
#define IOUSBHOSTCIDEVICESTATEMACHINE_H


#import <Foundation/Foundation.h>

#import "IOUSBHostControllerInterface.h"

@interface IOUSBHostCIDeviceStateMachine : NSObject

@property (nonatomic) NSUInteger completeRoute; // ivar: _completeRoute
@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface; // ivar: _controllerInterface
@property (nonatomic) NSUInteger deviceAddress; // ivar: _deviceAddress
@property (nonatomic) int deviceState; // ivar: _deviceState


-(BOOL)inspectCommand:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
-(BOOL)processCommand:(struct IOUSBHostCIMessage *)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 deviceAddress:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 error:(*id)arg2 ;
-(id)initWithInterface:(id)arg0 command:(struct IOUSBHostCIMessage *)arg1 error:(*id)arg2 ;


@end


#endif