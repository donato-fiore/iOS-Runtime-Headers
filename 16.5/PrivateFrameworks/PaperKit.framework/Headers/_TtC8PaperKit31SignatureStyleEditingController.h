// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8PAPERKIT31SIGNATURESTYLEEDITINGCONTROLLER_H
#define _TTC8PAPERKIT31SIGNATURESTYLEEDITINGCONTROLLER_H

@protocol UIPopoverPresentationControllerDelegate, UIColorPickerViewControllerDelegate;

#import <Foundation/Foundation.h>


@interface _TtC8PaperKit31SignatureStyleEditingController : NSObject <UIPopoverPresentationControllerDelegate, UIColorPickerViewControllerDelegate>

 {
    ? controller;
    ? signatureStyleEditingView;
    ? isColorPickerPresented;
}




-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)init;
-(void)colorPickerViewController:(id)arg0 didSelectColor:(id)arg1 continuously:(BOOL)arg2 ;
-(void)colorPickerViewControllerDidFinish:(id)arg0 ;
-(void)didTapColorSwatchWithSender:(id)arg0 ;
-(void)didTapStrokeWidthControlWithSender:(id)arg0 ;


@end


#endif