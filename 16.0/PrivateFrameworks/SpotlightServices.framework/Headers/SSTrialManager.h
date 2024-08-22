// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSTRIALMANAGER_H
#define SSTRIALMANAGER_H

@class TRIClient, NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface SSTrialManager : NSObject {
    TRIClient *_trialClient;
    NSString *_namespaceName;
    NSDictionary *_cachedValuesForFactor;
    BOOL _hasActiveExperiment;
    BOOL _hasDefaultValues;
    BOOL _hasRollout;
    BOOL _client_exclusive;
    BOOL _in_allocation;
}


@property (readonly, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (readonly, nonatomic) NSString *rolloutId; // ivar: _rolloutId
@property (readonly, nonatomic) NSString *spotlightNamespace; // ivar: _spotlightNamespace


+(id)currentTrialManager;
+(id)getTTRLogs;
+(id)sharedModelTrialManager;
+(id)sharedPolicyTrialManager;
+(id)sharedRankingTrialManager;
+(id)sharedTrialClient;
+(id)sharedUITrialManager;
+(void)loadFactorsForAllSharedTrialManagers;
-(BOOL)getBooleanValueForFactor:(id)arg0 ;
-(BOOL)getClientOnlyExperiment;
-(BOOL)getInReservedAllocationForExperiment;
-(BOOL)hasActiveExperiment;
-(BOOL)hasActiveRollout;
-(CGFloat)getDoubleValueForFactor:(id)arg0 ;
-(NSInteger)getLongValueForFactor:(id)arg0 ;
-(id)description;
-(id)getFactorDictionary;
-(id)getFilePathForFactor:(id)arg0 ;
-(id)getLevelForFactor:(id)arg0 ;
-(id)getStringValueForFactor:(id)arg0 ;
-(id)getTreatmentId;
-(id)initWithNameSpace:(unsigned int)arg0 loadDefaultValues:(BOOL)arg1 ;
-(void)refreshTrackingId;
-(void)reloadAllFactors;


@end


#endif