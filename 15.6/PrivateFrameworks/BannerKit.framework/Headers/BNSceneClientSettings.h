// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNSCENECLIENTSETTINGS_H
#define BNSCENECLIENTSETTINGS_H

@class UIApplicationSceneClientSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface BNSceneClientSettings : UIApplicationSceneClientSettings <BSSettingDescriptionProvider>



@property (readonly, nonatomic) UIEdgeInsets bannerContentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (readonly, nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;
@property (readonly, nonatomic) CGSize preferredContentSize;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif