// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PHASSETANALYSISSTATEPROPERTIES_H
#define PHASSETANALYSISSTATEPROPERTIES_H

@class NSMutableDictionary;


#import "PHAssetPropertySet.h"

@interface PHAssetAnalysisStateProperties : PHAssetPropertySet

@property (readonly, nonatomic) NSMutableDictionary *fetchDictionariesByWorkerType; // ivar: _fetchDictionariesByWorkerType


+(BOOL)createsPropertySetObjectWithCustomImplementation;
+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
+(id)propertiesToFetch;
+(id)propertySetName;
-(id)initWithFetchDictionary:(id)arg0 asset:(id)arg1 prefetched:(BOOL)arg2 ;
-(int)analysisStateForWorkerType:(short)arg0 outLastIgnoreDate:(*id)arg1 outIgnoreUntilDate:(*id)arg2 ;


@end


#endif