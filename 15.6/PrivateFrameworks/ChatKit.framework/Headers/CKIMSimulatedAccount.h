// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKIMSIMULATEDACCOUNT_H
#define CKIMSIMULATEDACCOUNT_H

@class IMAccount, IMHandle;



@interface CKIMSimulatedAccount : IMAccount

@property (retain, nonatomic) IMHandle *loginHandle; // ivar: _loginHandle


-(id)loginIMHandle;


@end


#endif