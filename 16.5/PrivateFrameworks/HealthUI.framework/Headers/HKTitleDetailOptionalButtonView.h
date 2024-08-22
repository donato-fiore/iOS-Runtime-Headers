// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTITLEDETAILOPTIONALBUTTONVIEW_H
#define HKTITLEDETAILOPTIONALBUTTONVIEW_H

@class UIView, UILabel, UIButton, NSArray;



@interface HKTitleDetailOptionalButtonView : UIView {
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIButton *_button;
    id *_buttonAction;
    NSArray *_buttonPresentConstraints;
    NSArray *_buttonOmittedConstraints;
}




-(id)_buttonConfigurationWithButtonTitle:(id)arg0 ;
-(id)init;
-(void)buttonTapped;
-(void)populateWithTitle:(id)arg0 detail:(id)arg1 buttonText:(id)arg2 buttonAction:(id)arg3 ;
-(void)setUp;


@end


#endif