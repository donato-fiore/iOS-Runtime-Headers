// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIWALLPAPEREFFECT_H
#define _UIWALLPAPEREFFECT_H



#import "UIVisualEffect.h"
#import "UIColor.h"

@interface _UIWallpaperEffect : UIVisualEffect {
    UIColor *_color;
}




+(id)wallpaperEffectWithStyle:(NSInteger)arg0 ;
-(BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg0 toEnvironment:(id)arg1 usage:(NSInteger)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)_expectedUsage;
-(id)_initWithStyle:(NSInteger)arg0 ;
-(id)description;
-(void)_updateEffectDescriptor:(id)arg0 forEnvironment:(id)arg1 usage:(NSInteger)arg2 ;


@end


#endif