// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUISEARCHBARMUTABLECLIENTSCENESETTINGS_H
#define SPUISEARCHBARMUTABLECLIENTSCENESETTINGS_H

@class UIMutableApplicationSceneClientSettings, NSString;
@protocol SPUISearchBarClientSceneSettings;



@interface SPUISearchBarMutableClientSceneSettings : UIMutableApplicationSceneClientSettings <SPUISearchBarClientSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat headerHeight;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif