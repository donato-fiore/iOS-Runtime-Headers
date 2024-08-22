// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GKCOLORPALETTE_H
#define GKCOLORPALETTE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface GKColorPalette : NSObject

@property (readonly) UIColor *activityIndicatorColor;
@property (readonly) UIColor *cellActionColor;
@property (readonly) UIColor *cellActionDestructiveColor;
@property (readonly) UIColor *challengesTintColor;
@property (readonly) UIColor *disabledButtonTitleColor;
@property (readonly) UIColor *disabledTextColor;
@property (readonly) UIColor *emphasizedTextColor;
@property (readonly) UIColor *emphasizedTextOnDarkBackgroundColor;
@property (readonly) UIColor *floatingHeaderViewBackgroundColor;
@property (readonly) UIColor *friendRequestCaptionTintColor;
@property (readonly) UIColor *friendRequestTintColor;
@property (readonly) UIColor *friendTintColor;
@property (readonly) UIColor *localPlayerTintColor;
@property (readonly) UIColor *opaqueViewBackgroundColor;
@property (readonly) UIColor *pinnedHeaderViewBackgroundColor;
@property (readonly) UIColor *primaryTextColor;
@property (readonly) UIColor *removeItemTextColor;
@property (readonly) UIColor *selectedCellBackgroundColor;
@property (readonly) UIColor *selectedTextColor;
@property (readonly) UIColor *separatorLineColor;
@property (readonly) UIColor *shareTintColor;
@property (readonly) UIColor *standardTextColor;
@property (readonly) UIColor *systemInteractionColor;
@property (readonly) UIColor *textOnDarkBackgroundColor;
@property (readonly) UIColor *viewBackgroundColor;
@property (readonly) NSInteger windowBackgroundBlurStyle;
@property (readonly) UIColor *windowBackgroundColor;


+(id)paletteFromImage:(id)arg0 ;
+(id)sharedPalette;


@end


#endif