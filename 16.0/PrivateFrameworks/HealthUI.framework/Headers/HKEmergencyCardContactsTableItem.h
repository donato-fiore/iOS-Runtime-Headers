// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEMERGENCYCARDCONTACTSTABLEITEM_H
#define HKEMERGENCYCARDCONTACTSTABLEITEM_H

@class UITableViewCell, _HKEmergencyContact;
@protocol HKMedicalIDEditorCellEditDelegate, HKMedicalIDEmergencyContactFlowDelegate, HKEmergencyContactRelationshipPickerDelegate, HKEmergencyCardContactUpdateDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEmergencyContactFlow.h"

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKMedicalIDEmergencyContactFlowDelegate, HKEmergencyContactRelationshipPickerDelegate>

 {
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    HKMedicalIDEmergencyContactFlow *_contactPicker;
}


@property (weak, nonatomic) NSObject<HKEmergencyCardContactUpdateDelegate> *delegate; // ivar: _delegate


-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)refreshFromData:(BOOL)arg0 ;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)contactIndexForRowIndex:(NSInteger)arg0 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(NSInteger)itemTypeForRowIndex:(NSInteger)arg0 ;
-(NSInteger)numberOfRows;
-(id)_dequeueAndConfigureContactEditCellForIndex:(NSInteger)arg0 inTableView:(id)arg1 ;
-(id)_dequeueAndConfigureContactViewCellForIndex:(NSInteger)arg0 inTableView:(id)arg1 ;
-(id)_footerAttributedText;
-(id)_footerAttributedTextForPrimaryProfile;
-(id)_footerAttributedTextForSecondaryProfile;
-(id)_footerTextForSecondaryProfile;
-(id)_footerTextWithGivenName:(id)arg0 ;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(id)titleForFooter;
-(id)titleForHeader;
-(id)viewOnlyTitle;
-(void)_addEmergencyContactToData:(id)arg0 ;
-(void)_presentEmergencyContactPickerIfPossible;
-(void)_setupContactPickingFlow;
-(void)callEmergencyContact:(id)arg0 ;
-(void)emergencyContactFlow:(id)arg0 didSelectContact:(id)arg1 ;
-(void)emergencyContactFlowDidCancel:(id)arg0 ;
-(void)emergencyContactRelationshipPicker:(id)arg0 didChooseRelationshipNamed:(id)arg1 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg0 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif