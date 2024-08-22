// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IOUSBHOSTCIPORTSTATEMACHINE_H
#define IOUSBHOSTCIPORTSTATEMACHINE_H


#import <Foundation/Foundation.h>

#import "IOUSBHostControllerInterface.h"

@interface IOUSBHostCIPortStateMachine : NSObject

@property (nonatomic) BOOL connected; // ivar: _connected
@property (retain, nonatomic) IOUSBHostControllerInterface *controllerInterface; // ivar: _controllerInterface
@property (readonly, nonatomic) int linkState; // ivar: _linkState
@property (nonatomic) BOOL overcurrent; // ivar: _overcurrent
@property (nonatomic) NSUInteger portNumber; // ivar: _portNumber
@property (nonatomic) int portState; // ivar: _portState
@property (nonatomic) unsigned int portStatus; // ivar: _portStatus
@property (nonatomic) BOOL powered; // ivar: _powered
@property (readonly, nonatomic) int speed; // ivar: _speed


-(BOOL)inspectCommand:(struct IOUSBHostCIMessage *)arg0 error:(*id)arg1 ;
-(BOOL)processCommand:(struct IOUSBHostCIMessage *)arg0 readonly:(BOOL)arg1 commandResult:(int)arg2 error:(*id)arg3 ;
-(BOOL)respondToCommand:(struct IOUSBHostCIMessage *)arg0 status:(int)arg1 error:(*id)arg2 ;
-(BOOL)updateLinkState:(int)arg0 speed:(int)arg1 inhibitLinkStateChange:(BOOL)arg2 error:(*id)arg3 ;
-(id)description;
-(id)initWithInterface:(id)arg0 portNumber:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif