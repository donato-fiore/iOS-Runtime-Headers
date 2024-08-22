// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUISEARCHVIEWMUTABLECLIENTSCENESETTINGS_H
#define SPUISEARCHVIEWMUTABLECLIENTSCENESETTINGS_H

@class UIMutableApplicationSceneClientSettings, NSString;
@protocol SPUISearchViewClientSceneSettings;



@interface SPUISearchViewMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchViewClientSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) CGFloat distanceToTopOfIcons;
@property (nonatomic) CGSize dockedSearchBarSize;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat keyboardHeight;
@property (nonatomic, getter=isKeyboardPresented) BOOL keyboardPresented;
@property (nonatomic) CGFloat keyboardProtectorHeight;
@property (nonatomic) CGFloat searchBarCornerRadius;
@property (nonatomic) CGSize searchBarSize;
@property (nonatomic) unsigned int searchHeaderBackgroundContextID;
@property (nonatomic) NSUInteger searchHeaderBackgroundLayerRenderID;
@property (nonatomic) unsigned int searchHeaderContextID;
@property (nonatomic) NSUInteger searchHeaderLayerRenderID;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSInteger)arg2 ;


@end


#endif