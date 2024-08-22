// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUTHORHIGHLIGHTVALUEATTRIBUTE_H
#define ICAUTHORHIGHLIGHTVALUEATTRIBUTE_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface ICAuthorHighlightValueAttribute : NSObject <NSCopying>



@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights; // ivar: _aboveImplicitHighlights
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGFloat value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif