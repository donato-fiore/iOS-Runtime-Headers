// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SIRIUIPRIVATEPEOPLEPICKERVIEWCONTROLLER_H
#define SIRIUIPRIVATEPEOPLEPICKERVIEWCONTROLLER_H

@class SAABPersonPicker, NSString;
@protocol SiriUIObjectPickerViewControllerDelegate;


#import "SiriUISnippetViewController.h"
#import "SiriUIObjectPickerViewController.h"

@interface SiriUIPrivatePeoplePickerViewController : SiriUISnippetViewController <SiriUIObjectPickerViewControllerDelegate>

 {
    SAABPersonPicker *_picker;
    SiriUIObjectPickerViewController *_pickerController;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)usePlatterStyle;
-(CGFloat)desiredHeightForFooterView;
-(CGFloat)desiredHeightForWidth:(CGFloat)arg0 ;
-(Class)footerViewClass;
-(id)_pickerController;
-(id)initWithSnippet:(id)arg0 ;
-(id)viewControllerForPickerPresentation:(id)arg0 ;
-(void)_showPicker:(id)arg0 ;
-(void)configureReusableFooterView:(id)arg0 ;
-(void)loadView;
-(void)pickerViewController:(id)arg0 didSelectObject:(id)arg1 fromPicker:(id)arg2 ;
-(void)pickerViewController:(id)arg0 willDismissPicker:(id)arg1 ;
-(void)pickerViewController:(id)arg0 willPresentPicker:(id)arg1 ;


@end


#endif