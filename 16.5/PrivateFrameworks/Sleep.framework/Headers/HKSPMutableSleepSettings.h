// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPMUTABLESLEEPSETTINGS_H
#define HKSPMUTABLESLEEPSETTINGS_H

@class NSString, NSDate, NSDictionary, NSSet;
@protocol HKSPMutableObject, HKSPObject;


#import "HKSPSleepSettings.h"
#import "HKSPChangeSet.h"

@interface HKSPMutableSleepSettings : HKSPSleepSettings <HKSPMutableObject>



@property (nonatomic) BOOL bedtimeReminders;
@property (readonly, nonatomic) HKSPChangeSet *changeSet; // ivar: _changeSet
@property (nonatomic) BOOL chargingReminders;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) NSObject<HKSPObject> *originalObject;
@property (readonly, nonatomic) NSDictionary *relationshipChanges;
@property (nonatomic) BOOL scheduledSleepMode;
@property (nonatomic) BOOL shareAcrossDevices;
@property (readonly, nonatomic) NSSet *significantChanges;
@property (nonatomic) NSUInteger sleepModeOptions;
@property (nonatomic) BOOL sleepTracking;
@property (nonatomic) BOOL springBoardGreetingDisabled;
@property (nonatomic) BOOL springBoardSuggestedPageCreated;
@property (readonly) Class superclass;
@property (nonatomic) BOOL timeInBedTracking;
@property (readonly, nonatomic) NSUInteger version;
@property (nonatomic) BOOL wakeUpResults;
@property (nonatomic) BOOL watchSleepFeaturesEnabled;


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopy;
-(void)encodeWithCoder:(id)arg0 ;
-(void)freeze;


@end


#endif