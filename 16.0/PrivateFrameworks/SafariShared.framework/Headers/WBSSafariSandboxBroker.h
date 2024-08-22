// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSSAFARISANDBOXBROKER_H
#define WBSSAFARISANDBOXBROKER_H

@protocol WBSSafariSandboxBrokerProtocol, OS_os_log;

#import <Foundation/Foundation.h>


@interface WBSSafariSandboxBroker : NSObject <WBSSafariSandboxBrokerProtocol>



@property (readonly, nonatomic) ? auditToken; // ivar: _auditToken
@property (readonly, nonatomic) NSObject<OS_os_log> *log; // ivar: _log
@property (readonly, nonatomic) int pid; // ivar: _pid


-(id)initWithPID:(int)arg0 auditToken:(struct ? )arg1 ;


@end


#endif