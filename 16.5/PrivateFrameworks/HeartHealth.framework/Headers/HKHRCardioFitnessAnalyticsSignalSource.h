// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKHRCARDIOFITNESSANALYTICSSIGNALSOURCE_H
#define HKHRCARDIOFITNESSANALYTICSSIGNALSOURCE_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKHRCardioFitnessAnalyticsSignalSource : NSObject

@property (readonly, nonatomic) NSString *activeWatchProductType;
@property (readonly, nonatomic) NSString *featureVersion;
@property (readonly, nonatomic) BOOL isImproveHealthAndActivityAllowed;


-(NSInteger)bucketedAgeForDateOfBirthComponents:(id)arg0 ;
-(NSInteger)bucketedAgeWithError:(*id)arg0 ;
-(id)biologicalSexStringForBiologicalSex:(NSInteger)arg0 ;
-(id)biologicalSexStringWithError:(*id)arg0 ;


@end


#endif