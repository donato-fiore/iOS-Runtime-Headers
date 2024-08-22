// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8PAPERKIT26TEXTSTYLEEDITINGCONTROLLER_H
#define _TTC8PAPERKIT26TEXTSTYLEEDITINGCONTROLLER_H

@protocol _TtP8PaperKit34ValueEditingViewControllerDelegate_, UIFontPickerViewControllerDelegate, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit26TextStyleEditingController : NSObject <_TtP8PaperKit34ValueEditingViewControllerDelegate_, UIFontPickerViewControllerDelegate, UIColorPickerViewControllerDelegate, UIPopoverPresentationControllerDelegate>

 {
    ? controller;
    ? textStyleEditingView;
    ? displayAttributes;
    ? isCompactUI;
    ? isColorPickerPresented;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)init;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;
-(void)didTapBoldTextStyle;
-(void)didTapColorSwatchWithSender:(id)arg0 ;
-(void)didTapFontButton;
-(void)didTapFontSizeButton;
-(void)didTapItalicTextStyle;
-(void)didTapStrikethroughTextStyle;
-(void)didTapUnderlineTextStyle;
-(void)fontPickerViewControllerDidPickFont:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)textAlignmentControlValueChanged;
-(void)valueEditingViewController:(id)arg0 didChangeValue:(NSInteger)arg1 ;
-(void)valueEditingViewController:(id)arg0 didFinishChangingValue:(NSInteger)arg1 ;
-(void)valueEditingViewController:(id)arg0 didStartChangingValue:(NSInteger)arg1 ;


@end


#endif