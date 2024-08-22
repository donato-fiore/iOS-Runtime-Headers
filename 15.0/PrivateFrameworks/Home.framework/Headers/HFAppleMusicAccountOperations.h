// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFAPPLEMUSICACCOUNTOPERATIONS_H
#define HFAPPLEMUSICACCOUNTOPERATIONS_H


#import <Foundation/Foundation.h>


@interface HFAppleMusicAccountOperations : NSObject



+(id)_completeLoginForAccessory:(id)arg0 results:(id)arg1 error:(id)arg2 ;
+(id)_validateRemoteLoginHandlerForAccessory:(id)arg0 ;
+(id)executeCompanionLoginForAccessory:(id)arg0 account:(id)arg1 ;
+(id)executeProxyLoginForAccessory:(id)arg0 context:(id)arg1 ;
+(id)logoutAccessories:(id)arg0 ;


@end


#endif