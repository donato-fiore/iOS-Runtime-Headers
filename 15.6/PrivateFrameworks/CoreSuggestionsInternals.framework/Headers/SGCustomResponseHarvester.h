// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGCUSTOMRESPONSEHARVESTER_H
#define SGCUSTOMRESPONSEHARVESTER_H

@class PETEventTracker2, NSFileManager, NSString, NSDate, NSMutableDictionary;
@protocol SGXPCActivityManagerProtocol;

#import <Foundation/Foundation.h>


@interface SGCustomResponseHarvester : NSObject {
    id<SGXPCActivityManagerProtocol> *_xpcActivityManager;
    PETEventTracker2 *_pet2tracker;
    NSFileManager *_fManager;
    NSString *_checkpointFullPath;
    NSString *_preferredLanguage;
    int _customResponsesStep;
    NSDate *_latestProcessedDate;
    NSUInteger _batchSize;
    NSString *_modelFilePath;
    NSString *_modelConfigPath;
}


@property (readonly, nonatomic) NSMutableDictionary *modelExistsForLanguage; // ivar: _modelExistsForLanguage


+(void)clearCustomResponsesCheckpointForTesting;
+(void)runHarvestSkipMessageCollection:(BOOL)arg0 clearCheckpoint:(BOOL)arg1 reportMetrics:(BOOL)arg2 ;
-(BOOL)deferAfterWriteCheckpointForActivity:(id)arg0 ;
-(BOOL)isSupportedLanguage:(id)arg0 ;
-(NSUInteger)activityStateAfterFilterWithStore:(id)arg0 forActivity:(id)arg1 andCustomResponseParameters:(id)arg2 ;
-(id)_customResponseParametersWithExperiment:(id)arg0 ;
-(id)_getCustomResponseParameters;
-(id)getCustomResponsesLatestProcessedDateForTesting;
-(id)initWithActivityManager:(id)arg0 ;
-(id)modelForLanguage:(id)arg0 ;
-(int)getCustomResponsesStepForTesting;
-(void)harvestWithActivity:(id)arg0 ;
-(void)loadCustomResponsesCheckpoint;
-(void)setCustomResponsesLatestProcessedDateForTesting:(id)arg0 ;
-(void)setCustomResponsesStepForTesting:(int)arg0 ;
-(void)setPet2TrackerForTesting:(id)arg0 ;
-(void)writeCheckpoint;


@end


#endif