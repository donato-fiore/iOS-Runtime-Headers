// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef UIKBUNDOSTYLING_H
#define UIKBUNDOSTYLING_H

@class UIFont;

#import <Foundation/Foundation.h>

#import "UIColor.h"
#import "UIBlurEffect.h"
#import "UIVibrancyEffect.h"

@interface UIKBUndoStyling : NSObject

@property (retain, nonatomic) UIColor *HUDShadowColor; // ivar: _HUDShadowColor
@property (retain, nonatomic) UIColor *HUDbackgroundColor; // ivar: _HUDbackgroundColor
@property (nonatomic) NSInteger appearance; // ivar: _appearance
@property (retain, nonatomic) UIBlurEffect *backgroundBlurEffect; // ivar: _backgroundBlurEffect
@property (retain, nonatomic) UIVibrancyEffect *backgroundVibrancyEffect; // ivar: _backgroundVibrancyEffect
@property (retain, nonatomic) UIColor *buttonGlyphColorDisabled; // ivar: _buttonGlyphColorDisabled
@property (retain, nonatomic) UIColor *buttonGlyphColorEnabled; // ivar: _buttonGlyphColorEnabled
@property (retain, nonatomic) UIColor *buttonGlyphColorPressed; // ivar: _buttonGlyphColorPressed
@property (nonatomic) CGFloat cutControlMinWidth; // ivar: _cutControlMinWidth
@property (nonatomic) BOOL cutCopyPasteIconOnly; // ivar: _cutCopyPasteIconOnly
@property (retain, nonatomic) UIColor *elementBackgroundColor; // ivar: _elementBackgroundColor
@property (retain, nonatomic) UIColor *elementCoverColor; // ivar: _elementCoverColor
@property (nonatomic) BOOL isRTL; // ivar: _isRTL
@property (nonatomic) BOOL tooSmallForInstructionalText; // ivar: _tooSmallForInstructionalText
@property (nonatomic) CGFloat undoControlMinWidth; // ivar: _undoControlMinWidth
@property (readonly, nonatomic) UIFont *undoInteractiveControlLabelFont;
@property (nonatomic) BOOL undoRedoIconOnly; // ivar: _undoRedoIconOnly
@property (readonly, nonatomic) UIFont *undoStateControlLabelFont;
@property (readonly, nonatomic) UIFont *undoStateControlUnavailableLabelFont;


-(id)initWithKeyboardAppearance:(NSInteger)arg0 isRTL:(BOOL)arg1 ;
-(id)vibrancyEffectForBlur:(id)arg0 ;
-(void)createDynamicColors;


@end


#endif