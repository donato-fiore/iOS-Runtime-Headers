// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDEVICELISTREQUEST_H
#define ICDEVICELISTREQUEST_H

@class ACAccount, NSArray, NSString;
@protocol OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface ICDeviceListRequest : NSObject

@property (retain, nonatomic) ACAccount *account; // ivar: _account
@property (retain) NSArray *devices; // ivar: _devices
@property BOOL didGetICloudDeviceList; // ivar: _didGetICloudDeviceList
@property (copy, nonatomic) NSString *model; // ivar: _model
@property (copy, nonatomic) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (copy, nonatomic) NSString *softwareVersion; // ivar: _softwareVersion
@property (retain) NSObject<OS_dispatch_semaphore> *workSemaphore; // ivar: _workSemaphore


+(id)combineICloudDevices:(id)arg0 withCloudKitDevices:(id)arg1 ;
+(id)filteredDevices:(id)arg0 ;
+(id)setOfDeviceNamesFromDevices:(id)arg0 ;
-(BOOL)anyDeviceNeedsUpgrade;
-(BOOL)anyDeviceNotUpgradable;
-(BOOL)anyOSXDeviceNotUpgraded;
-(BOOL)waitForFetchWithTimeout:(CGFloat)arg0 ;
-(id)init;
-(id)initWithAccount:(id)arg0 ;
-(void)fetchCloudKitDevicesWithCompletionBlock:(id)arg0 ;
-(void)fetchICloudDevicesWithCompletionBlock:(id)arg0 ;
-(void)fetchWithCompletionBlock:(id)arg0 ;


@end


#endif