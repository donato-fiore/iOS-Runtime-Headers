// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STYUSERSCENARIO_H
#define STYUSERSCENARIO_H

@class NSString;

#import <Foundation/Foundation.h>


@interface STYUserScenario : NSObject

@property (readonly) NSString *appBundleId; // ivar: _appBundleId
@property (readonly) NSString *appName; // ivar: _appName
@property (readonly) int appProcessID; // ivar: _appProcessID
@property (readonly) NSInteger kpi; // ivar: _kpi
@property (readonly) NSString *scenarioGroup; // ivar: _scenarioGroup
@property (readonly) NSString *scenarioID; // ivar: _scenarioID
@property (readonly) NSString *titleText; // ivar: _titleText


+(id)scenarioFromSignpostEvent:(id)arg0 error:(*id)arg1 ;
+(id)scenarioFromSignpostInterval:(id)arg0 error:(*id)arg1 ;
-(id)initWithConfiguration:(id)arg0 scenarioGroup:(id)arg1 kpi:(NSInteger)arg2 processBundleID:(id)arg3 titleText:(id)arg4 processName:(id)arg5 processID:(int)arg6 ;
-(id)initWithLifecycleScenarioCategoryAndModelName:(id)arg0 modelName:(id)arg1 titleText:(id)arg2 ;


@end


#endif