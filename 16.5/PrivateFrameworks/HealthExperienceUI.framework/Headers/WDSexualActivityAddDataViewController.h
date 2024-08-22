// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WDSEXUALACTIVITYADDDATAVIEWCONTROLLER_H
#define WDSEXUALACTIVITYADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDSexualActivityAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_dateEntryItem;
    WDAddDataManualEntryItem *_protectionUsedEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)numberOfSections;
-(id)generateHKObjects;
-(id)initWithDisplayType:(id)arg0 healthStore:(id)arg1 unitController:(id)arg2 initialStartDate:(id)arg3 dateCache:(id)arg4 ;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;


@end


#endif