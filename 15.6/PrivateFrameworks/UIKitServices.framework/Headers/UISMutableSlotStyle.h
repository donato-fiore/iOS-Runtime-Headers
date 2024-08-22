// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UISMUTABLESLOTSTYLE_H
#define UISMUTABLESLOTSTYLE_H

@class NSString;


#import "UISSlotStyle.h"

@interface UISMutableSlotStyle : UISSlotStyle

@property (nonatomic) NSUInteger accessibilityButtonShapes;
@property (nonatomic) NSUInteger accessibilityContrast;
@property (nonatomic) NSUInteger displayRange;
@property (nonatomic) unsigned char displayScale;
@property (nonatomic) NSUInteger layoutDirection;
@property (nonatomic) NSUInteger legibilityWeight;
@property (copy, nonatomic) NSString *localization;
@property (nonatomic) NSUInteger preferredContentSizeCategory;
@property (nonatomic) *CGColor tintColor;
@property (nonatomic) NSUInteger userInterfaceIdiom;
@property (nonatomic) NSUInteger userInterfaceStyle;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif