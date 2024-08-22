// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UARPANALYTICSUPDATEFIRMWARESTATE_H
#define UARPANALYTICSUPDATEFIRMWARESTATE_H

@class NSDate, NSNumber;
@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "UARPAccessoryID.h"
#import "UARPAssetID.h"
#import "UARPUpdateFirmwareAnalyticsEventFrameworkParams.h"

@interface UARPAnalyticsUpdateFirmwareState : NSObject {
    NSDate *_startDate;
    NSInteger _state;
    NSObject<OS_os_log> *_log;
    NSUInteger _stagingDurationSeconds;
    NSDate *_stagingDurationStart;
    NSUInteger _stagingIterations;
    BOOL _stagingUserInitiated;
    NSNumber *_stagingStatus;
    NSUInteger _analyticsApplyDurationSeconds;
    NSDate *_analyticsApplyDurationStart;
    NSNumber *_analyticsApplyUserInitiated;
    NSNumber *_analyticsApplyStatus;
}


@property (readonly) UARPAccessoryID *accessoryID; // ivar: _accessoryID
@property (readonly) NSUInteger age;
@property (readonly) UARPAssetID *assetID; // ivar: _assetID
@property (readonly) UARPUpdateFirmwareAnalyticsEventFrameworkParams *eventParams;


-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithAccessoryID:(id)arg0 assetID:(id)arg1 ;
-(void)accessoryUnreachable;
-(void)setState:(NSInteger)arg0 ;
-(void)stagingCompleteWithStatus:(NSUInteger)arg0 ;
-(void)stagingInterrupted;
-(void)stagingStartedWithUserIntent:(BOOL)arg0 ;
-(void)updateStagingDuration;


@end


#endif