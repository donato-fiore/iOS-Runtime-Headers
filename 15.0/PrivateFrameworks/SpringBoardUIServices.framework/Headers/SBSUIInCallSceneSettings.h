// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSUIINCALLSCENESETTINGS_H
#define SBSUIINCALLSCENESETTINGS_H

@class UIApplicationSceneSettings, NSUUID;



@interface SBSUIInCallSceneSettings : UIApplicationSceneSettings

@property (readonly, nonatomic, getter=isAttachedToWindowedAccessory) BOOL attachedToWindowedAccessory;
@property (readonly, nonatomic, getter=isBeingShownAboveCoverSheet) BOOL beingShownAboveCoverSheet;
@property (readonly, nonatomic) NSInteger inCallPresentationMode;
@property (readonly, nonatomic) NSUUID *requestedPresentationConfigurationIdentifier;
@property (readonly, nonatomic, getter=isScreenSharingPresentation) BOOL screenSharingPresentation;
@property (readonly, nonatomic) BOOL systemControlsShouldPresentAsEmbedded;
@property (readonly, nonatomic) CGRect windowedAccessoryCutoutFrameInScreen;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif