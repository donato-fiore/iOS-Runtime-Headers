// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUTRIGGERTIMECONDITIONDETAILEDITORVIEWCONTROLLER_H
#define HUTRIGGERTIMECONDITIONDETAILEDITORVIEWCONTROLLER_H

@class NSString, HFTimeRangeCondition;
@protocol HUSignificantEventOffsetPickerDelegate, HUInlineDatePickerCellDelegate, HUTriggerTimeConditionDetailEditorDelegate;


#import "HUItemTableViewController.h"
#import "HUTriggerTimeConditionDetailEditorItemManager.h"

@interface HUTriggerTimeConditionDetailEditorViewController : HUItemTableViewController <HUSignificantEventOffsetPickerDelegate, HUInlineDatePickerCellDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<HUTriggerTimeConditionDetailEditorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUTriggerTimeConditionDetailEditorItemManager *itemManager;
@property (readonly, nonatomic) HFTimeRangeCondition *rangeCondition;
@property (readonly) Class superclass;


-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)allCellClasses;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithRangeCondition:(id)arg0 delegate:(id)arg1 ;
-(void)_cancel:(id)arg0 ;
-(void)_done:(id)arg0 ;
-(void)datePickerCell:(id)arg0 didSelectDate:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)significantEventOffsetPicker:(id)arg0 didSelectOffset:(id)arg1 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif