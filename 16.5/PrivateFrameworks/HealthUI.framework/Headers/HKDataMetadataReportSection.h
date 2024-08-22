// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKDATAMETADATAREPORTSECTION_H
#define HKDATAMETADATAREPORTSECTION_H

@class NSString, HKHealthStore, HKSample;


#import "HKDataMetadataSection.h"

@interface HKDataMetadataReportSection : HKDataMetadataSection

@property (readonly, nonatomic) NSString *detailedReportName; // ivar: _detailedReportName
@property (readonly, nonatomic) HKHealthStore *healthStore; // ivar: _healthStore
@property (readonly, nonatomic) HKSample *sample; // ivar: _sample


-(NSUInteger)numberOfRowsInSection;
-(id)cellForIndex:(NSUInteger)arg0 tableView:(id)arg1 ;
-(id)documentImageForXMLFiles;
-(id)initWithSample:(id)arg0 healthStore:(id)arg1 ;
-(id)sectionTitle;
-(void)selectCellForIndex:(NSUInteger)arg0 navigationController:(id)arg1 animated:(BOOL)arg2 ;


@end


#endif