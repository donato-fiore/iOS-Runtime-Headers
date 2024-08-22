// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC25HEALTHMEDICATIONSVISIONUI41MEDICATIONDATASCANNERACTIONVIEWCONTROLLER_H
#define _TTC25HEALTHMEDICATIONSVISIONUI41MEDICATIONDATASCANNERACTIONVIEWCONTROLLER_H

@class OBWelcomeFullCenterContentController;



@interface _TtC25HealthMedicationsVisionUI41MedicationDataScannerActionViewController : OBWelcomeFullCenterContentController {
    ? primaryButtonTitle;
    ? primaryButtonImage;
    ? primaryButton;
    ? cancelButtonTitle;
    ? cancelButton;
    ? titleText;
    ? detailText;
    ? detailMaxNumberOfLines;
    ? contentHeaderView;
    ? contentHeaderHeight;
    ? topPaddingConstraint;
    ? customContentView;
    ? actionHandler;
    ? cancelHandler;
    ? showsBackground;
    ? $__lazy_storage_$_blurView;
}




-(id)initWithTitle:(id)arg0 detailText:(id)arg1 icon:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(id)initWithTitle:(id)arg0 detailText:(id)arg1 symbolName:(id)arg2 contentLayout:(NSInteger)arg3 ;
-(void)hxui_primaryFooterButtonTapped;
-(void)hxui_secondaryFooterButtonTapped;
-(void)viewDidLoad;


@end


#endif