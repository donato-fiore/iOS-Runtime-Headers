// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UICONTEXTMENUPLATFORMMETRICS_H
#define _UICONTEXTMENUPLATFORMMETRICS_H

@class NSDictionary;
@protocol _UIVisualStyleProviding;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIVisualEffect.h"

@interface _UIContextMenuPlatformMetrics : NSObject <_UIVisualStyleProviding>



@property (retain, nonatomic) NSDictionary *accessorySeparatedOptions; // ivar: _accessorySeparatedOptions
@property (nonatomic) CAPoint3D baseAccessoryOffset; // ivar: _baseAccessoryOffset
@property (nonatomic) NSDirectionalEdgeInsets cellBackgroundInsets; // ivar: _cellBackgroundInsets
@property (copy, nonatomic) id *cellBackgroundProvider; // ivar: _cellBackgroundProvider
@property (copy, nonatomic) id *containerViewProvider; // ivar: _containerViewProvider
@property (copy, nonatomic) id *convertPointBetweenViews; // ivar: _convertPointBetweenViews
@property (nonatomic) CGFloat itemSeparatorHeight; // ivar: _itemSeparatorHeight
@property (nonatomic) CAPoint3D leadingCascadedSubmenuOffset; // ivar: _leadingCascadedSubmenuOffset
@property (retain, nonatomic) UIColor *menuBackgroundColor; // ivar: _menuBackgroundColor
@property (retain, nonatomic) UIVisualEffect *menuBackgroundEffect; // ivar: _menuBackgroundEffect
@property (nonatomic) CGFloat menuCornerRadius; // ivar: _menuCornerRadius
@property (retain, nonatomic) UIColor *menuHighlightBackgroundColor; // ivar: _menuHighlightBackgroundColor
@property (retain, nonatomic) UIVisualEffect *menuHighlightBackgroundEffect; // ivar: _menuHighlightBackgroundEffect
@property (nonatomic) BOOL scaleSubmenusWhenStacked; // ivar: _scaleSubmenusWhenStacked
@property (nonatomic) NSDirectionalEdgeInsets sectionInsets; // ivar: _sectionInsets
@property (retain, nonatomic) UIColor *sectionSeparatorColor; // ivar: _sectionSeparatorColor
@property (nonatomic) CGFloat sectionSeparatorHeight; // ivar: _sectionSeparatorHeight
@property (nonatomic) NSDirectionalEdgeInsets sectionSeparatorInsets; // ivar: _sectionSeparatorInsets
@property (nonatomic) CAPoint3D stackedSubmenuOffset; // ivar: _stackedSubmenuOffset
@property (retain, nonatomic) NSDictionary *submenuSeparatedOptions; // ivar: _submenuSeparatedOptions
@property (nonatomic) CAPoint3D trailingCascadedSubmenuOffset; // ivar: _trailingCascadedSubmenuOffset


-(id)init;


@end


#endif