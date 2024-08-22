// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNSESSIONLISTENER_H
#define SNSESSIONLISTENER_H


#import <Foundation/Foundation.h>

#import "_TtC10SessionKit25SessionSubscriptionCenter.h"

@interface SNSessionListener : NSObject

@property (retain, nonatomic) _TtC10SessionKit25SessionSubscriptionCenter *subscriptionCenter; // ivar: _subscriptionCenter


-(id)init;
-(id)listenForActiveSessionsWithHandler:(id)arg0 ;


@end


#endif