// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSPDOCUMENTRESOURCEDATAASSETSTORAGE_H
#define TSPDOCUMENTRESOURCEDATAASSETSTORAGE_H

@class TSUOnce, NSDataAsset, NSString;
@protocol TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo, TSPDocumentResourceBundleProvider><TSUResourceRequest, TSUResourceRequest;


#import "TSPStreamDataStorage.h"
#import "TSPDocumentResourceInfo.h"

@interface TSPDocumentResourceDataAssetStorage : TSPStreamDataStorage <TSPDataStorageDownloadable, TSPDocumentResourceDataStorageInfo>

 {
    id<TSPDocumentResourceBundleProvider><TSUResourceRequest> *_resourceRequest;
    TSPDocumentResourceInfo *_documentResourceInfo;
    TSUOnce *_dataAssetOnceToken;
    NSDataAsset *_dataAsset;
}


@property (readonly, nonatomic) NSDataAsset *dataAsset;
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
-(NSUInteger)materializedLength;
-(id)NSDataWithOptions:(NSUInteger)arg0 ;
-(id)documentResourceLocator;
-(id)fallbackColor;
-(id)init;
-(id)initWithResourceRequest:(id)arg0 documentResourceInfo:(id)arg1 ;
-(struct CGSize )pixelSize;
-(void)didAddDownloadObserverWithData:(id)arg0 ;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;


@end


#endif