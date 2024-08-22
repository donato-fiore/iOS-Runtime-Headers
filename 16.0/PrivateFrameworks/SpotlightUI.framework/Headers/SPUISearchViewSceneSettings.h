// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUISEARCHVIEWSCENESETTINGS_H
#define SPUISEARCHVIEWSCENESETTINGS_H

@class NSString;
@protocol SPUISearchViewSceneSettings;


#import "SPUILegibilitySceneSettings.h"

@interface SPUISearchViewSceneSettings : SPUILegibilitySceneSettings <SPUISearchViewSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger presentationIntent;
@property (readonly, nonatomic) NSUInteger presentationSource;
@property (readonly, nonatomic) CGFloat revealProgress;
@property (readonly) Class superclass;


-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif