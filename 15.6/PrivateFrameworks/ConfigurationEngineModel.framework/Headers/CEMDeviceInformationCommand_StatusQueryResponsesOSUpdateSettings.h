// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESOSUPDATESETTINGS_H
#define CEMDEVICEINFORMATIONCOMMAND_STATUSQUERYRESPONSESOSUPDATESETTINGS_H

@class NSNumber, NSString, NSDate;


#import "CEMPayloadBase.h"

@interface CEMDeviceInformationCommand_StatusQueryResponsesOSUpdateSettings : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusAutomaticAppInstallationEnabled; // ivar: _statusAutomaticAppInstallationEnabled
@property (copy, nonatomic) NSNumber *statusAutomaticCheckEnabled; // ivar: _statusAutomaticCheckEnabled
@property (copy, nonatomic) NSNumber *statusAutomaticOSInstallationEnabled; // ivar: _statusAutomaticOSInstallationEnabled
@property (copy, nonatomic) NSNumber *statusAutomaticSecurityUpdatesEnabled; // ivar: _statusAutomaticSecurityUpdatesEnabled
@property (copy, nonatomic) NSNumber *statusBackgroundDownloadEnabled; // ivar: _statusBackgroundDownloadEnabled
@property (copy, nonatomic) NSString *statusCatalogURL; // ivar: _statusCatalogURL
@property (copy, nonatomic) NSNumber *statusIsDefaultCatalog; // ivar: _statusIsDefaultCatalog
@property (copy, nonatomic) NSNumber *statusPerformPeriodicCheck; // ivar: _statusPerformPeriodicCheck
@property (copy, nonatomic) NSDate *statusPreviousScanDate; // ivar: _statusPreviousScanDate
@property (copy, nonatomic) NSString *statusPreviousScanResult; // ivar: _statusPreviousScanResult


+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
+(id)buildWithCatalogURL:(id)arg0 withIsDefaultCatalog:(id)arg1 withPreviousScanDate:(id)arg2 withPreviousScanResult:(id)arg3 withPerformPeriodicCheck:(id)arg4 withAutomaticCheckEnabled:(id)arg5 withBackgroundDownloadEnabled:(id)arg6 withAutomaticAppInstallationEnabled:(id)arg7 withAutomaticOSInstallationEnabled:(id)arg8 withAutomaticSecurityUpdatesEnabled:(id)arg9 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif