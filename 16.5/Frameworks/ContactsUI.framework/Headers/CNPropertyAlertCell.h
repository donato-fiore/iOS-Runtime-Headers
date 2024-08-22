// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNPROPERTYALERTCELL_H
#define CNPROPERTYALERTCELL_H

@class NSString;
@protocol CNPickerControllerDelegate;


#import "CNPropertySimpleCell.h"
#import "CNPropertyGroupAlertItem.h"

@interface CNPropertyAlertCell : CNPropertySimpleCell <CNPickerControllerDelegate>



@property (readonly, nonatomic) CNPropertyGroupAlertItem *alertItem;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)shouldIndentWhileEditing;
+(BOOL)wantsChevron;
-(BOOL)allowsCellSelection;
-(BOOL)shouldPerformDefaultAction;
-(id)alertGroup;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)performDefaultAction;
-(void)picker:(id)arg0 didPickItem:(id)arg1 ;
-(void)pickerDidCancel:(id)arg0 ;
-(void)setCardGroupItem:(id)arg0 ;


@end


#endif