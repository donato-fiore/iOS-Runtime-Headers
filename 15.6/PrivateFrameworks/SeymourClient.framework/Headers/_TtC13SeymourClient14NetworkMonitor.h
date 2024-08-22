// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC13SEYMOURCLIENT14NETWORKMONITOR_H
#define _TTC13SEYMOURCLIENT14NETWORKMONITOR_H


#import <Foundation/Foundation.h>


@interface _TtC13SeymourClient14NetworkMonitor : NSObject {
    ? airplaneModeObserver;
    ? coreTelephonyObserver;
    ? queue;
    ? reachabilityObserver;
    ? wifiObserver;
    ? delegate;
}




-(id)init;


@end


#endif