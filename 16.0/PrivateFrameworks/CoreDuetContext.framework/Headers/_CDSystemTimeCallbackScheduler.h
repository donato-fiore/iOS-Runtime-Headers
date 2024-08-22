// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CDSYSTEMTIMECALLBACKSCHEDULER_H
#define _CDSYSTEMTIMECALLBACKSCHEDULER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _CDSystemTimeCallbackScheduler : NSObject

@property (readonly, copy, nonatomic) NSString *eventNameRoot; // ivar: _eventNameRoot


+(id)sharedInstance;
-(id)initWithEventNameRoot:(id)arg0 ;
-(void)_handleCallbackAtDate:(id)arg0 ;
-(void)scheduleCallbackAtDate:(id)arg0 identifier:(id)arg1 requiringDeviceWake:(BOOL)arg2 ;
-(void)unscheduleCallbackAtDate:(id)arg0 identifier:(id)arg1 requiringDeviceWake:(BOOL)arg2 ;


@end


#endif