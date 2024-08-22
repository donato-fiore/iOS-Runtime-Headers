// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DNDXPCEVENTOBSERVER_H
#define DNDXPCEVENTOBSERVER_H


#import <Foundation/Foundation.h>


@interface DNDXPCEventObserver : NSObject



// +(void)_registerEventHandler:(id)arg0 forStream:(unk)arg1  ;
+(void)_subscribeToStream:(char *)arg0 clientIdentifier:(char *)arg1 ;
+(void)_unsubscribeFromStream:(char *)arg0 clientIdentifier:(char *)arg1 ;
+(void)setFocusConfigurationStreamEventHandler:(id)arg0 ;
+(void)subscribeToFocusConfigurationStreamWithIdentifier:(char *)arg0 ;
+(void)unsubscribeFromFocusConfigurationStreamWithIdentifier:(char *)arg0 ;


@end


#endif