// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKEMERGENCYCARDEMERGENCYACCESSTABLEITEM_H
#define HKEMERGENCYCARDEMERGENCYACCESSTABLEITEM_H

@class UITableViewCell;
@protocol HKMedicalIDEditorCellEditDelegate;


#import "HKEmergencyCardGroupTableItem.h"
#import "HKEmergencyCardShareInfoTableItem.h"
#import "HKEmergencyCardEnabledTableItem.h"
#import "HKEmergencyCardFooterTableItem.h"

@interface HKEmergencyCardEmergencyAccessTableItem : HKEmergencyCardGroupTableItem <HKMedicalIDEditorCellEditDelegate>

 {
    UITableViewCell *_lastDequeuedAddContactCell;
    HKEmergencyCardShareInfoTableItem *_shareInfoTableItem;
    HKEmergencyCardEnabledTableItem *_enabledTableItem;
    HKEmergencyCardFooterTableItem *_enabledFooterItem;
    HKEmergencyCardFooterTableItem *_shareInfoFooterItem;
}


@property (nonatomic) BOOL showsEmergencyAccessState; // ivar: _showsEmergencyAccessState
@property (nonatomic) BOOL showsShowWhenLockedState; // ivar: _showsShowWhenLockedState


-(BOOL)hasPresentableData;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndex:(NSInteger)arg1 ;
-(id)initInEditMode:(BOOL)arg0 shouldShowLocked:(BOOL)arg1 shouldShareInfo:(BOOL)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)titleForHeader;
-(id)viewOnlyTitle;
-(struct UIEdgeInsets )separatorInset;
-(void)medicalIDEditorCellDidChangeValue:(id)arg0 ;
-(void)setIsSecondaryProfile:(BOOL)arg0 ;


@end


#endif