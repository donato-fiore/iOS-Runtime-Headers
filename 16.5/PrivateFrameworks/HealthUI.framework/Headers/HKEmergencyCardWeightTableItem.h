// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKEMERGENCYCARDWEIGHTTABLEITEM_H
#define HKEMERGENCYCARDWEIGHTTABLEITEM_H

@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorWeightCell.h"

@interface HKEmergencyCardWeightTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    HKMedicalIDEditorWeightCell *_editableCell;
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
-(void)commitEditing;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)localeDidChange:(id)arg0 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;


@end


#endif