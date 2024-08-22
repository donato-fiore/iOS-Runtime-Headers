// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BNSCENESETTINGS_H
#define BNSCENESETTINGS_H

@class UIApplicationSceneSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface BNSceneSettings : UIApplicationSceneSettings <BSSettingDescriptionProvider>



@property (readonly, nonatomic) int bannerAppearState;
@property (readonly, copy, nonatomic) Class clientContainerViewControllerClass;
@property (readonly, nonatomic) CGSize containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGSize presentationSize;
@property (readonly, copy, nonatomic) NSString *revocationReason;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (readonly, nonatomic) int viewControllerAppearState;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif