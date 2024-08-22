// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITABBARAPPEARANCESTORAGE_H
#define _UITABBARAPPEARANCESTORAGE_H


#import <Foundation/Foundation.h>

#import "_UITabBarItemAppearanceStorage.h"
#import "UIImage.h"
#import "UIColor.h"

@interface _UITabBarAppearanceStorage : NSObject {
    _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
}


@property (retain, nonatomic) UIImage *backgroundImage; // ivar: backgroundImage
@property (retain, nonatomic) UIColor *barTintColor; // ivar: barTintColor
@property (retain, nonatomic) UIColor *selectedImageTintColor; // ivar: selectedImageTintColor
@property (retain, nonatomic) UIImage *selectionIndicatorImage; // ivar: selectionIndicatorImage
@property (retain, nonatomic) UIImage *shadowImage; // ivar: shadowImage
@property (retain, nonatomic) _UITabBarItemAppearanceStorage *tabItemAppearanceStorage;
@property (retain, nonatomic) UIColor *unselectedImageTintColor; // ivar: _unselectedImageTintColor




@end


#endif