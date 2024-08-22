// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRRTCMIGRATIONMETRIC_H
#define BRRTCMIGRATIONMETRIC_H

@class NSString, NSNumber, NSMutableDictionary;
@protocol BRRTCMetric;

#import <Foundation/Foundation.h>

#import "BRRTCMigrationMetricDeviceDetails.h"

@interface BRRTCMigrationMetric : NSObject <BRRTCMetric>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BRRTCMigrationMetricDeviceDetails *deviceDetails; // ivar: _deviceDetails
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isAutomation; // ivar: _isAutomation
@property (retain, nonatomic) NSString *migrationBeganTime; // ivar: _migrationBeganTime
@property (nonatomic) BOOL migrationDeviceUnpairedBecauseKeychainIsOff; // ivar: _migrationDeviceUnpairedBecauseKeychainIsOff
@property (nonatomic) BOOL migrationDeviceUnpairedBecauseStale; // ivar: _migrationDeviceUnpairedBecauseStale
@property (nonatomic) BOOL migrationFailedBTKeysNotSynced; // ivar: _migrationFailedBTKeysNotSynced
@property (retain, nonatomic) NSNumber *migrationFailureCode; // ivar: _migrationFailureCode
@property (retain, nonatomic) NSString *migrationFailureDescription; // ivar: _migrationFailureDescription
@property (retain, nonatomic) NSString *migrationFailureDomain; // ivar: _migrationFailureDomain
@property (nonatomic) BOOL migrationSucceeded; // ivar: _migrationSucceeded
@property (nonatomic) unsigned short rtcType; // ivar: _rtcType
@property (retain, nonatomic) NSString *sessionID; // ivar: _sessionID
@property (readonly) Class superclass;
@property (retain, nonatomic) NSString *suspectTransaction; // ivar: _suspectTransaction
@property (retain, nonatomic) NSMutableDictionary *transactionPhases; // ivar: _transactionPhases


-(id)dictionaryRepresentation;
-(id)init;


@end


#endif