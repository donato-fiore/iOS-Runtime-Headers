// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPKPMUBUTTONLISTENER_H
#define NPKPMUBUTTONLISTENER_H



#import "NPKButtonListener.h"

@interface NPKPMUButtonListener : NPKButtonListener

@property (nonatomic) *__IOHIDEventSystemClient hidSystemClient; // ivar: _hidSystemClient


-(id)init;
-(void)_handleButtonEvent:(struct __IOHIDEvent *)arg0 ;
-(void)_initializeHIDClient;
-(void)dealloc;


@end


#endif