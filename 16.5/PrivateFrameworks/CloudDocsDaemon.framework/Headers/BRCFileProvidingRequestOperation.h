// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCFILEPROVIDINGREQUESTOPERATION_H
#define BRCFILEPROVIDINGREQUESTOPERATION_H

@class BRCFrameworkOperation, NSURL, NSMutableSet, NSSet, NSMutableArray, NSError, NSString;
@protocol BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass;


#import "BRCDirectoryItem.h"
#import "BRCTreeEnumerator.h"
#import "BRCListDirectoryContentsOperation.h"
#import "BRCRecursiveListDirectoryContentsOperation.h"
#import "BRCAccountSession.h"
#import "BRCXPCClient.h"
#import "BRCDocumentItem.h"

@interface BRCFileProvidingRequestOperation : BRCFrameworkOperation <BRCDownloadTracking, BRCReachabilityDelegate, BRCListOperationDelegate, BRCOperationSubclass>

 {
    BOOL _isRecursive;
    BOOL _wantsCurrentVersion;
    NSURL *_url;
    BRCDirectoryItem *_directoryItem;
    BRCTreeEnumerator *_treeEnumerator;
    BOOL _isStillEnumeratingDirectory;
    BRCListDirectoryContentsOperation *_listOp;
    BRCRecursiveListDirectoryContentsOperation *_recursiveList;
    BRCAccountSession *_session;
    BRCXPCClient *_client;
    NSMutableSet *_trackerFileObjects;
    NSMutableSet *_appLibrariesMonitored;
    BRCDocumentItem *_documentItem;
    NSSet *_trackedVersionsToCancel;
    NSMutableArray *_callbacks;
    NSError *_lastDownloadError;
    BOOL _isFinished;
    BOOL _isMonitoringReachability;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isRecursive;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSSet *trackedFileObjects;
@property (nonatomic) BOOL wantsCurrentVersion;


-(BOOL)shouldRetryForError:(id)arg0 ;
-(id)initWithDirectoryItem:(id)arg0 ;
-(id)initWithDocumentItem:(id)arg0 client:(id)arg1 session:(id)arg2 ;
-(id)initWithName:(id)arg0 session:(id)arg1 readingOptions:(NSUInteger)arg2 ;
-(id)initWithURL:(id)arg0 readingOptions:(NSUInteger)arg1 client:(id)arg2 session:(id)arg3 ;
-(void)_detachAllTrackedDocID:(id)arg0 error:(id)arg1 ;
-(void)_finishAfterWaitingForDocumentsWithID:(id)arg0 withEtagIfLoser:(id)arg1 error:(id)arg2 ;
-(void)_provideDirectoryContents:(id)arg0 appLibrary:(id)arg1 ;
-(void)_provideDirectoryRecursively:(id)arg0 ;
-(void)_provideDocument:(id)arg0 ;
-(void)_provideFlatDirectoryStructure:(id)arg0 ;
-(void)_provideItem;
-(void)_provideURL;
-(void)addCompletionCallback:(id)arg0 ;
-(void)cancel;
-(void)downloadTrackedForFileObjectID:(id)arg0 withEtagIfLoser:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)main;
-(void)networkReachabilityChanged:(BOOL)arg0 ;


@end


#endif