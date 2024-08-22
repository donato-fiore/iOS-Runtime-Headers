// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIDYNAMICAPPDEFINEDCOLOR_H
#define UIDYNAMICAPPDEFINEDCOLOR_H

@class NSDictionary;


#import "UIDynamicColor.h"

@interface UIDynamicAppDefinedColor : UIDynamicColor {
    NSDictionary *_colorsByThemeKey;
}




+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_generateColorsByTraitCollection;
-(id)_initWithColorsByThemeKey:(id)arg0 ;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithColorsByTraitCollection:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif