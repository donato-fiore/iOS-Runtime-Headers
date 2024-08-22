// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPUISEARCHVIEWCLIENTSCENESETTINGS_H
#define SPUISEARCHVIEWCLIENTSCENESETTINGS_H

@class UIApplicationSceneClientSettings, NSString;
@protocol SPUISearchViewClientSceneSettings;



@interface SPUISearchViewClientSceneSettings : UIApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CGFloat distanceToTopOfIcons;
@property (readonly) NSUInteger hash;
@property (readonly) unsigned int searchHeaderContextID;
@property (readonly) NSUInteger searchHeaderLayerRenderID;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSInteger)arg2 ;


@end


#endif