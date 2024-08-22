// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEOBJECTCOLLECTION_H
#define HDCODABLEOBJECTCOLLECTION_H

@class PBCodable, NSMutableArray, NSString;
@protocol NSCopying;


#import "HDCodableGeneratedObjectCollection.h"
#import "HDCodableProvenance.h"
#import "HDCodableSource.h"

@interface HDCodableObjectCollection : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *activityCaches; // ivar: _activityCaches
@property (retain, nonatomic) NSMutableArray *binarySamples; // ivar: _binarySamples
@property (retain, nonatomic) NSMutableArray *categorySamples; // ivar: _categorySamples
@property (retain, nonatomic) NSMutableArray *cdaDocumentSamples; // ivar: _cdaDocumentSamples
@property (retain, nonatomic) NSMutableArray *correlations; // ivar: _correlations
@property (retain, nonatomic) NSMutableArray *deletedSamples; // ivar: _deletedSamples
@property (retain, nonatomic) NSMutableArray *ecgSamples; // ivar: _ecgSamples
@property (retain, nonatomic) NSMutableArray *fitnessFriendAchievements; // ivar: _fitnessFriendAchievements
@property (retain, nonatomic) NSMutableArray *fitnessFriendActivitySnapshots; // ivar: _fitnessFriendActivitySnapshots
@property (retain, nonatomic) NSMutableArray *fitnessFriendWorkouts; // ivar: _fitnessFriendWorkouts
@property (retain, nonatomic) HDCodableGeneratedObjectCollection *generatedObjectCollection; // ivar: _generatedObjectCollection
@property (readonly, nonatomic) BOOL hasGeneratedObjectCollection;
@property (readonly, nonatomic) BOOL hasProvenance;
@property (readonly, nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (retain, nonatomic) NSMutableArray *locationSeries; // ivar: _locationSeries
@property (retain, nonatomic) NSMutableArray *medicalRecords; // ivar: _medicalRecords
@property (retain, nonatomic) NSMutableArray *medicationDoseEvents; // ivar: _medicationDoseEvents
@property (retain, nonatomic) HDCodableProvenance *provenance; // ivar: _provenance
@property (retain, nonatomic) NSMutableArray *quantitySamples; // ivar: _quantitySamples
@property (retain, nonatomic) NSMutableArray *sleepSchedules; // ivar: _sleepSchedules
@property (retain, nonatomic) HDCodableSource *source; // ivar: _source
@property (retain, nonatomic) NSString *sourceBundleIdentifier; // ivar: _sourceBundleIdentifier
@property (retain, nonatomic) NSMutableArray *visionSamples; // ivar: _visionSamples
@property (retain, nonatomic) NSMutableArray *workouts; // ivar: _workouts


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)unitTest_isEquivalentToObjectCollection:(id)arg0 ;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)activityCachesAtIndex:(NSUInteger)arg0 ;
-(id)binarySamplesAtIndex:(NSUInteger)arg0 ;
-(id)categorySamplesAtIndex:(NSUInteger)arg0 ;
-(id)cdaDocumentSamplesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)correlationsAtIndex:(NSUInteger)arg0 ;
-(id)decodedObjects;
-(id)deletedSamplesAtIndex:(NSUInteger)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)ecgSamplesAtIndex:(NSUInteger)arg0 ;
-(id)fitnessFriendAchievementsAtIndex:(NSUInteger)arg0 ;
-(id)fitnessFriendActivitySnapshotsAtIndex:(NSUInteger)arg0 ;
-(id)fitnessFriendWorkoutsAtIndex:(NSUInteger)arg0 ;
-(id)locationSeriesAtIndex:(NSUInteger)arg0 ;
-(id)medicalRecordsAtIndex:(NSUInteger)arg0 ;
-(id)medicationDoseEventsAtIndex:(NSUInteger)arg0 ;
-(id)quantitySamplesAtIndex:(NSUInteger)arg0 ;
-(id)sleepSchedulesAtIndex:(NSUInteger)arg0 ;
-(id)visionSamplesAtIndex:(NSUInteger)arg0 ;
-(id)workoutsAtIndex:(NSUInteger)arg0 ;
-(void)addAccountOwner:(id)arg0 ;
-(void)addActivityCaches:(id)arg0 ;
-(void)addAllergyRecord:(id)arg0 ;
-(void)addBinarySamples:(id)arg0 ;
-(void)addCategorySamples:(id)arg0 ;
-(void)addCdaDocumentSamples:(id)arg0 ;
-(void)addClinicalNoteRecord:(id)arg0 ;
-(void)addClinicalRecord:(id)arg0 ;
-(void)addConditionRecord:(id)arg0 ;
-(void)addCorrelations:(id)arg0 ;
-(void)addCoverageRecord:(id)arg0 ;
-(void)addDeletedSamples:(id)arg0 ;
-(void)addDiagnosticTestReport:(id)arg0 ;
-(void)addDiagnosticTestResult:(id)arg0 ;
-(void)addEcgSamples:(id)arg0 ;
-(void)addFitnessFriendAchievements:(id)arg0 ;
-(void)addFitnessFriendActivitySnapshots:(id)arg0 ;
-(void)addFitnessFriendWorkouts:(id)arg0 ;
-(void)addLocationSeries:(id)arg0 ;
-(void)addMedicalRecords:(id)arg0 ;
-(void)addMedicationDispenseRecord:(id)arg0 ;
-(void)addMedicationDoseEvent:(id)arg0 ;
-(void)addMedicationDoseEvents:(id)arg0 ;
-(void)addMedicationOrder:(id)arg0 ;
-(void)addMedicationRecord:(id)arg0 ;
-(void)addProcedureRecord:(id)arg0 ;
-(void)addQuantitySamples:(id)arg0 ;
-(void)addSignedClinicalDataRecord:(id)arg0 ;
-(void)addSleepSchedules:(id)arg0 ;
-(void)addUnknownRecord:(id)arg0 ;
-(void)addVaccinationRecord:(id)arg0 ;
-(void)addVerifiableClinicalRecord:(id)arg0 ;
-(void)addVisionSamples:(id)arg0 ;
-(void)addWorkouts:(id)arg0 ;
-(void)clearActivityCaches;
-(void)clearBinarySamples;
-(void)clearCategorySamples;
-(void)clearCdaDocumentSamples;
-(void)clearCorrelations;
-(void)clearDeletedSamples;
-(void)clearEcgSamples;
-(void)clearFitnessFriendAchievements;
-(void)clearFitnessFriendActivitySnapshots;
-(void)clearFitnessFriendWorkouts;
-(void)clearLocationSeries;
-(void)clearMedicalRecords;
-(void)clearMedicationDoseEvents;
-(void)clearQuantitySamples;
-(void)clearSleepSchedules;
-(void)clearVisionSamples;
-(void)clearWorkouts;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif