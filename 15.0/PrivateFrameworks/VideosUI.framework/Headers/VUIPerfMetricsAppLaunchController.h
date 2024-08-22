// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIPERFMETRICSAPPLAUNCHCONTROLLER_H
#define VUIPERFMETRICSAPPLAUNCHCONTROLLER_H

@class NSDictionary;

#import <Foundation/Foundation.h>


@interface VUIPerfMetricsAppLaunchController : NSObject

@property (copy, nonatomic) NSDictionary *appLaunchData; // ivar: _appLaunchData


+(id)sharedInstance;
-(id)init;
-(void)_setAppLaunchFieldWithData:(id)arg0 ;
-(void)recordAppLaunchEventWithEventType:(id)arg0 ;


@end


#endif