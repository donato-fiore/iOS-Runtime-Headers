// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BRCFILEPROVIDINGREQUESTOPERATION_H
#define BRCFILEPROVIDINGREQUESTOPERATION_H

@class BRCFrameworkOperation, NSURL, NSMutableSet, NSSet, NSMutableArray, NSError, NSString;
@protocol BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass;


#import "BRCAccountSession.h"
#import "BRCXPCClient.h"
#import "BRCDirectoryItem.h"
#import "BRCTreeEnumerator.h"

@interface BRCFileProvidingRequestOperation : BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCOperationSubclass>

 {
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    NSMutableSet *_trackedDocIDs;
    NSSet *_docIDsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isStillEnumeratingDirectory;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
    NSMutableSet *_appLibrariesMonitored;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isForBackup; // ivar: _isForBackup
@property (nonatomic) BOOL isRecursive; // ivar: _isRecursive
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedDocIDs;
@property (nonatomic) BOOL wantsCurrentVersion; // ivar: _wantsCurrentVersion


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithDirectoryItem:(id)arg0 ;
-(id)initWithName:(id)arg0 session:(id)arg1 readingOptions:(NSUInteger)arg2 ;
-(id)initWithURL:(id)arg0 readingOptions:(NSUInteger)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)_detachAllTrackedDocID:(id)arg0 error:(id)arg1 ;
-(void)_finishAfterWaitingForDocumentsWithID:(id)arg0 error:(id)arg1 ;
-(void)_provideDirectoryRecursively:(id)arg0 ;
-(void)_provideDocument:(id)arg0 ;
-(void)_provideItem;
-(void)_provideURL;
-(void)addCompletionCallback:(id)arg0 ;
-(void)cancel;
-(void)downloadTrackedForItemWithDocID:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)networkReachabilityChanged:(BOOL)arg0 ;


@end


#endif