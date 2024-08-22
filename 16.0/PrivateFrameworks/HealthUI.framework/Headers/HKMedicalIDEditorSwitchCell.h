// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKMEDICALIDEDITORSWITCHCELL_H
#define HKMEDICALIDEDITORSWITCHCELL_H

@class UITableViewCell, UISwitch;
@protocol HKMedicalIDEditorSwitchDelegate;



@interface HKMedicalIDEditorSwitchCell : UITableViewCell {
    UISwitch *_switch;
}


@property (weak, nonatomic) NSObject<HKMedicalIDEditorSwitchDelegate> *delegate; // ivar: _delegate


-(id)initWithTitle:(id)arg0 defaultState:(BOOL)arg1 ;
-(void)_switchSwitched:(id)arg0 ;
-(void)setUIDisabled;


@end


#endif