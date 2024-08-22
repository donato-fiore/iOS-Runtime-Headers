// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDBFILETRANSFER_H
#define CKDBFILETRANSFER_H

@class IMMessage, NSDictionary, NSString, NSError, NSURL;
@protocol CKFileTransfer;

#import <Foundation/Foundation.h>


@interface CKDBFileTransfer : NSObject <CKFileTransfer>



@property (retain, nonatomic) IMMessage *IMMessage;
@property (copy, nonatomic) NSDictionary *attributionInfo; // ivar: _attributionInfo
@property (readonly, nonatomic) NSInteger commSafetySensitive; // ivar: _commSafetySensitive
@property (readonly, nonatomic) NSUInteger currentBytes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable;
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading;
@property (readonly, copy, nonatomic) NSError *error;
@property (readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady;
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized;
@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (readonly, copy, nonatomic) NSString *guid; // ivar: _guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideAttachment; // ivar: _hideAttachment
@property (readonly, nonatomic) BOOL isDirectory; // ivar: _isDirectory
@property (readonly, nonatomic) BOOL isFromMomentShare; // ivar: _isFromMomentShare
@property (readonly, nonatomic) BOOL isScreenshot; // ivar: _isScreenshot
@property (readonly, nonatomic) BOOL isSticker; // ivar: _isSticker
@property (readonly, nonatomic, getter=isRejected) BOOL rejected;
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring;
@property (readonly, copy, nonatomic) NSURL *shareURL; // ivar: _shareURL
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // ivar: _stickerUserInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalBytes;
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // ivar: _transcoderUserInfo
@property (nonatomic) NSInteger transferState; // ivar: _transferState


-(id)initWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 ;
-(id)initWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 isScreenshot:(BOOL)arg4 ;
-(id)initWithTransferGUID:(id)arg0 imMessage:(id)arg1 ;
-(void)fetchHighQualityFile:(id)arg0 ;
-(void)mediaObjectAdded;
-(void)mediaObjectRemoved;


@end


#endif