// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SPUISEARCHBARSCENESETTINGS_H
#define SPUISEARCHBARSCENESETTINGS_H

@class NSString;
@protocol SPUISearchBarSceneSettings;


#import "SPUILegibilitySceneSettings.h"

@interface SPUISearchBarSceneSettings : SPUILegibilitySceneSettings <SPUISearchBarSceneSettings>



@property (readonly, nonatomic) BOOL animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGFloat scrollProgress;
@property (readonly) Class superclass;


-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif