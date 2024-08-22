// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATDEVICESETTINGS_H
#define ATDEVICESETTINGS_H

@class NSUserDefaults, NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATDeviceSettings : NSObject {
    NSUserDefaults *_userDefaults;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_bundleIdentifier;
}


@property (readonly, copy, nonatomic) NSArray *dataClassesNeedingSync;
@property (readonly, nonatomic) BOOL fairPlayEnabled;
@property (readonly, nonatomic) BOOL grappaEnabled;
@property (readonly, copy, nonatomic) NSString *interfaceName;
@property (readonly, nonatomic) BOOL isDeviceLinkClient;
@property (nonatomic) CGFloat lastAuthenticationDialogResponseTime;
@property (readonly, copy, nonatomic) NSString *libraryIdentifier;
@property (readonly, nonatomic) CGFloat pairingSyncCompletionTime;
@property (readonly, nonatomic) NSUInteger restoreBatchSize;
@property (readonly, nonatomic) BOOL restoreBatchingEnabled;
@property (readonly, copy, nonatomic) NSString *serviceDomain;
@property (readonly, copy, nonatomic) NSString *serviceName;
@property (readonly, copy, nonatomic) NSString *serviceType;
@property (readonly, nonatomic) BOOL useNewDownloadService;
@property (readonly, nonatomic) BOOL watchProxyDownloadsDisabled;


+(id)sharedInstance;
-(BOOL)hasCompletedDataMigration;
-(BOOL)isSyncPendingForDataClass:(id)arg0 ;
-(NSUInteger)versionForDataclass:(id)arg0 ;
-(id)_endpointInfoForLibrary:(id)arg0 ;
-(id)endpointInfo;
-(id)getCurrentInstallDisposition;
-(id)getPreExistingStoreIdentifiers;
-(id)hostInfoForLibrary:(id)arg0 ;
-(id)init;
-(id)lastSyncTimeForLibrary:(id)arg0 dataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg0 dataClass:(id)arg1 ;
-(int)activeRestoreType;
-(void)_setEndpointInfo:(id)arg0 forLibrary:(id)arg1 ;
-(void)removeEndpointInfoForLibrary:(id)arg0 ;
-(void)removePendingSyncSettingForDataClass:(id)arg0 ;
-(void)setActiveRestoreType:(int)arg0 ;
-(void)setCurrentInstallDisposition:(id)arg0 ;
-(void)setEndpointInfo:(id)arg0 ;
-(void)setHasCompletedDataMigration:(BOOL)arg0 ;
-(void)setHostInfo:(id)arg0 forLibrary:(id)arg1 ;
-(void)setPreExistingStoreIdentifiers:(id)arg0 ;
-(void)setSyncPending:(BOOL)arg0 forDataClass:(id)arg1 ;
-(void)setSyncState:(id)arg0 forLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)setVersion:(NSUInteger)arg0 forDataclass:(id)arg1 ;
-(void)synchronize;
-(void)updateLastSyncTimeForLibrary:(id)arg0 dataClass:(id)arg1 ;


@end


#endif