// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXIPCDELAYEDMESSAGE_H
#define AXIPCDELAYEDMESSAGE_H


#import <Foundation/Foundation.h>

#import "AXIPCMessage.h"

@interface AXIPCDelayedMessage : NSObject

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (retain, nonatomic) AXIPCMessage *message; // ivar: _message


-(id)initWithMessage:(id)arg0 completion:(id)arg1 ;


@end


#endif