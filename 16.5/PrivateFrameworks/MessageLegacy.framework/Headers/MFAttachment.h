// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MFATTACHMENT_H
#define MFATTACHMENT_H

@class NSString, NSProgress, MFMimePart, NSURL;
@protocol EFCancelable, MFDataConsumer;

#import <Foundation/Foundation.h>

#import "MFAttachmentManager.h"
#import "MFAttachmentPlaceholder.h"

@interface MFAttachment : NSObject <EFCancelable>

 {
    BOOL _isDataAvailableLocally;
}


@property (nonatomic) MFAttachmentManager *attachmentManager; // ivar: _attachmentManager
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSObject<MFDataConsumer> *customConsumer; // ivar: _customConsumer
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decodedFileSize;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disposition; // ivar: _disposition
@property (retain, nonatomic) NSProgress *downloadProgress; // ivar: _downloadProgress
@property (nonatomic) NSUInteger encodedFileSize;
@property (copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *fileUTType;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *inferredMimeType;
@property (readonly) BOOL isAutoArchive; // ivar: _isAutoArchive
@property (readonly) BOOL isContainedInCompose;
@property (readonly) BOOL isContainedInRFC822;
@property (readonly) BOOL isDataAvailableLocally;
@property BOOL isPlaceholder;
@property (nonatomic) NSUInteger lastProgressBytes; // ivar: _lastProgressBytes
@property (nonatomic) CGFloat lastProgressTime; // ivar: _lastProgressTime
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) MFMimePart *part; // ivar: _part
@property (readonly) NSString *path;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL wantsCompletionBlockOffMainThread; // ivar: _wantsCompletionBlockOffMainThread


-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToEventICS;
-(BOOL)contentTypeConformsToEventVCS;
-(BOOL)contentTypeConformsToIWork;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)isAvailable;
-(BOOL)isCached;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isImageFile;
-(BOOL)isMailDrop;
-(BOOL)isMailDropPhotoArchive;
-(NSUInteger)sizeOnDisk;
-(id)_dataProvider;
-(id)_fileUTTypeForFileName:(id)arg0 ;
-(id)attachmentContentTypeForFileName:(id)arg0 ;
-(id)decodeFilterWithDataConsumer:(id)arg0 ;
-(id)fetchDataSynchronously:(*id)arg0 ;
-(id)fetchDataSynchronously:(*id)arg0 stripPrivateMetadata:(BOOL)arg1 ;
-(id)fetchDataToURL:(*id)arg0 ;
-(id)fetchLocalData;
-(id)fetchLocalData:(*id)arg0 stripPrivateMetadata:(BOOL)arg1 ;
-(id)fetchPlaceholderData;
-(id)fileAttributes;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg0 ;
-(id)fileURL;
-(id)filterData:(id)arg0 ;
-(id)filterICSData:(id)arg0 ;
-(id)filterVCSData:(id)arg0 ;
-(id)initWithURL:(id)arg0 attachmentManager:(id)arg1 ;
-(id)metadataValueForKey:(id)arg0 ;
-(id)readFromDisk;
-(id)textEncodingGuessWithData:(id)arg0 ;
-(id)textEncodingNameForData:(id)arg0 mimeType:(id)arg1 ;
-(void)cancel;
-(void)dealloc;
-(void)fetchData;
-(void)resetProgress;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)updateProgressWithCurrentBytes:(NSUInteger)arg0 ;
-(void)writeToDiskWithData:(id)arg0 ;


@end


#endif