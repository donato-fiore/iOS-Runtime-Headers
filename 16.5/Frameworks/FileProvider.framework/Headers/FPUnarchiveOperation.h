// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPUNARCHIVEOPERATION_H
#define FPUNARCHIVEOPERATION_H

@class NSURL, NSFileCoordinator, NSString;
@protocol DSArchiveServiceUnarchivingDelegate;


#import "FPActionOperation.h"
#import "FPItem.h"
#import "FPItemID.h"
#import "FPProviderDomain.h"

@interface FPUnarchiveOperation : FPActionOperation <DSArchiveServiceUnarchivingDelegate>

 {
    FPItem *_item;
    NSURL *_itemURL;
    FPItemID *_placeholderID;
    FPItem *_destinationFolder;
    BOOL _hasStitchedUnarchivedItems;
    NSFileCoordinator *_coordinator;
    id *_coordinationAccessToken;
    FPProviderDomain *_providerDomain;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *passphraseRequestBlock; // ivar: _passphraseRequestBlock
@property (readonly) Class superclass;
@property (copy, nonatomic) id *unarchiveCompletionBlock; // ivar: _unarchiveCompletionBlock


-(BOOL)getHasUnarchivedMultipleItems:(*BOOL)arg0 firstUnarchivedItemURL:(*id)arg1 forArchiveFolderURL:(id)arg2 error:(*id)arg3 ;
-(id)_newParentProgressWithCompletedUnitCount:(NSInteger)arg0 ;
-(id)findUniqueUnarchivedName:(id)arg0 isFolder:(BOOL)arg1 parent:(id)arg2 ;
-(id)initWithItem:(id)arg0 destinationFolder:(id)arg1 ;
-(void)_importUnarchivedContentAtURL:(id)arg0 archiveName:(id)arg1 completionHandler:(id)arg2 ;
-(void)_unarchiveAndHandleIncorrectPassphraseURL:(id)arg0 archiveName:(id)arg1 service:(id)arg2 passphrase:(id)arg3 completionHandler:(id)arg4 ;
-(void)_unarchiveURL:(id)arg0 archiveName:(id)arg1 service:(id)arg2 passphrase:(id)arg3 completionHandler:(id)arg4 ;
-(void)_unarchiveURLInDSEnumeratedDomain:(id)arg0 service:(id)arg1 passphrase:(id)arg2 completionHandler:(id)arg3 ;
-(void)_unarchiveURLInFPEnumeratedDomain:(id)arg0 archiveName:(id)arg1 service:(id)arg2 passphrase:(id)arg3 completionHandler:(id)arg4 ;
-(void)actionMain;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)service:(id)arg0 didReceiveArchivedItemsDescriptors:(id)arg1 ;


@end


#endif