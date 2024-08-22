// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUILEGIBILITYSCENESETTINGS_H
#define SPUILEGIBILITYSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString, _UILegibilitySettings;
@protocol SPUILegibilitySceneSettings;



@interface SPUILegibilitySceneSettings : UIApplicationSceneSettings <SPUILegibilitySceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSInteger)arg2 ;


@end


#endif