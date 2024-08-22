// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPARCHIVEOPERATION_H
#define FPARCHIVEOPERATION_H

@class NSArray, NSOperationQueue;
@protocol OS_dispatch_queue;


#import "FPActionOperation.h"
#import "FPItemID.h"
#import "FPItem.h"

@interface FPArchiveOperation : FPActionOperation {
    NSArray *_items;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    NSObject<OS_dispatch_queue> *_queue;
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) id *archiveCompletionBlock; // ivar: _archiveCompletionBlock


-(BOOL)_checkNeedOfTemporaryDirectory;
-(id)_zipPathExtension;
-(id)findUniqueArchivedName:(id)arg0 isFolder:(BOOL)arg1 parent:(id)arg2 ;
-(id)initWithItems:(id)arg0 destinationFolder:(id)arg1 ;
-(void)_archiveURLForDSEnumeratedDestination:(id)arg0 service:(id)arg1 completionHandler:(id)arg2 ;
-(void)_archiveURLForFPEnumeratedDestination:(id)arg0 targetArchiveName:(id)arg1 service:(id)arg2 completionHandler:(id)arg3 ;
-(void)_archiveURLs:(id)arg0 targetArchiveName:(id)arg1 completionHandler:(id)arg2 ;
-(void)_coordinateArchivedItemsWithCompletionHandler:(id)arg0 ;
-(void)_copyArchivedItemsWithCompletionHandler:(id)arg0 ;
-(void)_materializeDestinationFolder:(id)arg0 ;
-(void)_prepareItemsWithCompletionHandler:(id)arg0 ;
-(void)actionMain;
-(void)didUnarchiveItemAtURL:(id)arg0 ;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presendNotifications;


@end


#endif