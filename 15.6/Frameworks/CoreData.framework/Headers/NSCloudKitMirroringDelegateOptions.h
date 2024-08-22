// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSCLOUDKITMIRRORINGDELEGATEOPTIONS_H
#define NSCLOUDKITMIRRORINGDELEGATEOPTIONS_H

@class CKScheduler, CKNotificationListener, NSString, NSNumber, CKContainerOptions, CKOperationConfiguration;
@protocol NSCopying, NSCloudKitMirroringDelegateProgressProvider;

#import <Foundation/Foundation.h>

#import "PFCloudKitMetricsClient.h"
#import "PFCloudKitContainerProvider.h"
#import "PFCloudKitStoreMonitorProvider.h"
#import "PFCloudKitMetadataPurger.h"
#import "PFCloudKitArchivingUtilities.h"

@interface NSCloudKitMirroringDelegateOptions : NSObject <NSCopying>

 {
    BOOL _skipCloudKitSetup;
    BOOL _useDaemon;
    BOOL _useTestDaemon;
    BOOL _test_useLegacySavePolicy;
    CKScheduler *_scheduler;
    CKNotificationListener *_notificationListener;
    PFCloudKitMetricsClient *_metricsClient;
    PFCloudKitContainerProvider *_containerProvider;
    PFCloudKitStoreMonitorProvider *_storeMonitorProvider;
    PFCloudKitMetadataPurger *_metadataPurger;
}


@property (retain, nonatomic) NSString *apsConnectionMachServiceName; // ivar: _apsConnectionMachServiceName
@property (retain, nonatomic) PFCloudKitArchivingUtilities *archivingUtilities; // ivar: _archivingUtilities
@property (nonatomic) BOOL automaticallyDownloadFileBackedFutures; // ivar: _automaticallyDownloadFileBackedFutures
@property (nonatomic) BOOL automaticallyScheduleImportAndExportOperations; // ivar: _automaticallyScheduleImportAndExportOperations
@property (retain, nonatomic) NSNumber *ckAssetThresholdBytes; // ivar: _ckAssetThresholdBytes
@property (retain, nonatomic) NSString *containerIdentifier; // ivar: _containerIdentifier
@property (retain, nonatomic) CKContainerOptions *containerOptions; // ivar: _containerOptions
@property (nonatomic) NSInteger databaseScope; // ivar: _databaseScope
@property (retain, nonatomic) CKOperationConfiguration *defaultOperationConfiguration; // ivar: _defaultOperationConfiguration
@property (nonatomic) BOOL initializeSchema; // ivar: _initializeSchema
@property (retain, nonatomic) NSNumber *operationMemoryThresholdBytes; // ivar: _operationMemoryThresholdBytes
@property (nonatomic) BOOL preserveLegacyRecordMetadataBehavior; // ivar: _preserveLegacyRecordMetadataBehavior
@property (weak, nonatomic) NSObject<NSCloudKitMirroringDelegateProgressProvider> *progressProvider; // ivar: _progressProvider
@property (nonatomic) BOOL useDeviceToDeviceEncryption; // ivar: _useDeviceToDeviceEncryption
@property (nonatomic) BOOL useEncryptedStorage;


-(id)copy;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCloudKitContainerOptions:(id)arg0 ;
-(id)initWithContainerIdentifier:(id)arg0 ;
-(void)dealloc;


@end


#endif