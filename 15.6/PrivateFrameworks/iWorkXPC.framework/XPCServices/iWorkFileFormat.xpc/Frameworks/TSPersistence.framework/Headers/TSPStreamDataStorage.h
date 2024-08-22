// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSPSTREAMDATASTORAGE_H
#define TSPSTREAMDATASTORAGE_H

@class NSString, TSUColor;
@protocol TSPDataStorage, TSPCryptoInfo;

#import <Foundation/Foundation.h>


@interface TSPStreamDataStorage : NSObject <TSPDataStorage>



@property (readonly, nonatomic) unsigned int CRC;
@property (readonly, nonatomic) BOOL canDownload;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<TSPCryptoInfo> *decryptionInfo;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentResourceLocator;
@property (readonly, nonatomic) NSUInteger encodedLength;
@property (readonly, nonatomic) TSUColor *fallbackColor;
@property (readonly, nonatomic) NSUInteger firstUnmaterializedIndex;
@property (nonatomic) BOOL gilligan_isRemote;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isMissingData;
@property (readonly, nonatomic) BOOL isReadable;
@property (readonly, nonatomic) NSUInteger length;
@property (readonly, nonatomic) BOOL needsDownload;
@property (readonly, nonatomic) unsigned char packageIdentifier;
@property (readonly, nonatomic) NSString *packageLocator;
@property (readonly, nonatomic) CGSize pixelSize;
@property (readonly, nonatomic) BOOL readOnly;
@property (readonly, nonatomic) NSUInteger reservedLength;
@property (readonly) Class superclass;
@property (nonatomic) NSInteger uploadStatus;


-(BOOL)archiveInfoMessage:(*void)arg0 archiver:(id)arg1 packageWriter:(id)arg2 ;
-(BOOL)isInPackage:(id)arg0 ;
-(id)AVAssetWithOptions:(id)arg0 forData:(id)arg1 ;
-(id)AVAssetWithOptions:(id)arg0 usingResourceLoaderForData:(id)arg1 ;
-(id)NSDataWithOptions:(NSUInteger)arg0 ;
-(id)filenameForPreferredFilename:(id)arg0 ;
-(id)newDataCopyInputStreamProviderWithDocumentURL:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)newDataCopyReadChannelProviderWithDocumentURL:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)newDataCopyURLProviderWithDocumentURL:(id)arg0 encryptionInfo:(id)arg1 error:(*id)arg2 ;
-(id)writeData:(id)arg0 toPackageWriter:(id)arg1 infoMessage:(*void)arg2 preferredFilename:(id)arg3 shouldRemoveData:(BOOL)arg4 error:(*id)arg5 ;
-(struct CGDataProvider *)newCGDataProvider;
-(struct CGImageSource *)newCGImageSource;
-(void)performIOChannelReadWithAccessor:(id)arg0 ;


@end


#endif