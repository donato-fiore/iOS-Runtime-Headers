// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCARDCONTACTSTABLEITEM_H
#define HKEMERGENCYCARDCONTACTSTABLEITEM_H

@class UITableViewCell, _HKEmergencyContact;
@protocol HKMedicalIDEditorCellEditDelegate, HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate, HKEmergencyCardContactUpdateDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKEmergencyContactPicker.h"
#import "HKCoreTelephonyUtilities.h"

@interface HKEmergencyCardContactsTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKEmergencyContactPickerDelegate, HKEmergencyContactRelationshipPickerDelegate>

 {
    UITableViewCell *_lastDequeuedAddContactCell;
    _HKEmergencyContact *_selectedContact;
    HKEmergencyContactPicker *_contactPicker;
    BOOL _selectedContactIsBeingAdded;
}


@property (retain, nonatomic) HKCoreTelephonyUtilities *coreTelephonyUtilities; // ivar: _coreTelephonyUtilities
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
-(void)_didSelectContact:(id)arg0 property:(id)arg1 ;
-(void)_presentEmergencyContactPicker;
-(void)callEmergencyContact:(id)arg0 ;
-(void)emergencyContactPicker:(id)arg0 didSelectContact:(id)arg1 ;
-(void)emergencyContactPicker:(id)arg0 didSelectContactProperty:(id)arg1 ;
-(void)emergencyContactRelationshipPicker:(id)arg0 didChooseRelationshipNamed:(id)arg1 ;
-(void)emergencyContactRelationshipPickerDidCancel:(id)arg0 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)medicalIDEditorCellDidTapLabel:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndex:(NSInteger)arg1 ;


@end


#endif