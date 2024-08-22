// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC19HEALTHMEDICATIONSUI27MEDMOJIPICKERVIEWCONTROLLER_H
#define _TTC19HEALTHMEDICATIONSUI27MEDMOJIPICKERVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC19HealthMedicationsUI27MedmojiPickerViewController : UIViewController {
    ? $__lazy_storage_$_medicationView;
    ? shapeButton;
    ? colorButton;
    ? $__lazy_storage_$_medmojiCategorySelectionView;
    ? shapePublisher;
    ? $__lazy_storage_$_shapeSelectionViewController;
    ? $__lazy_storage_$_colorSelectionViewController;
    ? delegate;
    ? cancellables;
    ? config;
}




-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)cancelButtonTappped:(id)arg0 ;
-(void)colorButtonTappped:(id)arg0 ;
-(void)doneButtonTappped:(id)arg0 ;
-(void)shapeButtonTappped:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif