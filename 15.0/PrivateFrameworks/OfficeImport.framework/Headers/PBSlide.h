// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PBSLIDE_H
#define PBSLIDE_H



#import "PBSlideBase.h"

@interface PBSlide : PBSlideBase



+(id)notesSlideFromSlideContainer:(id)arg0 state:(id)arg1 ;
+(void)readFromSlideContainer:(id)arg0 toSlide:(id)arg1 state:(id)arg2 ;
+(void)readThemeOverridesFromSlideContainer:(id)arg0 toSlideChild:(id)arg1 doesFollowMasterScheme:(BOOL)arg2 state:(id)arg3 ;


@end


#endif