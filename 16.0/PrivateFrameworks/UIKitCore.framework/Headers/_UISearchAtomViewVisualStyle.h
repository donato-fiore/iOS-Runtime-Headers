// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISEARCHATOMVIEWVISUALSTYLE_H
#define _UISEARCHATOMVIEWVISUALSTYLE_H

@class UIFont;
@protocol _UIVisualStyleProviding;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "_UISearchAtomView.h"

@interface _UISearchAtomViewVisualStyle : NSObject <_UIVisualStyleProviding>



@property (readonly, nonatomic) CGFloat contentHorizontalPadding;
@property (readonly, nonatomic) CGFloat cornerRadius;
@property (readonly, nonatomic) UIColor *defaultAtomBackgroundColor;
@property (readonly, nonatomic) UIFont *defaultFont;
@property (readonly, nonatomic) UIColor *defaultSelectedTextAndImageColor;
@property (readonly, nonatomic) UIColor *defaultTextAndImageColor;
@property (readonly, nonatomic) CGFloat disabledAlpha;
@property (readonly, nonatomic) CGFloat imageTextSpacing;
@property (readonly, nonatomic) CGFloat maximumAtomWidthFraction;
@property (readonly, nonatomic) CGFloat maximumFallbackWidth;
@property (readonly, nonatomic) CGFloat minimumConstrainedAtomWidth;
@property (readonly, nonatomic) CGFloat minimumTextConstrastRatio;
@property (readonly, weak, nonatomic) _UISearchAtomView *searchAtomView; // ivar: _searchAtomView
@property (readonly, nonatomic) UIColor *textContrastFallbackColor;
@property (readonly, nonatomic) CGFloat textVerticalPadding;


-(id)initWithInstance:(id)arg0 ;


@end


#endif