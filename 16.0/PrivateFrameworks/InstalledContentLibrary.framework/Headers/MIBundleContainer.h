// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIBUNDLECONTAINER_H
#define MIBUNDLECONTAINER_H

@class NSURL;


#import "MIContainer.h"
#import "MIExecutableBundle.h"
#import "MIBundleMetadata.h"

@interface MIBundleContainer : MIContainer

@property (readonly, nonatomic) MIExecutableBundle *bundle; // ivar: _bundle
@property (readonly, nonatomic) unsigned int bundleMaxLinkedSDKVersion;
@property (copy, nonatomic) MIBundleMetadata *bundleMetadata; // ivar: _bundleMetadata
@property (readonly, nonatomic) NSURL *bundleMetadataURL;
@property (readonly, nonatomic) NSURL *compatibilityLinkDestination;
@property (readonly, nonatomic) BOOL hasParallelPlaceholder;
@property (readonly, nonatomic) NSURL *iTunesMetadataURL;
@property (readonly, nonatomic) NSURL *parallelPlaceholderURL;
@property (readonly, nonatomic) NSURL *referenceStorageURL;
@property (readonly, nonatomic) BOOL shouldHaveCorrespondingDataContainer;
@property (readonly, nonatomic) NSURL *stashBaseURL;


+(BOOL)updateiTunesMetadataForAppWithIdentifier:(id)arg0 plistData:(id)arg1 error:(*id)arg2 ;
+(id)allAppBundleContainersWithError:(*id)arg0 ;
+(id)appBundleContainerForIdentifier:(id)arg0 inDomain:(NSUInteger)arg1 withError:(*id)arg2 ;
+(id)appBundleContainerForIdentifier:(id)arg0 temporary:(BOOL)arg1 inDomain:(NSUInteger)arg2 withError:(*id)arg3 ;
+(id)appBundleContainerWithIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;
+(id)pluginKitPluginBundleContainerWithIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;
+(id)privateAppBundleContainerWithIdentifier:(id)arg0 createIfNeeded:(BOOL)arg1 created:(*BOOL)arg2 error:(*id)arg3 ;
+(id)privateTempAppBundleContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)tempAppBundleContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)tempAppBundleContainerWithIdentifier:(id)arg0 inDomain:(NSUInteger)arg1 withError:(*id)arg2 ;
+(id)tempPluginKitPluginBundleContainerWithIdentifier:(id)arg0 error:(*id)arg1 ;
+(id)updateSinfDataForAppWithIdentifier:(id)arg0 sinfData:(id)arg1 error:(*id)arg2 ;
-(BOOL)bestEffortRollbackiTunesMetadata:(id)arg0 error:(*id)arg1 ;
-(BOOL)captureBundleByMoving:(id)arg0 withError:(*id)arg1 ;
-(BOOL)cloneContentFromStashedBundleContainer:(id)arg0 error:(*id)arg1 ;
-(BOOL)makeContainerLiveReplacingContainer:(id)arg0 reason:(NSUInteger)arg1 waitForDeletion:(BOOL)arg2 withError:(*id)arg3 ;
-(BOOL)saveBundleMetadata:(id)arg0 withError:(*id)arg1 ;
-(BOOL)stashBundleContainerContents:(id)arg0 error:(*id)arg1 ;
-(BOOL)transferExistingStashesFromContainer:(id)arg0 error:(*id)arg1 ;
-(BOOL)writeiTunesMetadata:(id)arg0 error:(*id)arg1 ;
-(id)_stashURLForIndex:(NSUInteger)arg0 ;
-(id)_stashedBundleContainerForIndex:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)bundleMetadataWithError:(*id)arg0 ;
-(id)initForAppContainerWithURL:(id)arg0 ;
-(id)initWithContainer:(struct container_object_s *)arg0 error:(*id)arg1 ;
-(id)stashedBundleContainerWithError:(*id)arg0 ;


@end


#endif