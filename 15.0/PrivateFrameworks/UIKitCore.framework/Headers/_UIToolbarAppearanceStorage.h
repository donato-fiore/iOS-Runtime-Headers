// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITOOLBARAPPEARANCESTORAGE_H
#define _UITOOLBARAPPEARANCESTORAGE_H

@class UIBarAppearanceStorage;


#import "UIImage.h"

@interface _UIToolbarAppearanceStorage : UIBarAppearanceStorage

@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) BOOL hidesShadow; // ivar: _hidesShadow
@property (retain, nonatomic) UIImage *miniBackgroundImage; // ivar: _miniBackgroundImage
@property (retain, nonatomic) UIImage *miniTopBackgroundImage; // ivar: _miniTopBackgroundImage
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (retain, nonatomic) UIImage *topBackgroundImage; // ivar: _topBackgroundImage
@property (retain, nonatomic) UIImage *topShadowImage; // ivar: _topShadowImage


+(NSInteger)typicalBarPosition;


@end


#endif