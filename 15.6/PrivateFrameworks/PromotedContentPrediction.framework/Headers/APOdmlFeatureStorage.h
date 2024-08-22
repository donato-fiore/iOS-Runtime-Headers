// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef APODMLFEATURESTORAGE_H
#define APODMLFEATURESTORAGE_H

@class NSString;


#import "APOdmlCoreDataStorage.h"

@interface APOdmlFeatureStorage : APOdmlCoreDataStorage

@property (nonatomic) int deploymentID; // ivar: _deploymentID
@property (retain, nonatomic) NSString *experimentID; // ivar: _experimentID
@property (retain, nonatomic) NSString *treatmentID; // ivar: _treatmentID
@property (retain, nonatomic) NSString *trialNamespace; // ivar: _trialNamespace


-(id)featureForName:(id)arg0 ;
-(id)featureForName:(id)arg0 backgroundContext:(id)arg1 ;
-(id)featuresForName:(id)arg0 fetchLimit:(NSUInteger)arg1 backgroundContext:(id)arg2 ;
-(id)initWithExperimentID:(id)arg0 treatmentID:(id)arg1 deploymentID:(int)arg2 trialNamespace:(id)arg3 ;
-(id)saveFeatureFromObject:(id)arg0 withName:(id)arg1 ;
-(void)cleanupKeychain;
-(void)deleteExpiredFeaturesForName:(id)arg0 ;


@end


#endif