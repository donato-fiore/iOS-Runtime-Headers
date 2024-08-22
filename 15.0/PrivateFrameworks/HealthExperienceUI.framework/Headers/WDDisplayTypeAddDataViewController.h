// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDDISPLAYTYPEADDDATAVIEWCONTROLLER_H
#define WDDISPLAYTYPEADDDATAVIEWCONTROLLER_H

@class NSString;
@protocol WDAddDataManualEntryItemDelegate;


#import "WDAddDataViewController.h"
#import "WDAddDataManualEntryItem.h"

@interface WDDisplayTypeAddDataViewController : WDAddDataViewController <WDAddDataManualEntryItemDelegate>

 {
    WDAddDataManualEntryItem *_dateTimeEntryItem;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) WDAddDataManualEntryItem *valueFieldManualEntryItem; // ivar: _valueFieldManualEntryItem


-(NSInteger)numberOfSections;
-(id)createValueFieldManualEntryItem;
-(id)defaultEditingItem;
-(id)generateHKObjects;
-(id)manualEntryItemsForSection:(NSInteger)arg0 ;
-(void)_setDefaultValuesIfNecessary;
-(void)_updateManualEntryItemWithCurrentBMI:(id)arg0 ;
-(void)manualEntryItemDidUpdate:(id)arg0 ;
-(void)validateDataWithCompletion:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif