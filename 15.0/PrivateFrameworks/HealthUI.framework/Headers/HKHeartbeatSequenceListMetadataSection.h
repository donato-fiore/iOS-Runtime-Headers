// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKHEARTBEATSEQUENCELISTMETADATASECTION_H
#define HKHEARTBEATSEQUENCELISTMETADATASECTION_H

@class HKHealthStore, NSArray;
@protocol HKHeartbeatSequenceListMetadataSectionDelegate;


#import "HKDataMetadataSection.h"
#import "HKDisplayTypeController.h"
#import "HKUnitPreferenceController.h"

@interface HKHeartbeatSequenceListMetadataSection : HKDataMetadataSection

@property (weak, nonatomic) NSObject<HKHeartbeatSequenceListMetadataSectionDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) HKDisplayTypeController *displayTypeController; // ivar: _displayTypeController
@property (retain, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (retain, nonatomic) NSArray *sequencesSamples; // ivar: _sequencesSamples
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithEvent:(id)arg0 healthStore:(id)arg1 displayTypeController:(id)arg2 unitController:(id)arg3 delegate:(id)arg4 ;
-(id)sectionTitle;
-(void)_startAssociatedSequenceQueryForEvent:(id)arg0 ;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif