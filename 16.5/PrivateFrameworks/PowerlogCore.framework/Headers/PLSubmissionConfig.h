// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUBMISSIONCONFIG_H
#define PLSUBMISSIONCONFIG_H

@class NSString, NSArray, NSNumber, NSDictionary, NSDate, NSUUID;

#import <Foundation/Foundation.h>


@interface PLSubmissionConfig : NSObject {
    NSUInteger _submittedFilesMask;
}


@property (retain) NSString *blobFailureReason; // ivar: _blobFailureReason
@property (retain) NSArray *builds; // ivar: _builds
@property (retain) NSNumber *cacheSize; // ivar: _cacheSize
@property (retain) NSNumber *capSize; // ivar: _capSize
@property (retain) NSDictionary *ckTagConfig; // ivar: _ckTagConfig
@property (retain) NSDate *configDateApplied; // ivar: _configDateApplied
@property (retain) NSDate *configDateReceived; // ivar: _configDateReceived
@property (retain) NSUUID *configUUID; // ivar: _configUUID
@property (retain) NSDictionary *defaultTaskingTypeParameters; // ivar: _defaultTaskingTypeParameters
@property (retain) NSString *deviceModel; // ivar: _deviceModel
@property CGFloat dice; // ivar: _dice
@property BOOL enableDPUpload; // ivar: _enableDPUpload
@property (retain) NSDate *endDate; // ivar: _endDate
@property (retain) NSString *filePath; // ivar: _filePath
@property (readonly) BOOL hasFileToSubmit;
@property (retain) NSDictionary *hashEntries; // ivar: _hashEntries
@property BOOL internal; // ivar: _internal
@property BOOL isDRTasking; // ivar: _isDRTasking
@property (retain) NSDate *lastBatteryTimestampSystem; // ivar: _lastBatteryTimestampSystem
@property (retain) NSString *ondemand; // ivar: _ondemand
@property (retain) NSDictionary *perModelTaskingTypeParameters; // ivar: _perModelTaskingTypeParameters
@property (retain) NSArray *removeEntries; // ivar: _removeEntries
@property (retain) NSString *request; // ivar: _request
@property BOOL seed; // ivar: _seed
@property (retain) NSDictionary *signpostAllowlist; // ivar: _signpostAllowlist
@property BOOL signpostDisable; // ivar: _signpostDisable
@property (retain) NSDate *startDate; // ivar: _startDate
@property (readonly) BOOL submitBDC;
@property (readonly) BOOL submitCE;
@property (readonly) BOOL submitMSS;
@property (readonly) BOOL submitPLL;
@property short submitReasonType; // ivar: _submitReasonType
@property (readonly) BOOL submitSP;
@property (readonly) NSUInteger submittedFilesMask;
@property (retain) NSString *tagUUID; // ivar: _tagUUID
@property (retain) NSString *taskingBuild; // ivar: _taskingBuild
@property (retain) NSString *taskingDeviceModels; // ivar: _taskingDeviceModels
@property (retain) NSArray *taskingFiles; // ivar: _taskingFiles
@property (retain) NSDictionary *taskingPercentage; // ivar: _taskingPercentage
@property (retain) NSString *taskingPopulation; // ivar: _taskingPopulation
@property (retain) NSDictionary *taskingTables; // ivar: _taskingTables
@property (retain) NSString *taskingType; // ivar: _taskingType
@property (retain) NSArray *trimmingQueries; // ivar: _trimmingQueries


+(id)getDateMarkerFromSystemDate:(id)arg0 ;
+(void)clearTaskingDefaults;
+(void)submitTaskingDefaultsCheckStateToCA:(id)arg0 ;
-(BOOL)conditionCheckForEnergy;
-(BOOL)conditionCheckForTaskingType:(id)arg0 ;
-(BOOL)isValidSubmissionFilesMask;
-(BOOL)isValidTaskingBlob;
-(BOOL)shouldStartTaskingToday;
-(BOOL)shouldSubmitToday;
-(id)getDateMarker;
-(id)getDateMarkerLegacy;
-(id)getSubmitReasonTypeToCAFieldValue;
-(id)getSubmitReasonTypeToFlushReason;
-(id)getSubmitReasonTypeToReasonLog;
-(id)getSubmitReasonTypeToStorageEventOTAType;
-(id)initWithPayload:(id)arg0 ;
-(id)initWithReasonType:(short)arg0 DRConfig:(id)arg1 ;
-(void)emitQueryEvent:(BOOL)arg0 ;
-(void)emitSubmitEvent;
-(void)emitTaskingTypeSpecifiedEvent;
-(void)initTagInfoForReasonType:(short)arg0 withStartDate:(id)arg1 withEndDate:(id)arg2 ;
-(void)initializeFilesToBeSubmitted;
-(void)readTaskingDefaults;
-(void)readTaskingPayloadOverride:(id)arg0 ;
-(void)submitFileStatsToAnalytics;


@end


#endif