// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKEMERGENCYCARDBIRTHDATETABLEITEM_H
#define HKEMERGENCYCARDBIRTHDATETABLEITEM_H

@class NSCalendar;
@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorDateCell.h"

@interface HKEmergencyCardBirthdateTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    HKMedicalIDEditorDateCell *_editableCell;
    NSCalendar *_gregorianCalendar;
}




-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(id)_cachedCalendar;
-(id)_createEditableCell;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)timeZoneDidChange:(id)arg0 ;


@end


#endif