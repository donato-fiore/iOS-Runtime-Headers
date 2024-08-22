// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDSTATISTICSCOLLECTIONCALCULATORCACHINGSOURCEORDERPROVIDER_H
#define HDSTATISTICSCOLLECTIONCALCULATORCACHINGSOURCEORDERPROVIDER_H

@class NSMutableDictionary, NSArray;


#import "HDStatisticsCollectionCalculatorDefaultSourceOrderProvider.h"

@interface HDStatisticsCollectionCalculatorCachingSourceOrderProvider : HDStatisticsCollectionCalculatorDefaultSourceOrderProvider {
    NSMutableDictionary *_cachedSources;
    NSArray *_cachedOrderedSourceIDs;
}




+(id)sleepSourceOrderProviderForProfile:(id)arg0 ;
-(id)initWithProfile:(id)arg0 quantityType:(id)arg1 ;
-(id)orderedSourceIDsWithUnorderedIDs:(id)arg0 ;
-(id)sourceForSourceID:(NSInteger)arg0 ;


@end


#endif