// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFLOCATIONPARAMETERCOMPONENTCONTROLLER_H
#define WFLOCATIONPARAMETERCOMPONENTCONTROLLER_H

@class NSString;
@protocol WFLocationPickerViewControllerDelegate;


#import "CKComponentController.h"

@interface WFLocationParameterComponentController : CKComponentController <WFLocationPickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)buttonTapped:(id)arg0 ;
-(void)locationPicker:(id)arg0 didFinishWithValue:(id)arg1 ;
-(void)locationPickerDidCancel:(id)arg0 ;


@end


#endif