// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDMENSTRUATIONADDDATAVIEWCONTROLLER_H
#define WDMENSTRUATIONADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntrySpinnerDataSource;


#import "WDCategoryAddDataViewController.h"
#import "WDAddDataManualEntrySpinner.h"

@interface WDMenstruationAddDataViewController : WDCategoryAddDataViewController <WDAddDataManualEntrySpinnerDataSource>

 {
    WDAddDataManualEntrySpinner *_isStartOfCycleEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)useSingleStartAndEndDate;
-(NSInteger)numberOfRowsInManualEntrySpinner:(id)arg0 ;
-(NSInteger)numberOfSections;
-(id)defaultMetadata;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)manualEntrySpinner:(id)arg0 titleForRow:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;


@end


#endif