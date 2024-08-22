// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PROCONCRETEPLUGINMANAGER_H
#define PROCONCRETEPLUGINMANAGER_H

@class NSMutableDictionary, NSMutableArray, NSRecursiveLock, NSString;
@protocol PROVersionedAPIAccess, PROBundleHandlerDelegate;


#import "PROPlugInManager.h"
#import "PROReadWriteLock.h"

@interface PROConcretePlugInManager : PROPlugInManager <PROVersionedAPIAccess, PROBundleHandlerDelegate>

 {
    NSMutableDictionary *protocols;
    NSMutableDictionary *groupsDictionary;
    NSMutableDictionary *bundlesDictionary;
    NSMutableDictionary *uuids;
    NSMutableDictionary *classesDictionary;
    NSMutableArray *plugIns;
    NSMutableDictionary *api;
    PROReadWriteLock *apiLock;
    NSMutableArray *plugInSearchDirectories;
    NSMutableArray *deferredPluginBundles;
    NSMutableDictionary *blockedLibraryPlugins;
    NSMutableDictionary *blockedDocumentPlugins;
    id *delegate;
    ? managerFlags;
    NSRecursiveLock *mutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)bundleHandler:(id)arg0 shouldAddPlugIn:(id)arg1 ;
-(BOOL)bundleIsDeferred:(id)arg0 ;
-(BOOL)checkIfShouldBlockPlugin:(id)arg0 returnPluginDictionary:(*id)arg1 ;
-(BOOL)checkPluginVersionAgainstBlockList:(id)arg0 blockDict:(id)arg1 ;
-(BOOL)requiresProtocolsToBePresentWhenLoading;
-(BOOL)shouldLoadBundle:(id)arg0 ;
-(BOOL)shouldLoadPlugIn:(id)arg0 ;
-(BOOL)validateProtocols:(id)arg0 ;
-(id)apiForProtocol:(*id)arg0 versions:(id)arg1 ;
-(id)blockedDocumentPlugins;
-(id)blockedLibraryPlugins;
-(id)deferredPluginKitPlugs;
-(id)delegate;
-(id)init;
-(id)newBlockPluginList:(struct __CFString *)arg0 ;
-(id)objectInBundlesAtIndex:(unsigned int)arg0 ;
-(id)plugInGroupWithUUID:(struct __CFUUID *)arg0 ;
-(id)plugInGroups;
-(id)plugInGroupsMutable;
-(id)plugInSearchDirectories;
-(id)plugInWithClassName:(id)arg0 ;
-(id)plugInWithUUID:(struct __CFUUID *)arg0 ;
-(id)plugIns;
-(id)plugInsForProtocol:(id)arg0 ;
-(id)plugInsForProtocols:(id)arg0 ;
-(id)sanitizePluginVersionString:(id)arg0 ;
-(unsigned int)countOfBundles;
-(void)addDeferredPluginBundle:(id)arg0 ;
-(void)addDocumentBlockedPlugin:(id)arg0 ;
-(void)addLibraryBlockedPlugin:(id)arg0 bundleName:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(void)addPlugIn:(id)arg0 ;
-(void)addPlugInSearchDirectory:(id)arg0 ;
-(void)bundleHandler:(id)arg0 didAddPlugIn:(id)arg1 ;
-(void)bundleHandler:(id)arg0 didError:(id)arg1 ;
-(void)dealloc;
-(void)finishPluginSetupForBundle:(id)arg0 handler:(id)arg1 ;
-(void)getNameOverrides:(id)arg0 pluginName:(*id)arg1 bundleName:(*id)arg2 ;
-(void)insertObject:(id)arg0 inPlugInSearchDirectoriesAtIndex:(unsigned int)arg1 ;
-(void)loadDeferredPlugin:(id)arg0 ;
-(void)loadDeferredPlugins;
-(void)mergeGroupsDictionaryWith:(id)arg0 ;
-(void)registerAPIObject:(id)arg0 forProtocol:(id)arg1 version:(unsigned int)arg2 ;
-(void)removeAllBlockedDocumentPlugins;
-(void)removeAllPlugIns;
-(void)removeDeferredPluginBundle:(id)arg0 ;
-(void)removeObjectFromPlugInSearchDirectoriesAtIndex:(unsigned int)arg0 ;
-(void)removePlugin:(id)arg0 ;
-(void)reportError:(id)arg0 ;
-(void)scanForPlugIns;
-(void)scanForPlugInsInBundle:(id)arg0 deferralNotification:(id)arg1 ;
-(void)scanForPlugInsInBundle:(id)arg0 withPluginKitPlugIn:(id)arg1 deferralNotification:(id)arg2 ;
-(void)scanForPlugInsInBundleHelper:(id)arg0 zone:(struct _NSZone *)arg1 withPluginKitPlugIn:(id)arg2 actuallyLoad:(BOOL)arg3 deferralNotification:(id)arg4 ;
-(void)scanForPlugInsInBundleHelper:(id)arg0 zone:(struct _NSZone *)arg1 withPluginKitPlugIn:(id)arg2 deferralNotification:(id)arg3 ;
-(void)scanForPlugInsInDirectory:(id)arg0 actuallyLoad:(BOOL)arg1 deferralNotification:(id)arg2 ;
-(void)scanForPlugInsInDirectory:(id)arg0 deferralNotification:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPlugInSearchDirectories:(id)arg0 ;
-(void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg0 ;
-(void)unregisterAPIForProtocol:(id)arg0 ;
-(void)unregisterAPIForProtocol:(id)arg0 version:(unsigned int)arg1 ;


@end


#endif