// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PBFPOSTEREXTENSIONSTORECOORDINATOR_H
#define PBFPOSTEREXTENSIONSTORECOORDINATOR_H

@class NSURL, NSDictionary, NSMutableDictionary, NSFileManager, NSString, NSDate;
@protocol PBFDataComponentRefreshStateProviding, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PBFPosterExtensionStoreCoordinator : NSObject <PBFDataComponentRefreshStateProviding>

 {
    NSURL *_descriptorsContainerURL;
    NSURL *_staticDescriptorsContainerURL;
    NSURL *_configurationContainerURL;
    NSURL *_accessQueue_transientInternalInfoURL;
    NSURL *_accessQueue_providerInfoURL;
    NSDictionary *_accessQueue_providerInfo;
    NSMutableDictionary *_accessQueue_posterDescriptorStoreCoordinatorsForURL;
    NSMutableDictionary *_accessQueue_staticPosterDescriptorStoreCoordinatorsForURL;
    NSMutableDictionary *_accessQueue_posterConfigurationStoreCoordinatorsForURL;
    NSFileManager *_fileManager;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (readonly, copy, nonatomic) NSURL *containerURL; // ivar: _containerURL
@property (readonly, copy, nonatomic) NSString *extensionIdentifier; // ivar: _extensionIdentifier
@property (readonly, copy, nonatomic) NSDate *lastRefreshDescriptorDate;
@property (readonly, copy, nonatomic) NSString *lastRefreshDescriptorReason;


+(id)providerInfoURLForContainerURL:(id)arg0 ;
-(BOOL)_accessQueue_teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)_accessQueue_teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)_accessQueue_teardownDescriptorStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(BOOL)teardownConfigurationStoreCoordinatorForPosterUUID:(id)arg0 version:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)teardownDynamicDescriptorStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(id)_accessQueue_configurationStoreCoordinatorForPosterUUID:(id)arg0 ;
-(id)_accessQueue_configurationStoreCoordinatorsWithError:(*id)arg0 ;
-(id)_accessQueue_createConfigurationStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(id)_accessQueue_createDescriptorStoreCoordinatorForPosterUUID:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)_accessQueue_createStaticDescriptorStoreCoordinatorForPosterUUID:(id)arg0 identifier:(id)arg1 error:(*id)arg2 ;
-(id)_accessQueue_deleteEnvironment;
-(id)_accessQueue_descriptionStoreCoordinatorForPosterUUID:(id)arg0 ;
-(id)_accessQueue_dynamicDescriptorStoreCoordinatorsWithError:(*id)arg0 ;
-(id)_accessQueue_dynamicPosterDescriptorLatestVersionPaths;
-(id)_accessQueue_posterStaticDescriptorLatestVersionPaths;
-(id)_accessQueue_providerInfo;
-(id)_accessQueue_providerInfoURL;
-(id)_accessQueue_setupEnvironmentIfNecessary;
-(id)_accessQueue_staticPosterDescriptorLatestVersionPaths;
-(id)_accessQueue_staticPosterDescriptorStoreCoordinatorsWithError:(*id)arg0 ;
-(id)_accessQueue_transientInternalInfo;
-(id)_accessQueue_transientInternalInfoURL;
-(id)configurationStoreCoordinatorForPosterUUID:(id)arg0 ;
-(id)configurationStoreCoordinatorsWithError:(*id)arg0 ;
-(id)createConfigurationStoreCoordinatorForPosterUUID:(id)arg0 error:(*id)arg1 ;
-(id)createDynamicDescriptorStoreCoordinatorForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)createStaticDescriptorStoreCoordinatorForIdentifier:(id)arg0 error:(*id)arg1 ;
-(id)deleteEnvironment;
-(id)description;
-(id)determineRefreshStateWithContext:(id)arg0 ;
-(id)dynamicDescriptorStoreCoordinatorForIdentifier:(id)arg0 ;
-(id)dynamicDescriptorStoreCoordinatorForPosterUUID:(id)arg0 ;
-(id)dynamicDescriptorStoreCoordinatorsWithError:(*id)arg0 ;
-(id)dynamicPosterDescriptorLatestVersionPaths;
-(id)init;
-(id)initWithContainerURL:(id)arg0 extensionIdentifier:(id)arg1 ;
-(id)posterStaticDescriptorLatestVersionPaths;
-(id)providerInfoObjectForKey:(id)arg0 ;
-(id)setupEnvironmentIfNecessary;
-(id)staticDescriptorStoreCoordinatorForIdentifier:(id)arg0 ;
-(id)staticDescriptorStoreCoordinatorForPosterUUID:(id)arg0 ;
-(id)staticDescriptorStoreCoordinatorsWithError:(*id)arg0 ;
-(void)_accessQueue_bumpLastRefreshDescriptorDate:(id)arg0 reason:(id)arg1 ;
-(void)_accessQueue_providerInfoSetObject:(id)arg0 forKey:(id)arg1 ;
-(void)_accessQueue_teardownAllStaticDescriptorStoreCoordinators;
-(void)_accessQueue_writeTransientInternalInfo:(id)arg0 error:(*id)arg1 ;
-(void)enumerateConfigurationStoreCoordinators:(id)arg0 ;
-(void)enumerateDescriptorStoreCoordinators:(id)arg0 ;
-(void)markDescriptorsAsRefreshed:(id)arg0 ;
-(void)providerInfoSetObject:(id)arg0 forKey:(id)arg1 ;
-(void)reapEverythingExceptLatestVersion;
-(void)teardownAllDynamicDescriptors;
-(void)teardownAllStaticDescriptorStoreCoordinators;


@end


#endif