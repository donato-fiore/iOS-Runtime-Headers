// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIDYNAMICMODIFIEDCOLOR_H
#define UIDYNAMICMODIFIEDCOLOR_H



#import "UIDynamicColor.h"

@interface UIDynamicModifiedColor : UIDynamicColor {
    UIDynamicColor *_baseColor;
    CGFloat _alphaComponent;
    NSInteger _contrast;
}




+(BOOL)supportsSecureCoding;
-(BOOL)_isDynamicTintColor;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_backgroundColorIgnoringHighContrast;
-(id)_highContrastDynamicColor;
-(id)_resolvedColorWithTraitCollection:(id)arg0 ;
-(id)colorWithAlphaComponent:(CGFloat)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBaseColor:(id)arg0 alphaComponent:(CGFloat)arg1 contrast:(NSInteger)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif