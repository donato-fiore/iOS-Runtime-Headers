// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VTPOLICY_H
#define VTPOLICY_H

@class NSMutableArray, NSString;
@protocol VTEventMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface VTPolicy : NSObject <VTEventMonitorDelegate>

 {
    NSMutableArray *_monitors;
    NSMutableArray *_conditions;
    id *_callback;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)defaultVoiceTriggerEnablePolicy;
-(BOOL)_checkAllConditionsEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)VTEventMonitorDidReceiveEvent:(id)arg0 ;
-(void)addConditions:(id)arg0 ;
-(void)dealloc;
-(void)notifyCallback:(BOOL)arg0 ;
-(void)setCallback:(id)arg0 ;
-(void)subscribeEventMonitor:(id)arg0 ;


@end


#endif