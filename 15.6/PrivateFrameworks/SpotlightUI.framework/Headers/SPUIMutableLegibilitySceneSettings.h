// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUIMUTABLELEGIBILITYSCENESETTINGS_H
#define SPUIMUTABLELEGIBILITYSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString, _UILegibilitySettings;
@protocol SPUILegibilitySceneSettings;



@interface SPUIMutableLegibilitySceneSettings : UIMutableApplicationSceneSettings <SPUILegibilitySceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _UILegibilitySettings *legibilitySettings;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSInteger)arg2 ;


@end


#endif