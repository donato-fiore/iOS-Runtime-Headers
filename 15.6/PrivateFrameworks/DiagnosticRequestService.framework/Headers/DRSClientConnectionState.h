// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSCLIENTCONNECTIONSTATE_H
#define DRSCLIENTCONNECTIONSTATE_H


#import <Foundation/Foundation.h>


@interface DRSClientConnectionState : NSObject

@property (readonly, nonatomic) BOOL hasAdminEntitlement; // ivar: _hasAdminEntitlement
@property (readonly, nonatomic) int pid; // ivar: _pid


-(id)initWithConnection:(id)arg0 service:(id)arg1 ;
-(void)dealloc;


@end


#endif