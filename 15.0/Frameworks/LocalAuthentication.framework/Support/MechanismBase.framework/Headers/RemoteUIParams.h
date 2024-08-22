// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef REMOTEUIPARAMS_H
#define REMOTEUIPARAMS_H

@class NSData, MechanismUI<LAUIMechanism><LARemoteUIHost>, NSNumber;

#import <Foundation/Foundation.h>


@interface RemoteUIParams : NSObject

@property (readonly, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (readonly, nonatomic) BOOL forSiri; // ivar: _forSiri
@property (readonly, nonatomic) int pid; // ivar: _pid
@property (readonly, nonatomic) MechanismUI<LAUIMechanism><LARemoteUIHost> *uiMechanism; // ivar: _uiMechanism
@property (readonly, nonatomic) BOOL undimScreen; // ivar: _undimScreen
@property (readonly, nonatomic) NSNumber *userId; // ivar: _userId


-(id)initWithUIMechanism:(id)arg0 auditToken:(id)arg1 undimScreen:(BOOL)arg2 forSiri:(BOOL)arg3 pid:(int)arg4 userId:(id)arg5 ;


@end


#endif