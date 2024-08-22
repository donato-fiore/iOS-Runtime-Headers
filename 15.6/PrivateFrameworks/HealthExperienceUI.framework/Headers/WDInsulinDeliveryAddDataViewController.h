// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WDINSULINDELIVERYADDDATAVIEWCONTROLLER_H
#define WDINSULINDELIVERYADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate;


#import "WDDisplayTypeAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"
#import "WDAddDataManualEntrySpinner.h"

@interface WDInsulinDeliveryAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource, WDAddDataManualEntryItemDelegate>



@property (retain, nonatomic) WDAddDataManualEntryItem *dateTimeEntryItem; // ivar: _dateTimeEntryItem
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) WDAddDataManualEntrySpinner *deliveryReasonEntryItem; // ivar: _deliveryReasonEntryItem
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfRowsInManualEntrySpinner:(id)arg0 ;
-(NSInteger)numberOfSections;
-(id)defaultMetadata;
-(id)generateHKObjects;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)manualEntrySpinner:(id)arg0 titleForRow:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)validateDataWithCompletion:(id)arg0 ;


@end


#endif