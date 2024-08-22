// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDYNAMICCATALOGSYSTEMCOLOR_H
#define UIDYNAMICCATALOGSYSTEMCOLOR_H



#import "UIDynamicColor.h"
#import "UIColor.h"

@interface UIDynamicCatalogSystemColor : UIDynamicColor {
    NSInteger _cuiColorName;
    os_unfair_lock_s _colorCacheLock;
    UIColor *_cachedColor;
    NSUInteger _cachedThemeKey;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)_resolvedMaterialWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 coreUIColorName:(NSInteger)arg1 ;


@end


#endif