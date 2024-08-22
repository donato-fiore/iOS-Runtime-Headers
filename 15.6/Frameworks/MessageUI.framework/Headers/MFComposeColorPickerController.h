// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MFCOMPOSECOLORPICKERCONTROLLER_H
#define MFCOMPOSECOLORPICKERCONTROLLER_H

@class UIViewController, PKColorPicker, NSString, UIColor;
@protocol PKColorPickerDelegate, MFComposeColorPickerControllerDelegate;



@interface MFComposeColorPickerController : UIViewController <PKColorPickerDelegate>



@property (retain, nonatomic) PKColorPicker *colorPicker; // ivar: _colorPicker
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MFComposeColorPickerControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIColor *selectedColor; // ivar: _selectedColor
@property (nonatomic) BOOL shouldShowTitleBar; // ivar: _shouldShowTitleBar
@property (readonly) Class superclass;


-(id)initWithSelectedColor:(id)arg0 shouldShowTitleBar:(BOOL)arg1 ;
-(void)closeColorPicker:(id)arg0 ;
-(void)colorPickerDidChangeSelectedColor:(id)arg0 ;
-(void)loadView;
-(void)viewDidLoad;


@end


#endif