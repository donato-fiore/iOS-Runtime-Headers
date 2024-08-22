// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBIDLETIMERGLOBALSETTINGMONITOR_H
#define _SBIDLETIMERGLOBALSETTINGMONITOR_H

@class NSString;
@protocol _SBIdleTimerGlobalSettingMonitorDelegate;

#import <Foundation/Foundation.h>


@interface _SBIdleTimerGlobalSettingMonitor : NSObject

@property (weak, nonatomic) NSObject<_SBIdleTimerGlobalSettingMonitorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *label; // ivar: _label


-(BOOL)_updateCache;
-(id)formattedValue;
-(id)initWithLabel:(id)arg0 delegate:(id)arg1 ;


@end


#endif