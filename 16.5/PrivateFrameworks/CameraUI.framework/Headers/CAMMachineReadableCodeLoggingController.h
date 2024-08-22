// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CAMMACHINEREADABLECODELOGGINGCONTROLLER_H
#define CAMMACHINEREADABLECODELOGGINGCONTROLLER_H


#import <Foundation/Foundation.h>


@interface CAMMachineReadableCodeLoggingController : NSObject

@property (nonatomic, setter=_setSeenMachineReadableObjectInNonActiveState:) BOOL _seenMachineReadableObjectInNonActiveState; // ivar: __seenMachineReadableObjectInNonActiveState
@property (nonatomic, setter=_setSeenMachineReadableObjectOfAcceptableSize:) BOOL _seenMachineReadableObjectOfAcceptableSize; // ivar: __seenMachineReadableObjectOfAcceptableSize
@property (nonatomic, setter=_setSeenMachineReadableObjectOfUnacceptableSize:) BOOL _seenMachineReadableObjectOfUnacceptableSize; // ivar: __seenMachineReadableObjectOfUnacceptableSize


-(id)init;
-(void)logMachineReadableCodeResult:(id)arg0 isOfSignificantSize:(BOOL)arg1 ;
-(void)logMachineReadableCodeResultDuringInactiveAppState;
-(void)resetLoggingState;


@end


#endif