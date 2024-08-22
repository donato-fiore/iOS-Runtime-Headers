// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PREDITINGCOLORITEM_H
#define PREDITINGCOLORITEM_H

@class UIView, NSString;
@protocol PREditorColorPickerColor;

#import <Foundation/Foundation.h>

#import "PRPosterColor.h"

@interface PREditingColorItem : NSObject

@property (readonly, nonatomic) PRPosterColor *baseColor;
@property (readonly, nonatomic) PRPosterColor *color;
@property (nonatomic) NSUInteger context; // ivar: _context
@property (readonly, nonatomic) PRPosterColor *displayColor;
@property (nonatomic, getter=isFromUIKitColorPicker) BOOL fromUIKitColorPicker; // ivar: _fromUIKitColorPicker
@property (retain, nonatomic) UIView *itemView; // ivar: _itemView
@property (readonly, copy, nonatomic) NSString *localizedName;
@property (readonly, nonatomic) NSObject<PREditorColorPickerColor> *pickerColor; // ivar: _pickerColor
@property (readonly, nonatomic) BOOL pickerRespondsToDisplayColorSelector; // ivar: _pickerRespondsToDisplayColorSelector
@property (nonatomic, getter=shouldShowSlider) BOOL showsSlider; // ivar: _showsSlider
@property (nonatomic) CGFloat variation; // ivar: _variation


+(id)vibrantMaterialItem;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithPickerColor:(id)arg0 variation:(CGFloat)arg1 context:(NSUInteger)arg2 ;


@end


#endif