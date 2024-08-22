// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKSHOWOPENDIALOGOPERATION_H
#define CRKSHOWOPENDIALOGOPERATION_H

@class CATOperation, NSSet, NSData, NSString, NSURL, SFAirDropClassroomTransferManager;
@protocol SFAirDropClassroomTransferDelegate;


#import "CRKAirDropTransferInfo.h"

@interface CRKShowOpenDialogOperation : CATOperation <SFAirDropClassroomTransferDelegate>

 {
    NSSet *mURLs;
    BOOL mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    BOOL mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    NSSet *mAirDropItems;
    NSString *mTransferIdentifier;
    CRKAirDropTransferInfo *mTransferInfo;
    BOOL mTransferAccepted;
    BOOL mTransferFinished;
    NSURL *mTransferDirectoryURL;
    SFAirDropClassroomTransferManager *mTransferManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)fakeBundleID;
-(BOOL)isAsynchronous;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 ;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 sourceBundleIdentifier:(id)arg5 ;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 sourceBundleIdentifier:(id)arg5 filesDescription:(id)arg6 ;
-(void)cancel;
-(void)cleanupHiddenTransferItemsIfNeeded;
-(void)failWithError:(id)arg0 ;
-(void)main;
-(void)startTransfer;
-(void)succeedIfNeeded;
-(void)transferDidFinishWithSuccess:(BOOL)arg0 destinationPath:(id)arg1 error:(id)arg2 ;
-(void)transferDidProgressWithSuccess:(BOOL)arg0 destinationPath:(id)arg1 error:(id)arg2 ;
-(void)transferDidStartWithSuccess:(BOOL)arg0 destinationPath:(id)arg1 error:(id)arg2 ;
-(void)transferWithIdentifierWasAccepted:(id)arg0 ;
-(void)transferWithIdentifierWasDeclined:(id)arg0 withFailureReason:(NSUInteger)arg1 ;


@end


#endif