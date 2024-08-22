// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WDEXPORTMANAGER_H
#define WDEXPORTMANAGER_H

@class NSMutableArray, NSArray, NSString, NSDateFormatter, NSDictionary;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>

#import "WDProfile.h"

@interface WDExportManager : NSObject {
    WDProfile *_profile;
    NSObject<OS_dispatch_queue> *_outputSerialQueue;
    *_xmlTextWriter _writer;
    *_xmlTextWriter _writerCDA;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSMutableArray *_resultsTypes;
    NSMutableArray *_vitalsTypes;
    NSArray *_completedRecords;
    NSString *_documentsPath;
    NSString *_exportPath;
    NSString *_filePath;
    NSString *_CDAFilePath;
    NSString *_archivePath;
    NSDateFormatter *_xmlDateFormatter;
    NSDateFormatter *_cdaDateFormatter;
    NSDictionary *_dateIntervalsBySampleType;
}


@property BOOL exportFailed; // ivar: _exportFailed
@property BOOL exportInProgress; // ivar: _exportInProgress


+(id)allSupportedMedicalTypes;
-(BOOL)_addSourceDirectory:(id)arg0 asPath:(id)arg1 archive:(id)arg2 fileManager:(id)arg3 ;
-(BOOL)_writeElectrocardiogramsToDisk:(id)arg0 header:(id)arg1 version:(id)arg2 ;
-(id)_electrocardiogramHeaderWithName:(id)arg0 dateOfBirth:(id)arg1 ;
-(id)_formatBPMForBeatToBeatReading:(id)arg0 ;
-(id)_formatTimeForBeatToBeatReading:(id)arg0 ;
-(id)_preferredUnitForObjectType:(id)arg0 ;
-(id)initWithProfile:(id)arg0 ;
-(void)_archiveExportDirectory:(id)arg0 toFile:(id)arg1 ;
-(void)_completeAndCloseStreamingXML;
-(void)_exportElectrocardiogramsWithName:(id)arg0 dateOfBirth:(id)arg1 ;
-(void)_exportHealthRecords;
-(void)_getAllOrdinaryDataTypesOfCategory:(NSInteger)arg0 withArray:(id)arg1 ;
-(void)_getAllOrdinaryDataTypesOfClass:(Class)arg0 withArray:(id)arg1 ;
-(void)_outputSerialQueue_beginWritingQuantityType:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 ;
-(void)_outputSerialQueue_finishWritingQuantityType:(id)arg0 count:(NSUInteger)arg1 ;
-(void)_outputSerialQueue_writeSamples:(id)arg0 forQuantityType:(id)arg1 ;
-(void)_queryForDateRanges;
-(void)_queryForSamplesOfType:(id)arg0 batchHandler:(id)arg1 ;
-(void)_writeActivitySummaries;
-(void)_writeAudiogramType;
-(void)_writeCDAEntryWithValue:(id)arg0 type:(id)arg1 sourceName:(id)arg2 sourceVersion:(id)arg3 device:(id)arg4 unit:(id)arg5 metadata:(id)arg6 startDate:(id)arg7 endDate:(id)arg8 ;
-(void)_writeCDAHeaderWithName:(id)arg0 birthData:(id)arg1 biologicalSex:(NSInteger)arg2 ;
-(void)_writeCDAOrganizerEnd;
-(void)_writeCDAResultsHeader;
-(void)_writeCDAResultsOrganizerStart;
-(void)_writeCDASectionFooter;
-(void)_writeCDAVitalHeader;
-(void)_writeCDAVitalsOrganizerStartWithStartDate:(id)arg0 endDate:(id)arg1 ;
-(void)_writeCategoryType:(id)arg0 ;
-(void)_writeCorrelationType:(id)arg0 ;
-(void)_writeDataForActivitySummaries;
-(void)_writeDataForAudiogramType;
-(void)_writeDataForCategoryType:(id)arg0 ;
-(void)_writeDataForCorrelationType:(id)arg0 ;
-(void)_writeDataForHRVAndTachograms;
-(void)_writeDataForMedicalRecords:(id)arg0 ;
-(void)_writeDataForWorkoutRoutes:(id)arg0 semaphore:(id)arg1 ;
-(void)_writeDataForWorkoutType;
-(void)_writeHRVAndTachograms;
-(void)_writeHealthRecord:(id)arg0 documentDirectory:(id)arg1 fileNamesInUse:(id)arg2 ;
-(void)_writeMedicalRecords;
-(void)_writeQuantityType:(id)arg0 ;
-(void)_writeWorkoutRouteForWorkout:(id)arg0 semaphore:(id)arg1 ;
-(void)_writeWorkoutType;
-(void)_writeXMLActivitySummary:(id)arg0 activeEnergyBurnedUnit:(id)arg1 ;
-(void)_writeXMLAudiogramEnd;
-(void)_writeXMLAudiogramSensitivityPoint:(id)arg0 ;
-(void)_writeXMLAudiogramStartWithAudiogram:(id)arg0 ;
-(void)_writeXMLCorrelationEnd;
-(void)_writeXMLCorrelationStartWithType:(id)arg0 sourceName:(id)arg1 sourceVersion:(id)arg2 device:(id)arg3 metadata:(id)arg4 creationDate:(id)arg5 startDate:(id)arg6 endDate:(id)arg7 ;
-(void)_writeXMLMedicalRecordWithType:(id)arg0 identifier:(id)arg1 sourceName:(id)arg2 sourceURL:(id)arg3 fhirVersion:(id)arg4 receivedDate:(id)arg5 jsonFilePath:(id)arg6 ;
-(void)_writeXMLMetadataEntries:(id)arg0 ;
-(void)_writeXMLObjectAttributes:(id)arg0 ;
-(void)_writeXMLPersonWithDateOfBirth:(id)arg0 biologicalSex:(NSInteger)arg1 bloodType:(NSInteger)arg2 skinType:(NSInteger)arg3 cardioFitnessMedicationsUse:(id)arg4 ;
-(void)_writeXMLRecordWithType:(id)arg0 sourceName:(id)arg1 sourceVersion:(id)arg2 device:(id)arg3 unit:(id)arg4 metadata:(id)arg5 hrvMetadataList:(id)arg6 creationDate:(id)arg7 startDate:(id)arg8 endDate:(id)arg9 value:(id)arg10 ;
-(void)_writeXMLSampleAttributes:(id)arg0 ;
-(void)_writeXMLWorkoutEnd;
-(void)_writeXMLWorkoutEventWithEventType:(id)arg0 date:(id)arg1 duration:(CGFloat)arg2 durationUnit:(id)arg3 ;
-(void)_writeXMLWorkoutRouteEnd;
-(void)_writeXMLWorkoutRouteFileReference:(id)arg0 ;
-(void)_writeXMLWorkoutRouteStart:(id)arg0 ;
-(void)_writeXMLWorkoutStartWithActivityType:(id)arg0 duration:(id)arg1 durationUnit:(id)arg2 totalDistance:(id)arg3 totalDistanceUnit:(id)arg4 totalEnergyBurned:(id)arg5 totalEnergyBurnedUnit:(id)arg6 sourceName:(id)arg7 sourceVersion:(id)arg8 device:(id)arg9 metadata:(id)arg10 creationDate:(id)arg11 startDate:(id)arg12 endDate:(id)arg13 ;
-(void)cancelCurrentExport;
-(void)cleanupExportFilesWithError:(id)arg0 ;
-(void)createExportFileWithCompletion:(id)arg0 ;


@end


#endif