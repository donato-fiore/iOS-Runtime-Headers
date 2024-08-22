// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKXPCEVENTOBSERVER_H
#define HKXPCEVENTOBSERVER_H


#import <Foundation/Foundation.h>


@interface HKXPCEventObserver : NSObject



// +(void)_registerEventHandler:(id)arg0 forStream:(unk)arg1  ;
+(void)_subscribeToStream:(char *)arg0 clientIdentifier:(char *)arg1 ;
+(void)_unsubscribeFromStream:(char *)arg0 clientIdentifier:(char *)arg1 ;
+(void)setAuthorizationStreamEventHandler:(id)arg0 ;
+(void)subscribeToAuthorizationStreamWithIdentifier:(char *)arg0 ;
+(void)unsubscribeFromAuthorizationStreamWithIdentifier:(char *)arg0 ;


@end


#endif