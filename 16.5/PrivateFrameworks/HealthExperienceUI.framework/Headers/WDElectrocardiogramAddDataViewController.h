// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDELECTROCARDIOGRAMADDDATAVIEWCONTROLLER_H
#define WDELECTROCARDIOGRAMADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDElectrocardiogramAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_dateEntryItem;
    WDAddDataManualEntryItem *_electrocardiogramClassificationEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSections;
-(id)builderFromDataFile:(id)arg0 startDate:(id)arg1 ;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(id)symptomSamplesForElectrocardiogram:(id)arg0 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)saveHKObjectWithCompletion:(id)arg0 ;


@end


#endif