// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMEDICATIONDOSEEVENTTYPE_H
#define HKMEDICATIONDOSEEVENTTYPE_H

@class NSString;
@protocol _HKStatisticsSampleTypeConfigurationProviding;


#import "HKSampleType.h"

@interface HKMedicationDoseEventType : HKSampleType <_HKStatisticsSampleTypeConfigurationProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)allTypes;
+(id)medicationDoseEventType;
-(BOOL)supportsStatisticOptions:(NSUInteger)arg0 ;
-(NSInteger)aggregationStyleForStatistics;
-(id)canonicalUnitForStatistics;
-(id)underlyingSampleType;
-(void)validateUnitForStatistic:(id)arg0 ;


@end


#endif