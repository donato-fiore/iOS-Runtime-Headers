// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IOUSBHOSTCICONTROLLERSTATEMACHINE_H
#define IOUSBHOSTCICONTROLLERSTATEMACHINE_H


#import <Foundation/Foundation.h>

#import "IOUSBHostControllerInterface.h"

@interface IOUSBHostCIControllerStateMachine : NSObject

@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface; // ivar: _controllerInterface
@property (nonatomic) int controllerState; // ivar: _controllerState
@property (nonatomic) NSUInteger lastFrameNumber; // ivar: _lastFrameNumber
@property (nonatomic) NSUInteger lastFrameTimestamp; // ivar: _lastFrameTimestamp


-(BOOL)enqueueUpdatedFrame:(NSUInteger)arg0 timestamp:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)inspectCommand:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
-(BOOL)processCommand:(struct IOUSBHostCIMessage *)arg0 readonly:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 error:(*id)arg2 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 frame:(NSUInteger)arg2 timestamp:(NSUInteger)arg3 error:(*id)arg4 ;
-(id)description;
-(id)initWithInterface:(id)arg0 error:(*id)arg1 ;


@end


#endif