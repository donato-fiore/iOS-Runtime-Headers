// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSPDOCUMENTRESOURCEFILEDATASTORAGE_H
#define TSPDOCUMENTRESOURCEFILEDATASTORAGE_H

@class NSString;
@protocol TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo, TSUResourceFileURLProvider><TSUResourceRequest, TSUResourceRequest;


#import "TSPFileDataStorage.h"
#import "TSPDocumentResourceInfo.h"

@interface TSPDocumentResourceFileDataStorage : TSPFileDataStorage <TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo>

 {
    id<TSUResourceFileURLProvider><TSUResourceRequest> *_resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) TSPDocumentResourceInfo *documentResourceInfo;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<TSUResourceRequest> *resourceRequest;
@property (readonly) Class superclass;


-(BOOL)archiveInfoMessage:(*void)arg0 archiver:(id)arg1 packageWriter:(id)arg2 ;
-(BOOL)canDownload;
-(BOOL)isReadable;
-(BOOL)needsDownload;
-(NSUInteger)encodedLength;
-(NSUInteger)length;
-(id)documentResourceLocator;
-(id)downloadProgress;
-(id)fallbackColor;
-(id)fileURL;
-(id)init;
-(id)initWithResourceRequest:(id)arg0 documentResourceInfo:(id)arg1 ;
-(struct CGSize )pixelSize;
-(void)didAddDownloadObserverWithData:(id)arg0 ;
-(void)performReadWithAccessor:(id)arg0 ;


@end


#endif