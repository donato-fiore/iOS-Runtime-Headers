// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _RMSSESSIONRECORD_H
#define _RMSSESSIONRECORD_H


#import <Foundation/Foundation.h>

#import "RMSPowerAssertion.h"
#import "RMSRunAssertion.h"

@interface _RMSSessionRecord : NSObject

@property (retain, nonatomic) RMSPowerAssertion *powerAssertion; // ivar: _powerAssertion
@property (nonatomic) int refreshCount; // ivar: _refreshCount
@property (retain, nonatomic) RMSRunAssertion *runAssertion; // ivar: _runAssertion
@property (retain, nonatomic) id *session; // ivar: _session
@property (nonatomic) int timeout; // ivar: _timeout




@end


#endif