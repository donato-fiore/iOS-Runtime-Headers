// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKIMFILETRANSFER_H
#define CKIMFILETRANSFER_H

@class IMMessage, NSDictionary, NSString, NSError, NSURL;
@protocol CKFileTransfer, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CKIMFileTransfer : NSObject <CKFileTransfer>

 {
    int _mediaObjectCount;
}


@property (retain, nonatomic) IMMessage *IMMessage; // ivar: _imMessage
@property (copy, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (readonly, nonatomic) NSInteger commSafetySensitive; // ivar: _commSafetySensitive
@property (readonly, nonatomic) NSUInteger currentBytes; // ivar: _currentBytes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady; // ivar: _fileDataReady
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized; // ivar: _fileURLFinalized
@property (readonly, copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideAttachment; // ivar: _hideAttachment
@property (readonly, nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (readonly, nonatomic) BOOL isFromMomentShare; // ivar: _isFromMomentShare
@property (readonly, nonatomic) BOOL isSticker; // ivar: _isSticker
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *isolationQueue; // ivar: _isolationQueue
@property (copy, nonatomic) NSURL *linkFileURL; // ivar: _linkFileURL
@property (readonly, nonatomic, getter=isRejected) BOOL rejected; // ivar: _rejected
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring; // ivar: _restoring
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // ivar: _stickerUserInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalBytes; // ivar: _totalBytes
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // ivar: _transcoderUserInfo
@property (nonatomic) NSInteger transferState; // ivar: _transferState


-(id)fileManager;
-(id)imFileTransferCenter;
-(id)initWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 ;
-(id)initWithStickerFileURL:(id)arg0 transferUserInfo:(id)arg1 attributionInfo:(id)arg2 ;
-(id)initWithTransferGUID:(id)arg0 imMessage:(id)arg1 ;
-(id)linkFileURLWithFilename:(id)arg0 ;
-(id)notificationCenter;
-(id)syncController;
-(void)_reloadTransferAndDetermineIfUpdated:(*BOOL)arg0 ;
-(void)attachmentRestored:(id)arg0 ;
-(void)dealloc;
-(void)fetchHighQualityFile:(id)arg0 ;
-(void)mediaObjectAdded;
-(void)mediaObjectRemoved;
-(void)reloadTransfer;
-(void)transferUpdated:(id)arg0 ;


@end


#endif