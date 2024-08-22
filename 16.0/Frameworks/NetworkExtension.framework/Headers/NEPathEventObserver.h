// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEPATHEVENTOBSERVER_H
#define NEPATHEVENTOBSERVER_H


#import <Foundation/Foundation.h>


@interface NEPathEventObserver : NSObject {
    *network_config_cellular_blocked_observer_s _cellBlockedObserver;
    *network_config_cellular_blocked_observer_s _cellFailedObserver;
    *network_config_cellular_blocked_observer_s _wifiBlockedObserver;
    id *_eventHandler;
}




-(id)init;
-(id)initWithQueue:(id)arg0 eventHandler:(id)arg1 ;
-(void)cancel;
-(void)dealloc;


@end


#endif