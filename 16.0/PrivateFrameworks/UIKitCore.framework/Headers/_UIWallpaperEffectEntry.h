// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIWALLPAPEREFFECTENTRY_H
#define _UIWALLPAPEREFFECTENTRY_H

@class UIVisualEffectViewEntry;


#import "UIColor.h"

@interface _UIWallpaperEffectEntry : UIVisualEffectViewEntry

@property (retain) UIColor *backgroundColor; // ivar: _backgroundColor


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(BOOL)isSameTypeOfEffect:(id)arg0 ;
-(void)addEffectToView:(id)arg0 ;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;


@end


#endif