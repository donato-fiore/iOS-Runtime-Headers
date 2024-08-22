// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCARDPRIMARYLANGUAGETABLEITEM_H
#define HKEMERGENCYCARDPRIMARYLANGUAGETABLEITEM_H

@class NSArray;
@protocol HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate, HKEmergencyCardPrimaryLanguageUpdateDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorLanguageCell.h"
#import "_HKMedicalIDMultilineStringCell.h"
#import "HKSpokenLanguage.h"

@interface HKEmergencyCardPrimaryLanguageTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorCellEditDelegate, HKSpokenLanguagesViewControllerDelegate>

 {
    HKMedicalIDEditorLanguageCell *_editableCell;
    _HKMedicalIDMultilineStringCell *_displayCell;
    BOOL _isEditing;
    NSArray *_mostLikelyLanguages;
    NSArray *_allSpokenLanguages;
    HKSpokenLanguage *_currentLanguage;
}


@property (weak, nonatomic) NSObject<HKEmergencyCardPrimaryLanguageUpdateDelegate> *delegate; // ivar: _delegate


-(BOOL)canEditRowAtIndex:(NSInteger)arg0 ;
-(BOOL)hasPresentableData;
-(BOOL)shouldHighlightRowAtIndex:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)commitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(NSInteger)editingStyleForRowAtIndex:(NSInteger)arg0 ;
-(id)_createEditableCell;
-(id)attributedStringForCurrentLanguage;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)title;
-(void)didCancelLanguageSelection;
-(void)didCommitEditingStyle:(NSInteger)arg0 forRowAtIndex:(NSInteger)arg1 ;
-(void)didSelectCellWithLanguage:(id)arg0 ;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)presentSpokenLanguageController;
-(void)setCurrentLanguage:(BOOL)arg0 ;


@end


#endif