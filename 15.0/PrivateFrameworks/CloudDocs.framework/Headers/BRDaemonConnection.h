// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRDAEMONCONNECTION_H
#define BRDAEMONCONNECTION_H

@class NSXPCConnection, NSUUID;



@interface BRDaemonConnection : NSXPCConnection {
    NSUUID *_uuid;
    BOOL _isUsingTokenService;
}




+(id)cloudDocsAppSupportURL;
+(id)cloudDocsAppSupportURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)cloudDocsCachesURL;
+(id)cloudDocsCachesURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)defaultConnection;
+(id)defaultConnectionIfExists;
+(id)homeDirectoryURL;
+(id)homeDirectoryURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)mobileDocumentsURL;
+(id)mobileDocumentsURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)secondaryConnection;
+(id)secondaryConnectionIfExists;
+(id)syncedDesktopURL;
+(id)syncedDesktopURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)syncedDocumentsURL;
+(id)syncedDocumentsURLForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)syncedRootURLs;
+(id)syncedRootURLsForPersonaID:(id)arg0 needsPersonaSwitch:(BOOL)arg1 ;
+(id)t_connectionForUUID:(id)arg0 ;
+(void)initialize;
+(void)invalidateCachedURLProperties;
+(void)t_setDefaultConnection:(id)arg0 ;
+(void)t_setMobileDocumentsURL:(id)arg0 ;
-(id)initUsingUserLocalDaemon;
-(id)initUsingUserLocalDaemonTokenService;
-(id)newSyncProxy;
-(id)newSyncTokenProxy;
-(void)_setupAndResume;


@end


#endif