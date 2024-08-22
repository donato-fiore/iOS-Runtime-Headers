// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SIRIUIOBJECTPICKERVIEWCONTROLLER_H
#define SIRIUIOBJECTPICKERVIEWCONTROLLER_H

@class UIViewController, SAUIDomainObjectPicker;
@protocol SiriUIObjectPickerViewControllerDelegate;



@interface SiriUIObjectPickerViewController : UIViewController

@property (readonly, nonatomic, getter=_picker) SAUIDomainObjectPicker *picker; // ivar: _picker
@property (weak, nonatomic) NSObject<SiriUIObjectPickerViewControllerDelegate> *pickerDelegate; // ivar: _pickerDelegate


+(id)pickerControllerWithPicker:(id)arg0 ;
-(id)initWithPicker:(id)arg0 ;
-(void)showPicker:(id)arg0 ;


@end


#endif