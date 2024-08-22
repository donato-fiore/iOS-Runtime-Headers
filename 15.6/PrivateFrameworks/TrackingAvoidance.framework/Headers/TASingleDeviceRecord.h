// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TASINGLEDEVICERECORD_H
#define TASINGLEDEVICERECORD_H

@class NSData, NSMutableDictionary, NSMutableSet, NSDate, NSMutableArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TASPAdvertisement.h"

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSData *address; // ivar: _address
@property (retain, nonatomic) NSMutableDictionary *backgroundDetectionCount; // ivar: _backgroundDetectionCount
@property (retain, nonatomic) NSMutableSet *backgroundDetectionTypesInTravelSession; // ivar: _backgroundDetectionTypesInTravelSession
@property (readonly, nonatomic) NSDate *creationDate; // ivar: _creationDate
@property (readonly, nonatomic) NSDate *earliestObservationDate; // ivar: _earliestObservationDate
@property (retain, nonatomic) NSMutableDictionary *firstBackgroundDetectionDate; // ivar: _firstBackgroundDetectionDate
@property (readonly, nonatomic) NSDate *firstBeepOnMoveDate; // ivar: _firstBeepOnMoveDate
@property (readonly, nonatomic) NSDate *firstStagedDetectionDate; // ivar: _firstStagedDetectionDate
@property (readonly, nonatomic) NSDate *firstSurfacedAlertDate; // ivar: _firstSurfacedAlertDate
@property (readonly, nonatomic) NSUInteger firstSurfacedAlertType; // ivar: _firstSurfacedAlertType
@property (readonly, nonatomic) BOOL hasStagedImmediateDetections;
@property (nonatomic) BOOL hasSurfacedNotification; // ivar: _hasSurfacedNotification
@property (nonatomic) CGFloat keepAliveInterval; // ivar: _keepAliveInterval
@property (readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
@property (readonly, nonatomic) NSDate *lastSurfacedAlertDate; // ivar: _lastSurfacedAlertDate
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement; // ivar: _latestAdvertisement
@property (readonly, nonatomic) NSDate *latestBeepOnMoveDate; // ivar: _latestBeepOnMoveDate
@property (readonly, nonatomic) NSDate *latestPlaySoundAttemptDate; // ivar: _latestPlaySoundAttemptDate
@property (readonly, nonatomic) NSUInteger numBeepOnMove; // ivar: _numBeepOnMove
@property (readonly, nonatomic) NSUInteger numStagedDetections; // ivar: _numStagedDetections
@property (readonly, nonatomic) NSUInteger numSurfacedAlerts; // ivar: _numSurfacedAlerts
@property (readonly, nonatomic) NSUInteger playSoundAttemptCount;
@property (readonly, nonatomic) NSUInteger playSoundFailureCount; // ivar: _playSoundFailureCount
@property (readonly, nonatomic) NSUInteger playSoundSuccessCount; // ivar: _playSoundSuccessCount
@property (retain, nonatomic) NSMutableArray *stagedDetectionResults; // ivar: _stagedDetectionResults
@property (nonatomic) NSUInteger state; // ivar: _state
@property (nonatomic) NSUInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)_shouldPushStagedDetection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)backgroundDetectionCountForDetectionType:(NSUInteger)arg0 ;
-(NSUInteger)getDeviceType;
-(id)description;
-(id)descriptionDictionary;
-(id)firstDetectionDateForDetectionType:(NSUInteger)arg0 ;
-(id)getDetectionsReadyToPush;
-(id)getStagedDetections;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDeviceAdvertisement:(id)arg0 state:(NSUInteger)arg1 type:(NSUInteger)arg2 date:(id)arg3 keepAliveInterval:(CGFloat)arg4 ;
-(id)preparePlaySoundTAOutgoingRequest:(id)arg0 lastPlaySoundDate:(id)arg1 ;
-(id)productName;
-(void)_updateEarliestObservationDateWithDate:(id)arg0 ;
-(void)clearAllStagedDetections;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithAnotherSingleDeviceRecord:(id)arg0 ;
-(void)processBackgroundDetection:(id)arg0 ;
-(void)processPlaySoundSuccess:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)processSurfacedAlert:(id)arg0 ;
-(void)purgeStagedDetectionsWithClock:(id)arg0 ;
-(void)stageDetection:(id)arg0 ;
-(void)updateAdvertisement:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)updateSingleDeviceRecordOnSessionChangeWithCurrentDate:(id)arg0 ;


@end


#endif