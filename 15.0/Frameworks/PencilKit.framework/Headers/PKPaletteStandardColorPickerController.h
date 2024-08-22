// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTESTANDARDCOLORPICKERCONTROLLER_H
#define PKPALETTESTANDARDCOLORPICKERCONTROLLER_H

@class NSString;
@protocol PKColorPickerDelegate;


#import "PKPaletteBaseColorPickerController.h"
#import "PKColorPicker.h"

@interface PKPaletteStandardColorPickerController : PKPaletteBaseColorPickerController <PKColorPickerDelegate>



@property (retain, nonatomic) PKColorPicker *colorPickerViewController; // ivar: _colorPickerViewController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)colorUserInterfaceStyle;
-(id)init;
-(id)selectedColor;
-(id)viewController;
-(void)colorPickerDidChangeSelectedColor:(id)arg0 ;
-(void)setColorUserInterfaceStyle:(NSInteger)arg0 ;
-(void)setSelectedColor:(id)arg0 ;
-(void)setSelectedColorForPoint:(struct CGPoint )arg0 ;


@end


#endif