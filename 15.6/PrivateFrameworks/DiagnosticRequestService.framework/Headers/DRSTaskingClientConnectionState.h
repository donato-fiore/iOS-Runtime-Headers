// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DRSTASKINGCLIENTCONNECTIONSTATE_H
#define DRSTASKINGCLIENTCONNECTIONSTATE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface DRSTaskingClientConnectionState : NSObject

@property (readonly, nonatomic) NSMutableDictionary *cachedEntitlements; // ivar: _cachedEntitlements
@property (readonly, nonatomic) BOOL hasAdminEntitlement; // ivar: _hasAdminEntitlement
@property (readonly, nonatomic) int pid; // ivar: _pid


-(BOOL)hasTeamIDEntitlement:(id)arg0 connection:(id)arg1 ;
-(id)initWithConnection:(id)arg0 service:(id)arg1 ;
-(void)dealloc;


@end


#endif