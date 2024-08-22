// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKQUANTITYSERIESDATAPROVIDER_H
#define HKQUANTITYSERIESDATAPROVIDER_H

@class NSString, HKQuantitySeriesSampleEditor, HKHealthStore, HKQuantitySample, NSMutableArray;
@protocol UITableViewDataSource, UITableViewDelegate, HKQuantitySeriesDataProviderDelegate;

#import <Foundation/Foundation.h>

#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKQuantitySeriesDataProvider : NSObject <UITableViewDataSource, UITableViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSObject<HKQuantitySeriesDataProviderDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) HKQuantitySeriesSampleEditor *editor; // ivar: _editor
@property (nonatomic) BOOL hasSubsamplesToRemove; // ivar: _hasSubsamplesToRemove
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) HKQuantitySample *parentSample; // ivar: _parentSample
@property (retain, nonatomic) NSMutableArray *quantities; // ivar: _quantities
@property (readonly) Class superclass;
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)textForQuantity:(id)arg0 ;
-(void)commitDeletionsIfNeeded;
-(void)deleteQuantity:(id)arg0 ;
-(void)queryForSubsamples:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;


@end


#endif