// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSIMULATEDACCOUNT_H
#define IMSIMULATEDACCOUNT_H



#import "IMAccount.h"
#import "IMHandle.h"

@interface IMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle; // ivar: _loginHandle


-(BOOL)isConnected;
-(BOOL)isOperational;
-(BOOL)supportsRegistration;
-(id)loginIMHandle;


@end


#endif