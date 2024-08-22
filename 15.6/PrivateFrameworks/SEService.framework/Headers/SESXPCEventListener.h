// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SESXPCEVENTLISTENER_H
#define SESXPCEVENTLISTENER_H

@class NSMapTable, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SESXPCEventListener : NSObject {
    NSObject<OS_dispatch_queue> *queue;
    NSMapTable *registered;
    NSMutableDictionary *pendingEvents;
}




+(id)registerOnStream:(id)arg0 forEvent:(id)arg1 handler:(id)arg2 ;
+(id)sharedObject;
+(void)kickoff;
-(id)init;
-(struct os_state_data_s *)_dumpState;
-(void)_handleEvent:(id)arg0 payload:(id)arg1 ;


@end


#endif