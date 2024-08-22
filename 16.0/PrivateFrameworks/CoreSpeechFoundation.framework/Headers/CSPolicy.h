// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSPOLICY_H
#define CSPOLICY_H

@class NSMutableArray, NSString;
@protocol CSEventMonitorDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSPolicy : NSObject <CSEventMonitorDelegate>

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


-(BOOL)_checkAllConditionsEnabled;
-(BOOL)isEnabled;
-(id)init;
-(void)CSEventMonitorDidReceiveEvent:(id)arg0 ;
-(void)addConditions:(id)arg0 ;
-(void)dealloc;
-(void)notifyCallback:(BOOL)arg0 option:(NSUInteger)arg1 ;
-(void)notifyCallbackWithOption:(NSUInteger)arg0 ;
-(void)setCallback:(id)arg0 ;
-(void)subscribeEventMonitor:(id)arg0 ;


@end


#endif