// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AAKEYCHAINMANAGER_H
#define AAKEYCHAINMANAGER_H


#import <Foundation/Foundation.h>


@interface AAKeychainManager : NSObject



+(id)passwordForServiceName:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 ;
+(void)initialize;
+(void)removePasswordForService:(id)arg0 username:(id)arg1 accessGroup:(id)arg2 ;
+(void)setPassword:(id)arg0 forServiceName:(id)arg1 username:(id)arg2 accessGroup:(id)arg3 ;


@end


#endif