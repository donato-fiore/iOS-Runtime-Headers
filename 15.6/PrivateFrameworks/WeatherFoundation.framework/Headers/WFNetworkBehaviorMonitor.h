// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFNETWORKBEHAVIORMONITOR_H
#define WFNETWORKBEHAVIORMONITOR_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface WFNetworkBehaviorMonitor : NSObject

@property (readonly, nonatomic) NSHashTable *observers; // ivar: _observers


+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg0 ;
-(void)logNetworkEvent:(id)arg0 ;
-(void)removeObserver:(id)arg0 ;


@end


#endif