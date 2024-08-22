// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MKAPISERVER_H
#define MKAPISERVER_H

@class NSHashTable, NSDate, NSString;
@protocol MKHTTPServerDelegate, MKGETSRPRouterDelegate, MKGETCertificateRouterDelegate, MKPOSTCertificateRouterDelegate, MKPUTRouterDelegate, MKPOSTClientRouterDelegate, MKPOSTSRPRouterDelegate, MKPOSTProgressRouterDelegate, MKMigratorDelegate, MKAPIServerDelegate;

#import <Foundation/Foundation.h>

#import "MKCertificate.h"
#import "MKHTTPServer.h"
#import "MKProgress.h"
#import "MKContext.h"
#import "MKGETStatusRouter.h"
#import "MKAccountMigrator.h"
#import "MKMessageMigrator.h"
#import "MKBookmarkMigrator.h"
#import "MKApplicationMigrator.h"
#import "MKAccessibilitySettingMigrator.h"
#import "MKDisplaySettingMigrator.h"
#import "MKContactMigrator.h"
#import "MKCalendarMigrator.h"
#import "MKPhotoLibraryMigrator.h"
#import "MKPhotoLibraryAlbumMigrator.h"
#import "MKFileMigrator.h"
#import "MKPlaceholderMigrator.h"
#import "MKContainerMigrator.h"
#import "MKDiagnosticsMigrator.h"
#import "MKAnalytics.h"

@interface MKAPIServer : NSObject <MKHTTPServerDelegate, MKGETSRPRouterDelegate, MKGETCertificateRouterDelegate, MKPOSTCertificateRouterDelegate, MKPUTRouterDelegate, MKPOSTClientRouterDelegate, MKPOSTSRPRouterDelegate, MKPOSTProgressRouterDelegate, MKMigratorDelegate>

 {
    BOOL _success;
    BOOL _isImporting;
    MKCertificate *_certificate;
    MKHTTPServer *_http;
    MKHTTPServer *_https;
    MKProgress *_progress;
    MKContext *_context;
    MKGETStatusRouter *_getStatusRouter;
    MKAccountMigrator *_accountMigrator;
    MKMessageMigrator *_messageMigrator;
    MKBookmarkMigrator *_bookmarkMigrator;
    MKApplicationMigrator *_applicationMigrator;
    MKAccessibilitySettingMigrator *_accessibilitySettingMigrator;
    MKDisplaySettingMigrator *_displaySettingMigrator;
    MKContactMigrator *_contactMigrator;
    MKCalendarMigrator *_calendarMigrator;
    MKPhotoLibraryMigrator *_photoLibraryImageMigrator;
    MKPhotoLibraryMigrator *_photoLibraryVideoMigrator;
    MKPhotoLibraryAlbumMigrator *_photoLibraryAlbumMigrator;
    MKFileMigrator *_fileMigrator;
    MKPlaceholderMigrator *_placeholderMigrator;
    MKContainerMigrator *_containerMigrator;
    MKDiagnosticsMigrator *_diagnosticsMigrator;
    NSHashTable *_migrators;
    MKAnalytics *_analytics;
    NSDate *_startDate;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<MKAPIServerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)import;
-(void)migratorDidComplete:(id)arg0 ;
-(void)migratorDidExecuteOperation:(id)arg0 ;
-(void)migratorWillExecuteOperation:(id)arg0 ;
-(void)processPerformanceMetrics;
-(void)router:(id)arg0 didReceiveAccessibilitySettingEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveAccountEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveApplicationEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveBookmarkEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveCertifciate:(id)arg1 ;
-(void)router:(id)arg0 didReceiveClient:(id)arg1 ;
-(void)router:(id)arg0 didReceiveContainer:(id)arg1 signature:(id)arg2 chunk:(id)arg3 filename:(id)arg4 offset:(NSUInteger)arg5 length:(NSUInteger)arg6 total:(NSUInteger)arg7 required:(BOOL)arg8 excludedFromBackup:(BOOL)arg9 ;
-(void)router:(id)arg0 didReceiveDiagnosticsFile:(id)arg1 filename:(id)arg2 ;
-(void)router:(id)arg0 didReceiveDisplaySettingEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveFileChunk:(id)arg1 filename:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 total:(NSUInteger)arg5 ;
-(void)router:(id)arg0 didReceiveICal:(id)arg1 ;
-(void)router:(id)arg0 didReceiveImageChunk:(id)arg1 identifier:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 total:(NSUInteger)arg5 filename:(id)arg6 collection:(id)arg7 ;
-(void)router:(id)arg0 didReceiveMessageEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceivePerformanceMetrics:(id)arg1 ;
-(void)router:(id)arg0 didReceivePlaceholderEncodedInJSON:(id)arg1 ;
-(void)router:(id)arg0 didReceiveVCard:(id)arg1 ;
-(void)router:(id)arg0 didReceiveVideoChunk:(id)arg1 identifier:(id)arg2 offset:(NSUInteger)arg3 length:(NSUInteger)arg4 total:(NSUInteger)arg5 filename:(id)arg6 collection:(id)arg7 ;
-(void)router:(id)arg0 didUpdateProgress:(float)arg1 remainingTime:(NSUInteger)arg2 state:(int)arg3 ;
-(void)routerDidAuthenticateClient:(id)arg0 ;
-(void)routerDidRejectClient:(id)arg0 ;
-(void)routerDidRevokeEncryptionKey:(id)arg0 ;
-(void)run;
-(void)runHTTP;
-(void)runHTTPS:(id)arg0 ;
-(void)server:(id)arg0 didOpen:(NSInteger)arg1 ;
-(void)serverDidCancel:(id)arg0 ;
-(void)setImportContext:(id)arg0 ;
-(void)setImportContexts;


@end


#endif