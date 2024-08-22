// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIBUTTONBORDERSTYLE_H
#define SKUIBUTTONBORDERSTYLE_H

@class IKColor, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SKUIButtonBorderStyle : NSObject <NSCopying>



@property (copy, nonatomic) IKColor *borderColor; // ivar: _borderColor
@property (nonatomic) CGFloat borderWidth; // ivar: _borderWidth
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (nonatomic) IKCornerRadii cornerRadii; // ivar: _cornerRadii
@property (copy, nonatomic) IKColor *fillColor; // ivar: _fillColor
@property (copy, nonatomic) NSString *namedCornerStyle; // ivar: _namedCornerStyle


-(BOOL)_usesBackgroundWithAlpha:(id)arg0 ;
-(id)bezierPathWithBounds:(struct CGRect )arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithElementStyle:(id)arg0 ;


@end


#endif