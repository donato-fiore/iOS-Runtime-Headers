// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKAPISERVERDAEMON_H
#define MKAPISERVERDAEMON_H

@protocol OS_os_transaction;


#import "MKAPIServer.h"
#import "MKPowerAssertion.h"

@interface MKAPIServerDaemon : MKAPIServer {
    MKPowerAssertion *_power;
}


@property (retain, nonatomic) NSObject<OS_os_transaction> *transaction; // ivar: _transaction


-(id)init;
-(void)cancel;
-(void)dealloc;


@end


#endif