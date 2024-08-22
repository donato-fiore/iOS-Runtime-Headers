// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEPATHEVENTOBSERVER_H
#define NEPATHEVENTOBSERVER_H


#import <Foundation/Foundation.h>


@interface NEPathEventObserver : NSObject

@property *network_config_cellular_blocked_observer_s cellBlockedObserver; // ivar: _cellBlockedObserver
@property *network_config_cellular_blocked_observer_s cellFailedObserver; // ivar: _cellFailedObserver
@property (copy) id *eventHandler; // ivar: _eventHandler
@property *network_config_cellular_blocked_observer_s wifiBlockedObserver; // ivar: _wifiBlockedObserver


-(id)init;
-(id)initWithQueue:(id)arg0 eventHandler:(id)arg1 ;
-(id)stringForEvent:(NSInteger)arg0 ;
-(void)cancel;
-(void)dealloc;
-(void)handleEvent:(NSInteger)arg0 forPID:(id)arg1 UUID:(id)arg2 ;


@end


#endif