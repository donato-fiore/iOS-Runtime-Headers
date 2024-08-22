// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCOLORPICKER_H
#define PKCOLORPICKER_H

@class UIViewController, UIColor;
@protocol _PKColorPickerViewDelegate, PKColorPickerDelegate;


#import "_PKColorPickerView.h"

@interface PKColorPicker : UIViewController <_PKColorPickerViewDelegate>



@property (retain, nonatomic) _PKColorPickerView *colorPickerView; // ivar: _colorPickerView
@property (nonatomic) NSInteger colorUserInterfaceStyle;
@property (weak, nonatomic) NSObject<PKColorPickerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIColor *selectedColor;


+(id)_representableColorForColor:(id)arg0 ;
-(BOOL)_canShowWhileLocked;
-(id)init;
-(struct CGSize )preferredContentSize;
-(void)_colorPickerViewDidChangeSelectedColor:(id)arg0 ;
-(void)_colorPickerViewUserDidTouchUpInside:(id)arg0 ;
-(void)_setInitialColorForSpringLoading:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif