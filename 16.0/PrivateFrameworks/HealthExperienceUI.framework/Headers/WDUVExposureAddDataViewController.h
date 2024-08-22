// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WDUVEXPOSUREADDDATAVIEWCONTROLLER_H
#define WDUVEXPOSUREADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDUVExposureAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_dateRangeEntryItem;
    WDAddDataManualEntryItem *_valueEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


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