// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBSSCENECLIENTSETTINGSDIFF_H
#define FBSSCENECLIENTSETTINGSDIFF_H



#import "FBSSettingsDiff.h"

@interface FBSSceneClientSettingsDiff : FBSSettingsDiff



+(id)diffFromSettings:(id)arg0 toSettings:(id)arg1 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)settingsByApplyingToMutableCopyOfSettings:(id)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;
-(void)evaluateWithInspector:(id)arg0 context:(*void)arg1 ;


@end


#endif