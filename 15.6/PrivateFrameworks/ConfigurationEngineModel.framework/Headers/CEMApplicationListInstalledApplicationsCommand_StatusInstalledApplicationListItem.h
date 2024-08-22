// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CEMAPPLICATIONLISTINSTALLEDAPPLICATIONSCOMMAND_STATUSINSTALLEDAPPLICATIONLISTITEM_H
#define CEMAPPLICATIONLISTINSTALLEDAPPLICATIONSCOMMAND_STATUSINSTALLEDAPPLICATIONLISTITEM_H

@class NSNumber, NSString;


#import "CEMPayloadBase.h"

@interface CEMApplicationListInstalledApplicationsCommand_StatusInstalledApplicationListItem : CEMPayloadBase

@property (copy, nonatomic) NSNumber *statusAdHocCodeSigned; // ivar: _statusAdHocCodeSigned
@property (copy, nonatomic) NSNumber *statusAppStoreVendable; // ivar: _statusAppStoreVendable
@property (copy, nonatomic) NSNumber *statusBetaApp; // ivar: _statusBetaApp
@property (copy, nonatomic) NSString *statusBundleIdentifier; // ivar: _statusBundleIdentifier
@property (copy, nonatomic) NSString *statusBundleSize; // ivar: _statusBundleSize
@property (copy, nonatomic) NSNumber *statusDeviceBasedVPP; // ivar: _statusDeviceBasedVPP
@property (copy, nonatomic) NSNumber *statusDownloadCancelled; // ivar: _statusDownloadCancelled
@property (copy, nonatomic) NSNumber *statusDownloadFailed; // ivar: _statusDownloadFailed
@property (copy, nonatomic) NSNumber *statusDownloadPaused; // ivar: _statusDownloadPaused
@property (copy, nonatomic) NSNumber *statusDownloadWaiting; // ivar: _statusDownloadWaiting
@property (copy, nonatomic) NSString *statusDynamicSize; // ivar: _statusDynamicSize
@property (copy, nonatomic) NSString *statusExternalVersionIdentifier; // ivar: _statusExternalVersionIdentifier
@property (copy, nonatomic) NSNumber *statusHasUpdateAvailable; // ivar: _statusHasUpdateAvailable
@property (copy, nonatomic) NSNumber *statusInstalling; // ivar: _statusInstalling
@property (copy, nonatomic) NSNumber *statusIsValidated; // ivar: _statusIsValidated
@property (copy, nonatomic) NSString *statusName; // ivar: _statusName
@property (copy, nonatomic) NSString *statusShortVersion; // ivar: _statusShortVersion
@property (copy, nonatomic) NSString *statusVersion; // ivar: _statusVersion


+(id)allowedStatusKeys;
+(id)buildRequiredOnlyWithBundleIdentifier:(id)arg0 withExternalVersionIdentifier:(id)arg1 withVersion:(id)arg2 withShortVersion:(id)arg3 withName:(id)arg4 withAppStoreVendable:(id)arg5 withDeviceBasedVPP:(id)arg6 withBetaApp:(id)arg7 withAdHocCodeSigned:(id)arg8 withHasUpdateAvailable:(id)arg9 ;
+(id)buildWithBundleIdentifier:(id)arg0 withExternalVersionIdentifier:(id)arg1 withVersion:(id)arg2 withShortVersion:(id)arg3 withName:(id)arg4 withBundleSize:(id)arg5 withDynamicSize:(id)arg6 withIsValidated:(id)arg7 withInstalling:(id)arg8 withAppStoreVendable:(id)arg9 withDeviceBasedVPP:(id)arg10 withBetaApp:(id)arg11 withAdHocCodeSigned:(id)arg12 withHasUpdateAvailable:(id)arg13 withDownloadFailed:(id)arg14 withDownloadWaiting:(id)arg15 withDownloadPaused:(id)arg16 withDownloadCancelled:(id)arg17 ;
-(BOOL)loadPayload:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)serializePayload;


@end


#endif