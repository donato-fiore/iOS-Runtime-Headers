// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSHOWOPENDIALOGOPERATION_H
#define CRKSHOWOPENDIALOGOPERATION_H

@class CATOperation, NSSet, NSData, NSString, NSURL;
@protocol CRKFileSystemPrimitives, CRKSharingPrimitives, CRKSharingAirDropTransfer;



@interface CRKShowOpenDialogOperation : CATOperation {
    NSSet *mURLs;
    BOOL mKeepOriginalFiles;
    NSData *mPreviewImageData;
    NSString *mSenderName;
    BOOL mAutoAccept;
    NSString *mSourceBundleIdentifier;
    NSString *mFilesDescription;
    BOOL mTransferAccepted;
    BOOL mTransferFinished;
    NSURL *mTransferDirectoryURL;
}


@property (readonly, nonatomic) CGFloat cleanupDelay; // ivar: _cleanupDelay
@property (readonly, nonatomic) NSObject<CRKFileSystemPrimitives> *fileSystemPrimitives; // ivar: _fileSystemPrimitives
@property (readonly, nonatomic) NSObject<CRKSharingPrimitives> *sharingPrimitives; // ivar: _sharingPrimitives
@property (retain, nonatomic) NSObject<CRKSharingAirDropTransfer> *transfer; // ivar: _transfer


+(id)fakeBundleID;
-(BOOL)isAsynchronous;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 ;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 sourceBundleIdentifier:(id)arg5 ;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 sourceBundleIdentifier:(id)arg5 filesDescription:(id)arg6 ;
-(id)initWithFileURLs:(id)arg0 keepOriginalFiles:(BOOL)arg1 previewImageData:(id)arg2 senderName:(id)arg3 autoAccept:(BOOL)arg4 sourceBundleIdentifier:(id)arg5 filesDescription:(id)arg6 cleanupDelay:(CGFloat)arg7 sharingPrimitives:(id)arg8 fileSystemPrimitives:(id)arg9 ;
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
-(void)transferWithIdentifierWasDeclined:(id)arg0 error:(id)arg1 ;


@end


#endif