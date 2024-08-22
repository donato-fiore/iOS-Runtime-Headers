// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TADEVICERECORD_H
#define TADEVICERECORD_H

@class NSMutableDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "TADeviceRecordSettings.h"

@interface TADeviceRecord : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSMutableDictionary *deviceRecord; // ivar: _deviceRecord
@property (retain, nonatomic) NSDate *lastPurgeDate; // ivar: _lastPurgeDate
@property (retain, nonatomic) NSDate *lastScanAttemptDate; // ivar: _lastScanAttemptDate
@property (retain, nonatomic) TADeviceRecordSettings *settings; // ivar: _settings


+(BOOL)_isKnownDevice:(NSUInteger)arg0 ;
+(BOOL)supportsSecureCoding;
+(NSUInteger)_convertTANotificationStateToTANotificationInternalState:(NSUInteger)arg0 ;
+(id)notificationInternalStateToString:(NSUInteger)arg0 ;
-(BOOL)hasSurfacedNotificationFor:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isKnownDevice:(id)arg0 ;
-(NSUInteger)getDeviceNotificationState:(id)arg0 ;
-(NSUInteger)getDeviceType:(id)arg0 ;
-(id)_determineKeepInStagingUntil:(id)arg0 ;
-(id)_getDeviceRecord:(id)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)getDetectionResultsToPush;
-(id)getLatestAdvertisement:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSettings:(id)arg0 ;
-(void)_clearStagedDetectionsForDevice:(id)arg0 ;
-(void)_createRecordIfNecessaryWithAddress:(id)arg0 withDate:(id)arg1 ;
-(void)_didSurfaceNotificationFor:(id)arg0 ;
-(void)_performNotificationStateTransitionActionsForDevice:(id)arg0 from:(NSUInteger)arg1 to:(NSUInteger)arg2 ;
-(void)_setDevice:(id)arg0 withExternalState:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg0 withInternalState:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_setDevice:(id)arg0 withType:(NSUInteger)arg1 withDate:(id)arg2 ;
-(void)_updateLatestAdvertisement:(id)arg0 ;
-(void)checkForScanRequestsWithClock:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)forceStagedDetectionsToSurfaceImmediatelyWithAdvertisement:(id)arg0 ;
-(void)ingestTAEvent:(id)arg0 andAppendOutgoingRequestsTo:(id)arg1 ;
-(void)logDeviceRecord;
-(void)mergeWithAnotherDeviceRecord:(id)arg0 ;
-(void)purgeWithClock:(id)arg0 ;
-(void)stageDetectionResults:(id)arg0 ;
-(void)stageDevice:(id)arg0 withCurrentDate:(id)arg1 ;
-(void)updateDeviceRecordOnSessionChangeWithCurrentDate:(id)arg0 ;


@end


#endif