// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SBSUIMUTABLESTARKNOTIFICATIONSSCENESETTINGS_H
#define SBSUIMUTABLESTARKNOTIFICATIONSSCENESETTINGS_H

@class UIMutableApplicationSceneSettings, NSString, BSServiceConnectionEndpoint;
@protocol SBSUIStarkNotificationsSceneSettings;



@interface SBSUIMutableStarkNotificationsSceneSettings : UIMutableApplicationSceneSettings <SBSUIStarkNotificationsSceneSettings>



@property (nonatomic, getter=isConnectedWirelessly) BOOL connectedWirelessly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isGeoSupported) BOOL geoSupported;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BSServiceConnectionEndpoint *openServiceEndpoint;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suspensionReasons;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif