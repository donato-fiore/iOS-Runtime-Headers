// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPUIMUTABLESEARCHBARSCENESETTINGS_H
#define SPUIMUTABLESEARCHBARSCENESETTINGS_H

@class NSString;
@protocol SPUISearchBarSceneSettings;


#import "SPUIMutableLegibilitySceneSettings.h"

@interface SPUIMutableSearchBarSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchBarSceneSettings>



@property (nonatomic) BOOL animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat scrollProgress;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif