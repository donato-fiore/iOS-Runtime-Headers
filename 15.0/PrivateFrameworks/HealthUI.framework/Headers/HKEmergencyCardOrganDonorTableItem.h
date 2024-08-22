// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCARDORGANDONORTABLEITEM_H
#define HKEMERGENCYCARDORGANDONORTABLEITEM_H

@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorPickerCell.h"

@interface HKEmergencyCardOrganDonorTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    HKMedicalIDEditorPickerCell *_editableCell;
    BOOL _isEditing;
}




-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(id)_createEditableCell;
-(id)possibleValues;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)commitEditing;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)promptOrganDonationRegistrationIfPossibleWithCompletion:(id)arg0 ;


@end


#endif