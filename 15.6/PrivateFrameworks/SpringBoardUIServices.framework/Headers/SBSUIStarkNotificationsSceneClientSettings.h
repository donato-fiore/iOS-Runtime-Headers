// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUISTARKNOTIFICATIONSSCENECLIENTSETTINGS_H
#define SBSUISTARKNOTIFICATIONSSCENECLIENTSETTINGS_H

@class UIApplicationSceneClientSettings, NSString;
@protocol SBSUIStarkNotificationsSceneClientSettings;



@interface SBSUIStarkNotificationsSceneClientSettings : UIApplicationSceneClientSettings <SBSUIStarkNotificationsSceneClientSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDisplayingNotification) BOOL displayingNotification;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL shouldBorrowScreen;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif