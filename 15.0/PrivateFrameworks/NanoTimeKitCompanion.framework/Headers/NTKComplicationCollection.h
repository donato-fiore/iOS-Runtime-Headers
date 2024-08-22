// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKCOMPLICATIONCOLLECTION_H
#define NTKCOMPLICATIONCOLLECTION_H

@class NSXPCConnection, NSNumber, NSMutableDictionary, NSLock, NSHashTable, NSMutableArray, NSString, NSUUID;
@protocol NTKComplicationStoreClient;

#import <Foundation/Foundation.h>


@interface NTKComplicationCollection : NSObject <NTKComplicationStoreClient>

 {
    NSXPCConnection *_connection;
    BOOL _registrationNeeded;
    NSNumber *_seqId;
    NSMutableDictionary *_localizeableSampleDataTemplates;
    NSLock *_templatesLock;
    NSMutableDictionary *_complicationDescriptors;
    NSLock *_descriptorsLock;
    NSHashTable *_observers;
    NSMutableArray *_loadCallbacks;
    NSLock *_observersLock;
    BOOL _updatesSuspended;
    NSMutableArray *_updatesEnqueuedWhileSuspended;
}


@property (readonly, nonatomic) NSString *collectionIdentifier; // ivar: _collectionIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSUUID *deviceUUID; // ivar: _deviceUUID
@property (readonly, nonatomic) BOOL hasLoaded; // ivar: _hasLoaded
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)_bundleForWatchKitAppID:(id)arg0 ;
+(id)lsSDKVersionForApplicationID:(id)arg0 ;
+(id)sharedRemoteCollection;
-(BOOL)hasSampleTemplateForClientIdentifier:(id)arg0 descriptor:(id)arg1 family:(NSInteger)arg2 ;
-(id)_sampleDataForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(id)clients;
-(id)clientsSupportingFamily:(NSInteger)arg0 ;
-(id)complicationDescriptorsForClientIdentifier:(id)arg0 ;
-(id)initWithCollectionIdentifier:(id)arg0 deviceUUID:(id)arg1 ;
-(id)sampleTemplateForClientIdentifier:(id)arg0 descriptor:(id)arg1 applicationID:(id)arg2 family:(NSInteger)arg3 ;
-(id)supportedTemplateFamiliesForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)_handleConnectionInterrupted;
-(void)_notifyLoaded;
-(void)_notifyRemovedComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)_notifyUpdateComplicationDescriptorsForClientIdentifier:(id)arg0 ;
-(void)_notifyUpdateComplicationSampleTemplateForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)_performOrEnqueueUpdate:(id)arg0 ;
-(void)_register;
-(void)_registerIfNeeded;
-(void)_removeComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)_sendToDaemonRemoveComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)_sendToDaemonUpdatedComplicationDescriptors:(id)arg0 forClientIdentifier:(id)arg1 ;
-(void)_sendToDaemonUpdatedSampleDataTemplate:(id)arg0 forClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(NSInteger)arg3 ;
-(void)_setComplicationDescriptors:(id)arg0 forClientIdentifier:(id)arg1 ;
-(void)_setLocalizedSampleTemplate:(id)arg0 forClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(NSInteger)arg3 ;
-(void)_throwIfNotLoaded:(SEL)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)dealloc;
-(void)loadFullCollectionWithLocalizableSampleTemplates:(id)arg0 complicationDescriptors:(id)arg1 seqId:(id)arg2 ;
-(void)performAfterLoad:(id)arg0 ;
-(void)removeAllComplicationSampleTemplatesExceptThoseWithClientIdentifiers:(id)arg0 ;
-(void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 ;
-(void)removeComplicationSampleTemplatesForClientIdentifier:(id)arg0 descriptor:(id)arg1 seqId:(id)arg2 ;
-(void)removeObserver:(id)arg0 ;
-(void)resumeUpdatesFromDaemon;
-(void)setComplicationDescriptors:(id)arg0 forClientIdentifier:(id)arg1 ;
-(void)setLocalizableSampleTemplate:(id)arg0 forClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(NSInteger)arg3 ;
-(void)suspendUpdatesFromDaemon;
-(void)updateComplicationDescriptors:(id)arg0 forClientIdentifier:(id)arg1 seqId:(id)arg2 ;
-(void)updateLocalizableSampleTemplate:(id)arg0 forClientIdentifier:(id)arg1 descriptor:(id)arg2 family:(NSInteger)arg3 seqId:(id)arg4 ;


@end


#endif