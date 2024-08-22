// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKEMERGENCYCARDENABLEDTABLEITEM_H
#define HKEMERGENCYCARDENABLEDTABLEITEM_H

@class UITableView;
@protocol HKMedicalIDEditorSwitchDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorSwitchCell.h"

@interface HKEmergencyCardEnabledTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate>

 {
    HKMedicalIDEditorSwitchCell *_cell;
}


@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)hasPresentableData;
-(id)_editCell;
-(id)_viewCellForTableView:(id)arg0 ;
-(id)footerTextViewString;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)titleForFooter;
-(id)titleForHeader;
-(struct UIEdgeInsets )separatorInset;
-(void)switchWasChanged:(BOOL)arg0 ;


@end


#endif