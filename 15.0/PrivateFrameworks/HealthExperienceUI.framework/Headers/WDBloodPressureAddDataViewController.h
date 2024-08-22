// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDBLOODPRESSUREADDDATAVIEWCONTROLLER_H
#define WDBLOODPRESSUREADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDBloodPressureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_dateTimeEntryItem;
    WDAddDataManualEntryItem *_systolicEntryItem;
    WDAddDataManualEntryItem *_diastolicEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_systolicAndDiastolicHaveValues;
-(NSInteger)numberOfSections;
-(id)defaultEditingItem;
-(id)generateHKObjects;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)validateDataWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif