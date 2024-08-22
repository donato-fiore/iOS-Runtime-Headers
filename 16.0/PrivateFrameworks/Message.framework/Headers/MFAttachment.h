// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFATTACHMENT_H
#define MFATTACHMENT_H

@class NSItemProvider, NSString, EMMailDropMetadata, MFMimePart, NSURL;
@protocol EFPubliclyDescribable, MFDataConsumer;

#import <Foundation/Foundation.h>

#import "MFAttachmentManager.h"
#import "MFAttachmentPlaceholder.h"

@interface MFAttachment : NSObject <EFPubliclyDescribable>

 {
    MFAttachmentManager *_attachmentManager;
}


@property (retain, nonatomic) NSItemProvider *attachmentDataProvider; // ivar: _attachmentDataProvider
@property (copy) NSString *contentID;
@property (retain, nonatomic) NSObject<MFDataConsumer> *customConsumer; // ivar: _customConsumer
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSUInteger decodedFileSize;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *disposition; // ivar: _disposition
@property (readonly, copy, nonatomic) NSString *ef_publicDescription;
@property (nonatomic) NSUInteger encodedFileSize;
@property (retain, nonatomic) NSString *eventID;
@property (copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (copy, nonatomic) NSString *fileName;
@property (readonly) NSString *fileUTType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSString *icsRepresentation;
@property (nonatomic) CGSize imageDimensions; // ivar: _imageDimensions
@property (readonly) NSString *inferredMimeType;
@property (readonly) BOOL isAutoArchive; // ivar: _isAutoArchive
@property (readonly, nonatomic) BOOL isCalendarFile;
@property (readonly) BOOL isContainedInCompose;
@property (readonly) BOOL isContainedInRFC822;
@property (readonly) BOOL isDataAvailableLocally;
@property (readonly, nonatomic) BOOL isImageFile;
@property (readonly, nonatomic) BOOL isMediaFile;
@property BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isRFC822;
@property (readonly, nonatomic) BOOL isVideoFile;
@property (retain, nonatomic) EMMailDropMetadata *mailDropMetadata;
@property (retain, nonatomic) NSString *meetingStorePersistentID;
@property (copy, nonatomic) NSString *mimePartNumber; // ivar: _mimePartNumber
@property (copy, nonatomic) NSString *mimeType;
@property (retain, nonatomic) MFMimePart *part; // ivar: _part
@property (readonly) NSString *path;
@property (retain, nonatomic) MFAttachmentPlaceholder *placeholder; // ivar: _placeholder
@property (copy, nonatomic) NSString *remoteImageFileName;
@property (readonly) BOOL shouldAutoDownload;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL wantsCompletionBlockOffMainThread; // ivar: _wantsCompletionBlockOffMainThread


+(BOOL)isSinglePagePDF:(id)arg0 ;
-(BOOL)_isSinglePagePDFFileFetchLocalData:(BOOL)arg0 ;
-(BOOL)conformsToType:(id)arg0 ;
-(BOOL)conformsToTypeIdentifier:(id)arg0 ;
-(BOOL)contentTypeConformsToEvent;
-(BOOL)contentTypeConformsToEventICS;
-(BOOL)contentTypeConformsToEventVCS;
-(BOOL)contentTypeConformsToIWork;
-(BOOL)contentTypeConformsToMarkup;
-(BOOL)contentTypeConformsToPassbook;
-(BOOL)contentTypeConformsToProvisionment;
-(BOOL)contentTypeConformsToVCard;
-(BOOL)hasCalendarMetadata;
-(BOOL)isAvailable;
-(BOOL)isCached;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isMailDrop;
-(BOOL)isMailDropPhotoArchive;
-(BOOL)isPDFFile;
-(BOOL)isSinglePagePDFFile;
-(NSUInteger)sizeOnDisk;
-(id)_dataProvider;
-(id)_fileUTTypeForFileName:(id)arg0 ;
-(id)attachmentContentTypeForFileName:(id)arg0 ;
-(id)decodeFilterWithDataConsumer:(id)arg0 ;
-(id)fetchData;
-(id)fetchDataSynchronously:(*id)arg0 ;
-(id)fetchDataSynchronously:(*id)arg0 stripPrivateMetadata:(BOOL)arg1 ;
-(id)fetchDataToURL:(*id)arg0 ;
-(id)fetchLocalData;
-(id)fetchLocalData:(*id)arg0 stripPrivateMetadata:(BOOL)arg1 ;
-(id)fetchPlaceholderData;
-(id)fileAttributes;
-(id)fileNameByStrippingZipIfNeeded:(BOOL)arg0 ;
-(id)fileURL;
-(id)fileWrapperUsingFetchedLocalData;
-(id)filterData:(id)arg0 ;
-(id)filterICSData:(id)arg0 ;
-(id)filterVCSData:(id)arg0 ;
-(id)initWithURL:(id)arg0 attachmentManager:(id)arg1 ;
-(id)metadataValueForKey:(id)arg0 ;
-(id)newDownloadProgress;
-(id)readFromDisk;
-(id)textEncodingGuessWithData:(id)arg0 ;
-(id)textEncodingNameForData:(id)arg0 mimeType:(id)arg1 ;
-(void)setMetadataValue:(id)arg0 forKey:(id)arg1 ;
-(void)updatePath;


@end


#endif