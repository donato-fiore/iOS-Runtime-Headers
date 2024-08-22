// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKEMERGENCYCARDSHAREINFOTABLEITEM_H
#define HKEMERGENCYCARDSHAREINFOTABLEITEM_H

@class NSString, UITableView;
@protocol HKMedicalIDEditorSwitchDelegate, UITextViewDelegate;


#import "HKEmergencyCardTableItem.h"
#import "HKMedicalIDEditorSwitchCell.h"

@interface HKEmergencyCardShareInfoTableItem : HKEmergencyCardTableItem <HKMedicalIDEditorSwitchDelegate, UITextViewDelegate>

 {
    HKMedicalIDEditorSwitchCell *_cell;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UITableView *tableView; // ivar: _tableView


-(BOOL)hasPresentableData;
-(BOOL)textView:(id)arg0 shouldInteractWithURL:(id)arg1 inRange:(struct _NSRange )arg2 interaction:(NSInteger)arg3 ;
-(id)_editCell;
-(id)_viewCellForTableView:(id)arg0 ;
-(id)footerTextViewString;
-(id)initInEditMode:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndex:(NSInteger)arg1 ;
-(id)titleForFooter;
-(struct UIEdgeInsets )separatorInset;
-(void)switchWasChanged:(BOOL)arg0 ;


@end


#endif