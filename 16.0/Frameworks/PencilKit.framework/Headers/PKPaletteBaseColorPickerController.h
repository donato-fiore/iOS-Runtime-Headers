// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPALETTEBASECOLORPICKERCONTROLLER_H
#define PKPALETTEBASECOLORPICKERCONTROLLER_H

@class NSString, UIColor, UIViewController;
@protocol PKPaletteColorPickerController, PKPaletteColorPicker, PKPaletteColorPickerControllerDelegate;

#import <Foundation/Foundation.h>


@interface PKPaletteBaseColorPickerController : NSObject <PKPaletteColorPickerController, PKPaletteColorPicker>



@property (readonly, nonatomic) NSObject<PKPaletteColorPicker> *colorPicker; // ivar: _colorPicker
@property (nonatomic) NSInteger colorUserInterfaceStyle; // ivar: _colorUserInterfaceStyle
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteColorPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsAlpha; // ivar: _supportsAlpha
@property (readonly, nonatomic) UIViewController *viewController; // ivar: _viewController




@end


#endif