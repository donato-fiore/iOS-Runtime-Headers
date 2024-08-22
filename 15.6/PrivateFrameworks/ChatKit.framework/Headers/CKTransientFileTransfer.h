// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKTRANSIENTFILETRANSFER_H
#define CKTRANSIENTFILETRANSFER_H

@class IMMessage, NSDictionary, NSString, NSError, NSURL;
@protocol CKFileTransfer;

#import <Foundation/Foundation.h>


@interface CKTransientFileTransfer : NSObject <CKFileTransfer>



@property (retain, nonatomic) IMMessage *IMMessage; // ivar: IMMessage
@property (copy, nonatomic) NSDictionary *attributionInfo; // ivar: attributionInfo
@property (readonly, nonatomic) NSInteger commSafetySensitive; // ivar: commSafetySensitive
@property (readonly, nonatomic) NSUInteger currentBytes; // ivar: currentBytes
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isDownloadable) BOOL downloadable; // ivar: downloadable
@property (readonly, nonatomic, getter=isDownloading) BOOL downloading; // ivar: downloading
@property (readonly, copy, nonatomic) NSError *error; // ivar: error
@property (readonly, nonatomic, getter=isFileDataReady) BOOL fileDataReady; // ivar: fileDataReady
@property (readonly, copy, nonatomic) NSURL *fileURL; // ivar: fileURL
@property (readonly, nonatomic, getter=isFileURLFinalized) BOOL fileURLFinalized; // ivar: fileURLFinalized
@property (readonly, copy, nonatomic) NSString *filename; // ivar: filename
@property (readonly, copy, nonatomic) NSString *guid; // ivar: guid
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL hideAttachment; // ivar: hideAttachment
@property (readonly, nonatomic) BOOL isDirectory; // ivar: isDirectory
@property (readonly, nonatomic) BOOL isFromMomentShare; // ivar: isFromMomentShare
@property (readonly, nonatomic) BOOL isSticker; // ivar: isSticker
@property (readonly, nonatomic, getter=isRestoring) BOOL restoring; // ivar: restoring
@property (readonly, copy, nonatomic) NSDictionary *stickerUserInfo; // ivar: stickerUserInfo
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUInteger totalBytes; // ivar: totalBytes
@property (readonly, copy, nonatomic) NSDictionary *transcoderUserInfo; // ivar: transcoderUserInfo


-(id)initWithAttributionInfo:(id)arg0 ;
-(id)initWithFileURL:(id)arg0 transcoderUserInfo:(id)arg1 attributionInfo:(id)arg2 hideAttachment:(BOOL)arg3 ;
-(id)initWithTransferGUID:(id)arg0 imMessage:(id)arg1 ;
-(void)fetchHighQualityFile:(id)arg0 ;
-(void)mediaObjectAdded;
-(void)mediaObjectRemoved;


@end


#endif