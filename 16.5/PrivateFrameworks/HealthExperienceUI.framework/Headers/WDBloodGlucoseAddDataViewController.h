// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDBLOODGLUCOSEADDDATAVIEWCONTROLLER_H
#define WDBLOODGLUCOSEADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntrySpinnerDataSource;


#import "WDDisplayTypeAddDataViewController.h"
#import "WDAddDataManualEntrySpinner.h"

@interface WDBloodGlucoseAddDataViewController : WDDisplayTypeAddDataViewController <WDAddDataManualEntrySpinnerDataSource>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) WDAddDataManualEntrySpinner *mealTimeEntryItem; // ivar: _mealTimeEntryItem
@property (readonly) Class superclass;


-(NSInteger)numberOfRowsInManualEntrySpinner:(id)arg0 ;
-(id)defaultMetadata;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)manualEntrySpinner:(id)arg0 titleForRow:(NSInteger)arg1 ;


@end


#endif