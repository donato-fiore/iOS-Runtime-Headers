// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGCUSTOMRESPONSEHARVESTER_H
#define PSGCUSTOMRESPONSEHARVESTER_H

@class PETEventTracker2, NSFileManager, NSString, NSDate, NSMutableDictionary;
@protocol SGXPCActivityManagerProtocol;

#import <Foundation/Foundation.h>


@interface PSGCustomResponseHarvester : NSObject {
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
    NSString *_modelVocabPath;
    NSString *_storeDirectory;
}


@property (readonly, nonatomic) NSMutableDictionary *modelExistsForLanguage; // ivar: _modelExistsForLanguage


+(void)clearCustomResponsesCheckpointForTesting;
+(void)runHarvestSkipMessageCollection:(BOOL)arg0 clearCheckpoint:(BOOL)arg1 reportMetrics:(BOOL)arg2 modelConfigPath:(id)arg3 modelVocabPath:(id)arg4 modelFilePath:(id)arg5 storeDirectory:(id)arg6 evalFraction:(id)arg7 ;
-(BOOL)deferAfterWriteCheckpointForActivity:(id)arg0 ;
-(BOOL)isSupportedLanguage:(id)arg0 ;
-(NSUInteger)activityStateAfterFilterWithStore:(id)arg0 forActivity:(id)arg1 andCustomResponseParameters:(id)arg2 ;
-(id)_customResponseParametersWithConfigPath:(id)arg0 ;
-(id)_customResponseParametersWithExperiment:(id)arg0 ;
-(id)_getCustomResponseParameters;
-(id)getCustomResponsesLatestProcessedDateForTesting;
-(id)initWithActivityManager:(id)arg0 ;
-(id)initWithActivityManager:(id)arg0 modelConfigPath:(id)arg1 modelVocabPath:(id)arg2 modelFilePath:(id)arg3 storeDirectory:(id)arg4 ;
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