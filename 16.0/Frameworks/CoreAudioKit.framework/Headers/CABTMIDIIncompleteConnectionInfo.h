// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CABTMIDIINCOMPLETECONNECTIONINFO_H
#define CABTMIDIINCOMPLETECONNECTIONINFO_H


#import <Foundation/Foundation.h>

#import "AMSBTLEPeripheral.h"

@interface CABTMIDIIncompleteConnectionInfo : NSObject

@property (getter=isConnecting) BOOL connecting; // ivar: _connecting
@property (retain, nonatomic) AMSBTLEPeripheral *peripheral; // ivar: _peripheral
@property NSUInteger timeOutInterval; // ivar: _timeOutInterval


-(id)initWithPeripheral:(id)arg0 isConnecting:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif