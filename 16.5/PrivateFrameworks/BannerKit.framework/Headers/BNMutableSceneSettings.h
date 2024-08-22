// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BNMUTABLESCENESETTINGS_H
#define BNMUTABLESCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface BNMutableSceneSettings : UIMutableApplicationSceneSettings <BSSettingDescriptionProvider>



@property (nonatomic) int bannerAppearState;
@property (copy, nonatomic) Class clientContainerViewControllerClass;
@property (nonatomic) CGSize containerSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGSize presentationSize;
@property (copy, nonatomic) NSString *revocationReason;
@property (readonly) Class superclass;
@property (nonatomic, getter=isUserInteractionInProgress) BOOL userInteractionInProgress;
@property (nonatomic) int viewControllerAppearState;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif