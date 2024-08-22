// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDATAMETADATAVIEWALLQUANTITYSERIESSECTION_H
#define HKDATAMETADATAVIEWALLQUANTITYSERIESSECTION_H

@class NSString, HKSample;
@protocol HKQuantitySeriesDataProviderDelegate, HKDataMetadataViewControllerDelegate;


#import "HKDataMetadataSimpleSection.h"

@interface HKDataMetadataViewAllQuantitySeriesSection : HKDataMetadataSimpleSection <HKQuantitySeriesDataProviderDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HKDataMetadataViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) id *reloadMetaDataVC; // ivar: _reloadMetaDataVC
@property (retain) HKSample *sample; // ivar: _sample
@property (readonly) Class superclass;


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)initWithSample:(id)arg0 delegate:(id)arg1 ;
-(void)reloadSampleData;
-(void)sampleDidChange:(id)arg0 ;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif