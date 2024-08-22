// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKCOMPANIONREMOTECOMPLICATIONMANAGER_H
#define NTKCOMPANIONREMOTECOMPLICATIONMANAGER_H

@class NSString, CLKDevice, NSDictionary;
@protocol NTKComplicationCollectionObserver, NTKRemoteComplicationProvider, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NTKComplicationCollection.h"

@interface NTKCompanionRemoteComplicationManager : NSObject <NTKComplicationCollectionObserver, NTKRemoteComplicationProvider>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CLKDevice *device; // ivar: _device
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *installedComplications; // ivar: _installedComplications
@property (readonly, nonatomic) os_unfair_lock_s installedComplicationsLock; // ivar: _installedComplicationsLock
@property (nonatomic) BOOL loaded; // ivar: _loaded
@property (retain, nonatomic) NTKComplicationCollection *remoteComplications; // ivar: _remoteComplications
@property (readonly, nonatomic) os_unfair_lock_s remoteComplicationsLock; // ivar: _remoteComplicationsLock
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (readonly) Class superclass;
@property (retain, nonatomic) NSDictionary *syncedComplications; // ivar: _syncedComplications
@property (readonly, nonatomic) os_unfair_lock_s syncedComplicationsLock; // ivar: _syncedComplicationsLock


+(id)sharedInstance;
-(BOOL)vendorExistsWithClientIdentifier:(id)arg0 appBundleIdentifier:(id)arg1 ;
-(id)_safeComplications;
-(id)_safeInstalledComplications;
-(id)init;
-(id)itemIdForVendorWithClientIdentifier:(id)arg0 ;
-(id)localizedAppNameForClientIdentifier:(id)arg0 ;
-(void)_activeDeviceChanged;
-(void)_appStartedInstall;
-(void)_fetchInstalledApps;
-(void)_load;
-(void)_queue_reloadApps;
-(void)_reloadApps;
-(void)complicationCollection:(id)arg0 didRemoveSampleTemplatesForClient:(id)arg1 ;
-(void)complicationCollection:(id)arg0 didUpdateComplicationDescriptorsForClient:(id)arg1 ;
-(void)complicationCollection:(id)arg0 didUpdateSampleTemplateForClient:(id)arg1 descriptor:(id)arg2 ;
-(void)complicationCollectionDidLoad:(id)arg0 ;
-(void)dealloc;
-(void)enumerateComplicationDescriptorsForClientIdentifier:(id)arg0 family:(NSInteger)arg1 withBlock:(id)arg2 ;
-(void)enumerateEnabledVendorsForComplicationFamily:(NSInteger)arg0 withBlock:(id)arg1 ;
-(void)notifyAppForClientIdentifier:(id)arg0 ofSharedComplicationDescriptors:(id)arg1 withCompletion:(id)arg2 ;


@end


#endif