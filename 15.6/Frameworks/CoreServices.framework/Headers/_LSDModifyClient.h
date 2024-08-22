// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _LSDMODIFYCLIENT_H
#define _LSDMODIFYCLIENT_H

@class LSDClient, NSString;
@protocol _LSDModifyProtocol;



@interface _LSDModifyClient : LSDClient <_LSDModifyProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)canRegisterWithOptions:(unsigned int)arg0 ;
-(BOOL)clientHasMIEntitlement:(id)arg0 ;
-(void)garbageCollectDatabaseWithCompletionHandler:(id)arg0 ;
-(void)installApplication:(id)arg0 atURL:(id)arg1 withOptions:(id)arg2 installType:(NSUInteger)arg3 reply:(id)arg4 ;
-(void)performInstallCall:(id)arg0 withOptions:(id)arg1 installType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)performUninstallCall:(id)arg0 withOptions:(id)arg1 uninstallType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)rebuildApplicationDatabasesForSystem:(BOOL)arg0 internal:(BOOL)arg1 user:(BOOL)arg2 completionHandler:(id)arg3 ;
-(void)refreshContentInFrameworkAtURL:(id)arg0 reply:(id)arg1 ;
-(void)registerContainerURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)registerExtensionPoint:(id)arg0 platform:(unsigned int)arg1 declaringURL:(id)arg2 withInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)registerItemInfo:(id)arg0 alias:(id)arg1 diskImageAlias:(id)arg2 bundleURL:(id)arg3 installationPlist:(id)arg4 completionHandler:(id)arg5 ;
-(void)relaxApplicationTypeRequirements:(BOOL)arg0 forBundleIdentifier:(id)arg1 completionHandler:(id)arg2 ;
-(void)removeAllHandlerPrefsForBundleID:(id)arg0 completionHandler:(id)arg1 ;
-(void)removeAllHandlersWithCompletionHandler:(id)arg0 ;
-(void)removeHandlerForContentType:(id)arg0 roles:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)removeHandlerForURLScheme:(id)arg0 completionHandler:(id)arg1 ;
-(void)resetServerStoreWithCompletionHandler:(id)arg0 ;
-(void)setDatabaseIsSeeded:(BOOL)arg0 completionHandler:(id)arg1 ;
-(void)setHandler:(id)arg0 version:(struct LSVersionNumber )arg1 forURLScheme:(id)arg2 completionHandler:(id)arg3 ;
-(void)setHandler:(id)arg0 version:(struct LSVersionNumber )arg1 roles:(unsigned int)arg2 forContentType:(id)arg3 completionHandler:(id)arg4 ;
-(void)setPreferenceValue:(id)arg0 forKey:(id)arg1 forApplicationAtURL:(id)arg2 completionHandler:(id)arg3 ;
-(void)setPreferenceValueForCallingApplication:(id)arg0 forKey:(id)arg1 completionHandler:(id)arg2 ;
-(void)setUpdateAvailabilities:(id)arg0 completionHandler:(id)arg1 ;
-(void)synchronizeWithMobileInstallation;
-(void)uninstallApplication:(id)arg0 withOptions:(id)arg1 uninstallType:(NSUInteger)arg2 reply:(id)arg3 ;
-(void)unregisterApplicationAtURL:(id)arg0 reply:(id)arg1 ;
-(void)unregisterBundleUnit:(unsigned int)arg0 options:(unsigned int)arg1 completionHandler:(id)arg2 ;
-(void)unregisterExtensionPoint:(id)arg0 platform:(unsigned int)arg1 withVersion:(id)arg2 completionHandler:(id)arg3 ;
-(void)updateContainerUnit:(unsigned int)arg0 completionHandler:(id)arg1 ;
-(void)updateRecordForApp:(id)arg0 withSINF:(id)arg1 iTunesMetadata:(id)arg2 placeholderMetadata:(id)arg3 sendNotification:(int)arg4 completionHandler:(id)arg5 ;
-(void)willHandleInvocation:(id)arg0 isReply:(BOOL)arg1 ;


@end


#endif