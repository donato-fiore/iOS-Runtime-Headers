// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDMULTILINETEXTTABLEITEM_H
#define HKEMERGENCYCARDMULTILINETEXTTABLEITEM_H

@protocol HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate, HKEmergencyCardRowHeightChangeDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorMultilineStringCell.h"

@interface HKEmergencyCardMultilineTextTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEditorCellHeightChangeDelegate>

 {
    HKMedicalIDEditorMultilineStringCell *_editableCell;
}


@property (weak, nonatomic) NSObject<HKEmergencyCardRowHeightChangeDelegate> *rowHeightChangeDelegate; // ivar: _rowHeightChangeDelegate


-(CGFloat)_cellFittedHeightWithWidth:(CGFloat)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndex:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(id)_editableCell;
-(id)_multilineStringValue;
-(id)_placeholderText;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(void)_configureEditableCell:(id)arg0 ;
-(void)_updateMultilineStringValueWithValue:(id)arg0 ;
-(void)commitEditing;
-(void)medicalIDEditorCell:(id)arg0 didChangeHeight:(CGFloat)arg1 keepRectVisible:(struct CGRect )arg2 inView:(id)arg3 ;
-(void)medicalIDEditorCellDidBeginEditing:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)medicalIDEditorCellDidChangeSelection:(id)arg0 keepRectVisible:(struct CGRect )arg1 inView:(id)arg2 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)setData:(id)arg0 ;


@end


#endif