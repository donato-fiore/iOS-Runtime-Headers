// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHASSERTIONSERVICE_H
#define BLSHASSERTIONSERVICE_H


#import <Foundation/Foundation.h>

#import "BLSHXPCAssertionServiceHostServer.h"
#import "BLSHLocalAssertionService.h"

@interface BLSHAssertionService : NSObject {
    BLSHXPCAssertionServiceHostServer *_server;
}


@property (readonly, nonatomic) BLSHLocalAssertionService *localAssertionService; // ivar: _localAssertionService


+(id)serviceForService:(id)arg0 withOSInterfaceProvider:(id)arg1 ;
-(id)initWithService:(id)arg0 osInterfaceProvider:(id)arg1 ;


@end


#endif