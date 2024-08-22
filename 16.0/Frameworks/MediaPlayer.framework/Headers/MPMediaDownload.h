// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPMEDIADOWNLOAD_H
#define MPMEDIADOWNLOAD_H


#import <Foundation/Foundation.h>


@interface MPMediaDownload : NSObject

@property (readonly, nonatomic) NSInteger deviceLibraryID; // ivar: _deviceLibraryID
@property (nonatomic) NSUInteger downloadPausedReason; // ivar: _downloadPausedReason
@property (nonatomic) CGFloat downloadProgress; // ivar: _downloadProgress
@property (nonatomic) NSInteger downloadReason; // ivar: _downloadReason
@property (nonatomic) NSInteger libraryID; // ivar: _libraryID
@property (readonly, nonatomic) NSInteger storeItemID; // ivar: _storeItemID
@property (nonatomic) NSInteger storeSagaID; // ivar: _storeSagaID


+(NSInteger)_downloadReasonFromStoreDownload:(id)arg0 ;
+(NSUInteger)MPMediaDownloadPauseReasonForATAsset:(id)arg0 ;
+(id)MPMediaDownloadsFromATAssets:(id)arg0 ;
+(id)MPMediaDownloadsFromMPStoreDownloads:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithATAsset:(id)arg0 ;
-(id)initWithMPStoreDownload:(id)arg0 ;


@end


#endif