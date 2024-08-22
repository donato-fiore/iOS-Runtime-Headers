// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INUSERACTIVITYEXECUTIONINFO_H
#define INUSERACTIVITYEXECUTIONINFO_H

@class NSString;


#import "INExecutionInfo.h"

@interface INUserActivityExecutionInfo : INExecutionInfo

@property (readonly, copy, nonatomic) NSString *userActivityType; // ivar: _userActivityType


+(void)initialize;
-(BOOL)canRunOnLocalDevice;
-(id)_initWithUserActivityType:(id)arg0 launchableAppBundleId:(id)arg1 containingAppBundleURL:(id)arg2 extensionBundleId:(id)arg3 ;
-(id)initWithUserActivityType:(id)arg0 launchableAppBundleId:(id)arg1 ;


@end


#endif