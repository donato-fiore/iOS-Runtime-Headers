// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PROPLUGINMANAGER_H
#define PROPLUGINMANAGER_H


#import <Foundation/Foundation.h>


@interface PROPlugInManager : NSObject



+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedPlugInManager;
-(BOOL)bundleIsDeferred:(id)arg0 ;
-(BOOL)checkIfShouldBlockPlugin:(id)arg0 returnPluginDictionary:(*id)arg1 ;
-(BOOL)checkPluginVersionAgainstBlockList:(id)arg0 blockDict:(id)arg1 ;
-(BOOL)requiresProtocolsToBePresentWhenLoading;
-(id)blockedDocumentPlugins;
-(id)blockedLibraryPlugins;
-(id)deferredPluginKitPlugs;
-(id)delegate;
-(id)loadBlockPluginList:(struct __CFString *)arg0 ;
-(id)plugInGroupWithUUID:(struct __CFUUID *)arg0 ;
-(id)plugInGroups;
-(id)plugInGroupsMutable;
-(id)plugInSearchDirectories;
-(id)plugInWithClassName:(id)arg0 ;
-(id)plugInWithUUID:(struct __CFUUID *)arg0 ;
-(id)plugIns;
-(id)plugInsForProtocol:(id)arg0 ;
-(id)plugInsForProtocols:(id)arg0 ;
-(void)addDeferredPluginBundle:(id)arg0 ;
-(void)addDocumentBlockedPlugin:(id)arg0 ;
-(void)addLibraryBlockedPlugin:(id)arg0 bundleName:(id)arg1 pluginName:(id)arg2 version:(id)arg3 ;
-(void)addPlugInSearchDirectory:(id)arg0 ;
-(void)getNameOverrides:(id)arg0 pluginName:(*id)arg1 bundleName:(*id)arg2 ;
-(void)loadDeferredPlugin:(id)arg0 ;
-(void)loadDeferredPlugins;
-(void)registerAPIObject:(id)arg0 forProtocol:(id)arg1 version:(unsigned int)arg2 ;
-(void)removeAllBlockedDocumentPlugins;
-(void)removeAllPlugIns;
-(void)removeDeferredPluginBundle:(id)arg0 ;
-(void)removePlugin:(id)arg0 ;
-(void)scanForPlugIns;
-(void)scanForPlugInsInBundle:(id)arg0 deferralNotification:(id)arg1 ;
-(void)scanForPlugInsInBundle:(id)arg0 withPluginKitPlugIn:(id)arg1 deferralNotification:(id)arg2 ;
-(void)scanForPlugInsInDirectory:(id)arg0 deferralNotification:(id)arg1 ;
-(void)setDelegate:(id)arg0 ;
-(void)setPlugInSearchDirectories:(id)arg0 ;
-(void)setRequiresProtocolsToBePresentWhenLoading:(BOOL)arg0 ;
-(void)unregisterAPIForProtocol:(id)arg0 ;
-(void)unregisterAPIForProtocol:(id)arg0 version:(unsigned int)arg1 ;


@end


#endif