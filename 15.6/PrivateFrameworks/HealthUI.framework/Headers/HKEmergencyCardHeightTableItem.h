// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDHEIGHTTABLEITEM_H
#define HKEMERGENCYCARDHEIGHTTABLEITEM_H

@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorHeightCell.h"

@interface HKEmergencyCardHeightTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    HKMedicalIDEditorHeightCell *_editableCell;
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