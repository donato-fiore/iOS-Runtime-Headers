// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLASSETMANAGER_H
#define APODMLASSETMANAGER_H

@class NSString, NSCache, TRIClient, TRIExperimentIdentifiers;

#import <Foundation/Foundation.h>

#import "APOdmlFeatureStorage.h"
#import "APOdmlUnfairLock.h"

@interface APOdmlAssetManager : NSObject

@property (readonly, nonatomic) int deploymentID;
@property (readonly, nonatomic) NSString *experimentID;
@property (retain, nonatomic) APOdmlFeatureStorage *featureStorage; // ivar: _featureStorage
@property (readonly, nonatomic) NSCache *modelCache; // ivar: _modelCache
@property (readonly, nonatomic) APOdmlUnfairLock *modelCacheLock; // ivar: _modelCacheLock
@property (readonly, nonatomic) NSString *odmlNamespace;
@property (readonly, nonatomic) int odmlVersion;
@property (readonly, nonatomic) NSString *treatmentID;
@property (readonly, nonatomic) TRIClient *trialClient; // ivar: _trialClient
@property (readonly, nonatomic) TRIExperimentIdentifiers *trialIdentifiers; // ivar: _trialIdentifiers
@property (readonly, nonatomic) NSString *trialNamespace; // ivar: _trialNamespace


-(id)booleanValueForFactor:(id)arg0 ;
-(id)currentMLModel;
-(id)doubleValueForFactor:(id)arg0 ;
-(id)featureForName:(id)arg0 ;
-(id)initWithNamespace:(id)arg0 andClient:(id)arg1 ;
-(id)longValueForFactor:(id)arg0 ;
-(id)pathForFactor:(id)arg0 isDirectory:(BOOL)arg1 ;
-(id)saveFeatureFromObject:(id)arg0 withName:(id)arg1 ;
-(id)stringValueForFactor:(id)arg0 ;
-(void)deleteExpiredFeaturesForName:(id)arg0 ;


@end


#endif