// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFAPPLEMUSICACCOUNTARBITRATOR_H
#define HFAPPLEMUSICACCOUNTARBITRATOR_H

@class NSSet, ACAccount, NAFuture;

#import <Foundation/Foundation.h>


@interface HFAppleMusicAccountArbitrator : NSObject

@property (readonly, copy, nonatomic) NSSet *accessories; // ivar: _accessories
@property (readonly, nonatomic) ACAccount *account; // ivar: _account
@property (retain, nonatomic) NAFuture *activeArbitrationFuture; // ivar: _activeArbitrationFuture
@property (readonly, copy, nonatomic) id *contextGenerator; // ivar: _contextGenerator
@property (nonatomic) BOOL forceLogout; // ivar: _forceLogout
@property (nonatomic) NSInteger loginType; // ivar: _loginType


-(NSInteger)_resolvedLoginType:(*id)arg0 ;
-(id)init;
-(id)initWithAccessories:(id)arg0 account:(id)arg1 contextGenerator:(id)arg2 ;
-(id)pendingArbitrationExecutionFuture;


@end


#endif