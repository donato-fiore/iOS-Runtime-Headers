// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SMARTPLMEMORYTRACKING_H
#define SMARTPLMEMORYTRACKING_H

@class PLEntryNotificationOperatorComposition;

#import <Foundation/Foundation.h>

#import "PLSmartPLService.h"

@interface SmartPLMemoryTracking : NSObject

@property (retain) PLEntryNotificationOperatorComposition *memoryTrackingNotification; // ivar: _memoryTrackingNotification
@property (weak) PLSmartPLService *operator; // ivar: _operator


+(id)defaults;
-(void)handleMemoryTracking:(id)arg0 ;
-(void)startWithOperator:(id)arg0 ;


@end


#endif