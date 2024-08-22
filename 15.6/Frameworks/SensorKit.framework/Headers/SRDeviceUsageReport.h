// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SRDEVICEUSAGEREPORT_H
#define SRDEVICEUSAGEREPORT_H

@class NSMutableArray, NSMutableDictionary, NSDictionary, NSString;
@protocol SRSampleExporting, NSSecureCoding, SRSampling;

#import <Foundation/Foundation.h>


@interface SRDeviceUsageReport : NSObject <SRSampleExporting, NSSecureCoding, SRSampling>



@property (retain) NSMutableArray *_mutableActivityLevels; // ivar: __mutableActivityLevels
@property (retain) NSMutableArray *_mutableMotionActivities; // ivar: __mutableMotionActivities
@property (retain) NSMutableDictionary *_reportApplicationIdentifierByBundleIdentifier; // ivar: __reportApplicationIdentifierByBundleIdentifier
@property CGFloat _totalChargingDuration; // ivar: __totalChargingDuration
@property (readonly, copy) NSDictionary *applicationUsageByCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (retain) NSMutableDictionary *mutableApplicationUsageByCategory; // ivar: _mutableApplicationUsageByCategory
@property (retain) NSMutableDictionary *mutableNotificationUsageByCategory; // ivar: _mutableNotificationUsageByCategory
@property (retain) NSMutableDictionary *mutableWebUsageByCategory; // ivar: _mutableWebUsageByCategory
@property (readonly, copy) NSDictionary *notificationUsageByCategory;
@property CGFloat startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property CGFloat totalScreenWakeDuration; // ivar: _totalScreenWakeDuration
@property NSInteger totalScreenWakes; // ivar: _totalScreenWakes
@property CGFloat totalUnlockDuration; // ivar: _totalUnlockDuration
@property NSInteger totalUnlocks; // ivar: _totalUnlocks
@property (readonly, copy) NSDictionary *webUsageByCategory;


+(BOOL)supportsSecureCoding;
+(id)deviceUsageReportWithInterval:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_activityLevels;
-(id)_motionActivities;
-(id)binarySampleRepresentation;
-(id)initWithBinarySampleRepresentation:(id)arg0 metadata:(id)arg1 timestamp:(CGFloat)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(id)sr_dictionaryRepresentation;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif