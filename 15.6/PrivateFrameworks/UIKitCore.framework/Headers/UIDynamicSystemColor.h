// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIDYNAMICSYSTEMCOLOR_H
#define UIDYNAMICSYSTEMCOLOR_H

@class NSDictionary;


#import "UIDynamicColor.h"
#import "UIColor.h"

@interface UIDynamicSystemColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
    os_unfair_lock_s _cachedColorLock;
    UIColor *_cachedColor;
    NSUInteger _cachedThemeKey;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_colorsByThemeKey;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 colorsByThemeKey:(id)arg1 ;
-(void)_setColorsByThemeKey:(id)arg0 ;


@end


#endif