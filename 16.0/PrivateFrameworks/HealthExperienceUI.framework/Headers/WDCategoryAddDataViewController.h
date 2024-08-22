// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDCATEGORYADDDATAVIEWCONTROLLER_H
#define WDCATEGORYADDDATAVIEWCONTROLLER_H

@class NSString, HKValueRange;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDCategoryAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>



@property (readonly, nonatomic) WDAddDataManualEntryItem *categoryValueEntryItem; // ivar: _categoryValueEntryItem
@property (readonly, nonatomic) WDAddDataManualEntryItem *dateEntryItem; // ivar: _dateEntryItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HKValueRange *selectedDateRange;
@property (readonly) Class superclass;


-(BOOL)_hasCategoryValueEntryItem;
-(BOOL)useDuration;
-(BOOL)useSingleStartAndEndDate;
-(NSInteger)_defaultSelectedIndex;
-(NSInteger)numberOfSections;
-(id)_categoryCells;
-(id)_orderedTitlesForCategoryValuePicker;
-(id)defaultEditingItem;
-(id)generateHKObjects;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)updateSavingEnabled;
-(void)validateDataWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif