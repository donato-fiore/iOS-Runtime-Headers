// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFONTPICKERCONTROLLER_H
#define UIFONTPICKERCONTROLLER_H

@class NSString, UIFontDescriptor;
@protocol UIFontPickerDelegate, UIFontPicker;

#import <Foundation/Foundation.h>

#import "UIFontPickerController.h"
#import "UIFontPickerViewController.h"

@interface UIFontPickerController : NSObject <UIFontPickerDelegate, UIFontPicker>

 {
    UIFontPickerController *_strongSelf;
    UIFontPickerViewController *_pickerController;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIFontPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (retain, nonatomic) UIFontDescriptor *selectedFont;
@property (retain, nonatomic) UIFontDescriptor *selectedFontDescriptor; // ivar: _selectedFontDescriptor
@property (readonly) Class superclass;


-(BOOL)presentFontPickerFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(BOOL)presentFontPickerFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(id)init;
-(id)remoteViewController;
-(void)fontPickerDidPickFont:(id)arg0 ;
-(void)fontPickerWasCancelled:(id)arg0 ;


@end


#endif