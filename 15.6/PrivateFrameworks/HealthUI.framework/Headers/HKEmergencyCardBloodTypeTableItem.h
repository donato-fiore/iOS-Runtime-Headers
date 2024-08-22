// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDBLOODTYPETABLEITEM_H
#define HKEMERGENCYCARDBLOODTYPETABLEITEM_H

@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorPickerCell.h"
#import "_HKMedicalIDMultilineStringCell.h"

@interface HKEmergencyCardBloodTypeTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    HKMedicalIDEditorPickerCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_displayCell;
    BOOL _isEditing;
}




-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(id)_createEditableCell;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;


@end


#endif