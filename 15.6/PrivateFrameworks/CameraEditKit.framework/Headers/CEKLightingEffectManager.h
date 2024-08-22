// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEKLIGHTINGEFFECTMANAGER_H
#define CEKLIGHTINGEFFECTMANAGER_H


#import <Foundation/Foundation.h>


@interface CEKLightingEffectManager : NSObject



+(id)aggdNameForLightingType:(NSInteger)arg0 ;
+(id)ciFilterNameForLightingType:(NSInteger)arg0 version:(NSInteger)arg1 ;
+(id)displayImageForLightingType:(NSInteger)arg0 ;
+(id)displayNameForLightingType:(NSInteger)arg0 ;
+(id)filtersForLightingType:(NSInteger)arg0 applyDepthEffect:(BOOL)arg1 version:(NSInteger)arg2 ;
+(id)portraitOriginalPhotoFilters;


@end


#endif