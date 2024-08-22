// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBUIMUTABLEBANNERSCENECLIENTSETTINGS_H
#define SBUIMUTABLEBANNERSCENECLIENTSETTINGS_H

@class BNMutableSceneClientSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface SBUIMutableBannerSceneClientSettings : BNMutableSceneClientSettings <BSSettingDescriptionProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transitionDismissalPreventionReason;
@property (copy, nonatomic) NSString *wantsDefaultGesturePriorityReason;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif