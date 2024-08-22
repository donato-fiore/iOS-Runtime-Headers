// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPUIMUTABLESEARCHVIEWSCENESETTINGS_H
#define SPUIMUTABLESEARCHVIEWSCENESETTINGS_H

@class NSString;
@protocol SPUISearchViewSceneSettings;


#import "SPUIMutableLegibilitySceneSettings.h"

@interface SPUIMutableSearchViewSceneSettings : SPUIMutableLegibilitySceneSettings <SPUISearchViewSceneSettings>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger presentationIntent;
@property (nonatomic) NSUInteger presentationSource;
@property (nonatomic) CGFloat revealProgress;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)keyDescriptionForSetting:(NSUInteger)arg0 ;
-(id)valueDescriptionForFlag:(NSInteger)arg0 object:(id)arg1 ofSetting:(NSUInteger)arg2 ;


@end


#endif