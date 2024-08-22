// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPALETTESYSTEMCOLORPICKERCONTROLLER_H
#define PKPALETTESYSTEMCOLORPICKERCONTROLLER_H

@class UIColorPickerViewController, NSString;
@protocol UIColorPickerViewControllerDelegate;


#import "PKPaletteBaseColorPickerController.h"

@interface PKPaletteSystemColorPickerController : PKPaletteBaseColorPickerController <UIColorPickerViewControllerDelegate>



@property (retain, nonatomic) UIColorPickerViewController *colorPickerViewController; // ivar: _colorPickerViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_shouldConvertColorPickerColorFromDarkToLight;
-(NSInteger)colorUserInterfaceStyle;
-(id)init;
-(id)selectedColor;
-(id)viewController;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)setColorUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setSelectedColor:(id)arg0 ;


@end


#endif