// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFENUMERATIONPARAMETERCOMPONENTCONTROLLER_H
#define WFENUMERATIONPARAMETERCOMPONENTCONTROLLER_H

@class UISegmentedControl, NSString;
@protocol WFEnumerationTextTokenChooserPresenter, WFParameterValuePickerViewControllerDelegate;


#import "CKComponentController.h"
#import "WFEnumerationValuePicker.h"

@interface WFEnumerationParameterComponentController : CKComponentController <WFEnumerationTextTokenChooserPresenter, WFParameterValuePickerViewControllerDelegate>

 {
    UISegmentedControl *_segmentedControl;
    WFEnumerationValuePicker *_enumValuePicker;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)completeEditing;
-(void)didUnmount;
-(void)didUpdateComponent;
-(void)loadDynamicEnumerationValuesWithCompletionHandler:(id)arg0 ;
-(void)presentEnumerationValuePickerWithInitialCollection:(id)arg0 ;
-(void)presentTokenChooser:(id)arg0 ;
-(void)presentValuePicker:(id)arg0 ;
-(void)willUnmount;


@end


#endif