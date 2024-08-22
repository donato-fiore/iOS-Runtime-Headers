// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ICAUTHORHIGHLIGHTVALUE_H
#define ICAUTHORHIGHLIGHTVALUE_H

@class UIColor, NSNumber;

#import <Foundation/Foundation.h>


@interface ICAuthorHighlightValue : NSObject

@property (nonatomic, getter=isAboveImplicitHighlights) BOOL aboveImplicitHighlights; // ivar: _aboveImplicitHighlights
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSNumber *value; // ivar: _value


-(BOOL)isEqual:(id)arg0 ;
-(id)description;


@end


#endif