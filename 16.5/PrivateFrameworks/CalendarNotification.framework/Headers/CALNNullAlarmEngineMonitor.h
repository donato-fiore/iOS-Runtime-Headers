// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CALNNULLALARMENGINEMONITOR_H
#define CALNNULLALARMENGINEMONITOR_H

@class NSString;
@protocol CALNAlarmEngineMonitor;

#import <Foundation/Foundation.h>


@interface CALNNullAlarmEngineMonitor : NSObject <CALNAlarmEngineMonitor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(void)addAlarmsFiredObserver:(id)arg0 selector:(SEL)arg1 ;
-(void)removeAlarmsFiredObserver:(id)arg0 ;


@end


#endif