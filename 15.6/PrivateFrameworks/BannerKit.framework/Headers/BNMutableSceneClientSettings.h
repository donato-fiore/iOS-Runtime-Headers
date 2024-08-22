// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BNMUTABLESCENECLIENTSETTINGS_H
#define BNMUTABLESCENECLIENTSETTINGS_H

@class UIMutableApplicationSceneClientSettings, NSString;
@protocol BSSettingDescriptionProvider;



@interface BNMutableSceneClientSettings : UIMutableApplicationSceneClientSettings <BSSettingDescriptionProvider>



@property (nonatomic) UIEdgeInsets bannerContentOutsets;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDraggingDismissalEnabled) BOOL draggingDismissalEnabled;
@property (nonatomic, getter=isDraggingInteractionEnabled) BOOL draggingInteractionEnabled;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPanGestureProxySupported) BOOL panGestureProxySupported;
@property (nonatomic) CGSize preferredContentSize;
@property (readonly) Class superclass;
@property (nonatomic, getter=isTouchOutsideDismissalEnabled) BOOL touchOutsideDismissalEnabled;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif