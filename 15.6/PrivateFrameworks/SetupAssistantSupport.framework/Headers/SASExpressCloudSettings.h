// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SASEXPRESSCLOUDSETTINGS_H
#define SASEXPRESSCLOUDSETTINGS_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SASCloudKitClient.h"

@interface SASExpressCloudSettings : NSObject

@property (retain, nonatomic) SASCloudKitClient *cloudKitClient; // ivar: _cloudKitClient
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(BOOL)_isCloudKitError:(id)arg0 ;
+(id)_predicateForRecordsModifiedInPastMonth;
+(id)_queryForSettingsForDeviceID:(id)arg0 ;
+(id)_queryForSettingsFromPastMonth;
+(id)_queryForSettingsFromPastMonthForDeviceClass:(id)arg0 ;
+(id)_queryForSettingsFromPastMonthForPlatform:(NSUInteger)arg0 ;
+(id)_zoneForSettings;
-(id)_createSettingsRecordInZoneID:(id)arg0 forDeviceID:(id)arg1 ;
-(id)init;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(void)_fetchAppropriateSettingsWithCompletion:(id)arg0 ;
-(void)_setupRecordZoneWithName:(id)arg0 completion:(id)arg1 ;
-(void)fetchSettingsWithCompletion:(id)arg0 ;
-(void)setXpcActivity:(id)arg0 ;
-(void)updateSettings:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif