// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPUNARCHIVEOPERATION_H
#define FPUNARCHIVEOPERATION_H

@class NSURL, NSFileCoordinator, NSString;
@protocol FPArchiveServiceUnarchivingDelegate;


#import "FPActionOperation.h"
#import "FPItem.h"
#import "FPItemID.h"

@interface FPUnarchiveOperation : FPActionOperation <FPArchiveServiceUnarchivingDelegate>

 {
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    BOOL _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id *_coordinationAccessToken;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *passphraseRequestBlock; // ivar: _passphraseRequestBlock
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unarchiveCompletionBlock; // ivar: _unarchiveCompletionBlock


-(BOOL)_handleArchiveDecryptionError:(id)arg0 item:(id)arg1 service:(id)arg2 itemURL:(id)arg3 ;
-(BOOL)getHasUnarchivedMultipleItems:(*BOOL)arg0 firstUnarchivedItemURL:(*id)arg1 forArchiveFolderURL:(id)arg2 error:(*id)arg3 ;
-(id)_newParentProgressWithCompletedUnitCount:(NSInteger)arg0 ;
-(id)initWithItem:(id)arg0 destinationFolder:(id)arg1 ;
-(void)__completeWithItem:(id)arg0 service:(id)arg1 resultURL:(id)arg2 error:(id)arg3 ;
-(void)_completeWithItemURL:(id)arg0 item:(id)arg1 service:(id)arg2 resultURL:(id)arg3 error:(id)arg4 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)service:(id)arg0 didReceiveArchivedItemsDescriptors:(id)arg1 ;


@end


#endif