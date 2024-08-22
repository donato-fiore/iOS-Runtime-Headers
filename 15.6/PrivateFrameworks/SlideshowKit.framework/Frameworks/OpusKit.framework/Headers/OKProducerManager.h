// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKPRODUCERMANAGER_H
#define OKPRODUCERMANAGER_H

@class NSMutableDictionary, OFReachability, NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface OKProducerManager : NSObject {
    NSMutableDictionary *_extentionClassNames;
    NSMutableDictionary *_installedPlugins;
    NSMutableDictionary *_installedContents;
    OFReachability *_reachability;
    NSInteger _reachabilityStatus;
    NSObject<OS_dispatch_queue> *_serialCloudServicePreparationQueue;
    BOOL _cloudServicePreparing;
    BOOL _cloudServicePrepared;
    NSOperationQueue *_cloudServiceOperationQueue;
    NSObject<OS_dispatch_queue> *_producerAccessQueue;
}


@property (nonatomic) BOOL cloudServiceAutomaticUpdates; // ivar: _cloudServiceAutomaticUpdates
@property (nonatomic) NSInteger minimumNetworkStatusForDownloads; // ivar: _minimumNetworkStatusForDownloads


+(id)defaultManager;
-(BOOL)hasContentWithIdentifier:(id)arg0 ;
-(BOOL)hasInstalledContentWithIdentifier:(id)arg0 ;
-(BOOL)hasInstalledPluginAndContentWithIdentifier:(id)arg0 ;
-(BOOL)hasInstalledPluginWithIdentifier:(id)arg0 ;
-(BOOL)hasPluginWithIdentifier:(id)arg0 ;
-(BOOL)uninstallContentWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(BOOL)uninstallPluginWithIdentifier:(id)arg0 error:(*id)arg1 ;
-(CGFloat)versionForContentIdentifier:(id)arg0 ;
-(CGFloat)versionForPluginIdentifier:(id)arg0 ;
-(Class)registeredClassFromString:(id)arg0 ;
-(id)_allBundlesURLsWithExtention:(id)arg0 ;
-(id)_contentFromURL:(id)arg0 ;
// -(id)_contentWithIdentifier:(id)arg0 progressBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(id)_installedURLsInDirectoryURL:(id)arg0 withExtension:(id)arg1 ;
-(id)_pluginFromURL:(id)arg0 ;
-(id)addContentFromURL:(id)arg0 ;
-(id)addPluginFromURL:(id)arg0 ;
-(id)allContentsIdentifiers;
-(id)allInstalledContents;
-(id)allInstalledPlugins;
-(id)allPluginsIdentifiers;
-(id)audioURLsForPluginIdentifier:(id)arg0 ;
-(id)backgroundColorForPluginIdentifier:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)installContentAtURL:(id)arg0 overwrite:(BOOL)arg1 error:(*id)arg2 ;
-(id)installPluginAtURL:(id)arg0 overwrite:(BOOL)arg1 error:(*id)arg2 ;
-(id)installedContentAtURL:(id)arg0 ;
-(id)installedContentWithIdentifier:(id)arg0 ;
-(id)installedPluginAtURL:(id)arg0 ;
-(id)installedPluginWithIdentifier:(id)arg0 ;
-(id)installedPluginWithName:(id)arg0 ;
-(id)installedPluginsNames;
-(id)installedPluginsWithFamily:(NSUInteger)arg0 ;
-(id)libraryPlugInsDirectoryURL;
-(id)loadedContents;
-(id)loadedPlugins;
-(id)localizedNameForPluginIdentifier:(id)arg0 ;
-(id)pluginWithLoadedClass:(Class)arg0 ;
-(id)userLibraryPlugInsDirectoryURL;
-(struct CGImage *)previewImageRefForPluginIdentifier:(id)arg0 ;
-(void)_closeAndDeleteDocument:(id)arg0 fileURL:(id)arg1 completionBlock:(id)arg2 ;
-(void)_closeDocument:(id)arg0 completionBlock:(id)arg1 ;
-(void)_openDocument:(id)arg0 completionBlock:(id)arg1 ;
-(void)_performAsynchronousProducerAccessUsingBlock:(id)arg0 ;
-(void)_reachabilityChanged:(id)arg0 ;
-(void)_saveDocument:(id)arg0 completionBlock:(id)arg1 ;
-(void)_saveDocument:(id)arg0 toFileURL:(id)arg1 completionBlock:(id)arg2 ;
// -(void)authorDocument:(id)arg0 withPluginIdentifier:(id)arg1 guidelines:(id)arg2 flattenMedia:(BOOL)arg3 flattenProducer:(BOOL)arg4 progressBlock:(id)arg5 completionBlock:(unk)arg6  ;
// -(void)contentWithIdentifier:(id)arg0 progressBlock:(id)arg1 completionBlock:(unk)arg2  ;
// -(void)createDocumentAtDirectoryURL:(id)arg0 withPluginIdentifier:(id)arg1 guidelines:(id)arg2 mediaURLs:(id)arg3 mediaItemLookupDelegate:(id)arg4 flattenMedia:(BOOL)arg5 flattenProducer:(BOOL)arg6 prepareCaches:(BOOL)arg7 format:(NSUInteger)arg8 keepOpen:(BOOL)arg9 documentClass:(Class)arg10 progressBlock:(id)arg11 completionBlock:(unk)arg12  ;
// -(void)createDocumentAtFileURL:(id)arg0 withPluginIdentifier:(id)arg1 guidelines:(id)arg2 mediaURLs:(id)arg3 mediaItemLookupDelegate:(id)arg4 flattenMedia:(BOOL)arg5 flattenProducer:(BOOL)arg6 prepareCaches:(BOOL)arg7 format:(NSUInteger)arg8 keepOpen:(BOOL)arg9 documentClass:(Class)arg10 progressBlock:(id)arg11 completionBlock:(unk)arg12  ;
// -(void)createPresentationWithPluginIdentifier:(id)arg0 guidelines:(id)arg1 mediaFeeder:(id)arg2 mediaItemLookupDelegate:(id)arg3 progressBlock:(id)arg4 completionBlock:(unk)arg5  ;
// -(void)createPresentationWithPreset:(id)arg0 guidelines:(id)arg1 mediaFeeder:(id)arg2 mediaItemLookupDelegate:(id)arg3 progressBlock:(id)arg4 completionBlock:(unk)arg5  ;
-(void)dealloc;
-(void)performAsynchronousProducerAccessUsingBlock:(id)arg0 ;
// -(void)pluginWithIdentifier:(id)arg0 progressBlock:(id)arg1 completionBlock:(unk)arg2  ;
-(void)prepareCloudServiceIfNeeded;
-(void)refreshInstalledContents;
-(void)refreshInstalledPlugins;
-(void)registerExtensionClassName:(id)arg0 forPluginIdentifier:(id)arg1 ;
-(void)registerOpusKitClasses;
-(void)unregisterExtensionClassName:(id)arg0 forPluginIdentifier:(id)arg1 ;
-(void)waitUntilCloudServicePrepared:(CGFloat)arg0 ;


@end


#endif