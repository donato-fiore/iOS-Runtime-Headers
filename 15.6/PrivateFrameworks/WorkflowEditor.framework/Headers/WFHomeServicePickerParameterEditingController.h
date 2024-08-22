// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFHOMESERVICEPICKERPARAMETEREDITINGCONTROLLER_H
#define WFHOMESERVICEPICKERPARAMETEREDITINGCONTROLLER_H

@class NSString, HMHome;
@protocol HUServicePickerViewControllerDelegate;


#import "WFUIKitParameterEditingController.h"

@interface WFHomeServicePickerParameterEditingController : WFUIKitParameterEditingController <HUServicePickerViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (readonly) Class superclass;


-(void)createViewControllerWithInitialState:(id)arg0 completionHandler:(id)arg1 ;
-(void)servicePickerDidCancel:(id)arg0 ;
-(void)servicePickerDidFinish:(id)arg0 selectedServices:(id)arg1 ;


@end


#endif