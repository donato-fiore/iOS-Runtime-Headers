// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPBUTTONSTYLE_H
#define LPBUTTONSTYLE_H

@class UIColor, UIFont;

#import <Foundation/Foundation.h>

#import "LPPointUnit.h"
#import "LPPadding.h"

@interface LPButtonStyle : NSObject

@property (retain, nonatomic) LPPointUnit *additionalVerticalPadding; // ivar: _additionalVerticalPadding
@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) BOOL enableUserInteractionForDecorativeButton; // ivar: _enableUserInteractionForDecorativeButton
@property (retain, nonatomic) UIFont *font; // ivar: _font
@property (retain, nonatomic) UIColor *foregroundColor; // ivar: _foregroundColor
@property (retain, nonatomic) LPPointUnit *height; // ivar: _height
@property (nonatomic) BOOL ignoresInvertColors; // ivar: _ignoresInvertColors
@property (retain, nonatomic) LPPointUnit *imagePadding; // ivar: _imagePadding
@property (retain, nonatomic) LPPointUnit *indicatorSpacing; // ivar: _indicatorSpacing
@property (retain, nonatomic) LPPadding *margin; // ivar: _margin
@property (retain, nonatomic) UIColor *menuBackgroundColor; // ivar: _menuBackgroundColor
@property (retain, nonatomic) UIFont *menuFont; // ivar: _menuFont
@property (retain, nonatomic) LPPointUnit *menuMinimumWidth; // ivar: _menuMinimumWidth
@property (retain, nonatomic) LPPointUnit *minimumHeight; // ivar: _minimumHeight
@property (retain, nonatomic) LPPointUnit *minimumWidth; // ivar: _minimumWidth
@property (retain, nonatomic) LPPadding *padding; // ivar: _padding
@property (nonatomic) BOOL showsChevronForSingleAction; // ivar: _showsChevronForSingleAction


+(id)systemPillButtonStyleForPlatform:(NSInteger)arg0 ;
-(id)init;


@end


#endif