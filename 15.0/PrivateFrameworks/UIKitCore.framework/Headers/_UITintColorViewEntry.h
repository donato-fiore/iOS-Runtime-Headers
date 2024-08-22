// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITINTCOLORVIEWENTRY_H
#define _UITINTCOLORVIEWENTRY_H

@class UIVisualEffectViewEntry;


#import "UIColor.h"

@interface _UITintColorViewEntry : UIVisualEffectViewEntry

@property (copy, nonatomic) UIColor *tintColor; // ivar: _tintColor


-(BOOL)canTransitionToEffect:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)applyIdentityEffectToView:(id)arg0 ;
-(void)applyRequestedEffectToView:(id)arg0 ;
-(void)removeEffectFromView:(id)arg0 ;


@end


#endif