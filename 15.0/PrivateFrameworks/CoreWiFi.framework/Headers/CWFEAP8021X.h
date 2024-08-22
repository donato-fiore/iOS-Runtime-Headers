// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CWFEAP8021X_H
#define CWFEAP8021X_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CWFEAP8021X : NSObject {
    NSObject<OS_dispatch_queue> *_mutexQueue;
    NSObject<OS_dispatch_queue> *_eventQueue;
    *__SCDynamicStore _storeRef;
    BOOL _isMonitoringEvents;
}


@property (copy) id *eventHandler; // ivar: _eventHandler
@property (readonly, copy, nonatomic) NSString *interfaceName; // ivar: _interfaceName


-(BOOL)isMonitoringEvents;
-(id)clientStatus:(*id)arg0 ;
-(id)controlMode:(*id)arg0 ;
-(id)controlState:(*id)arg0 ;
-(id)init;
-(id)initWithInterfaceName:(id)arg0 ;
-(id)supplicantState:(*id)arg0 ;
-(void)__startEventMonitoring;
-(void)dealloc;
-(void)startEventMonitoring;
-(void)stopEventMonitoring;


@end


#endif