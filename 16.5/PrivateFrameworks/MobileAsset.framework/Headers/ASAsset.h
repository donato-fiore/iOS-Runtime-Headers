// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASASSET_H
#define ASASSET_H

@class NSDictionary, NSString, NSDate, NSURL;

#import <Foundation/Foundation.h>

#import "MAAsset.h"

@interface ASAsset : NSObject {
    NSDictionary *_attributes;
    NSString *_clientName;
    NSString *_identifier;
    MAAsset *_maAsset;
}


@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSString *clientName;
@property (readonly, nonatomic) NSDictionary *downloadOptions; // ivar: _downloadOptions
@property (readonly, nonatomic) NSDictionary *fullAttributes;
@property (nonatomic) NSInteger garbageCollectionBehavior;
@property (readonly, nonatomic) NSDate *installDate;
@property (readonly, nonatomic) NSURL *localURL;
@property (retain, nonatomic) MAAsset *maAsset; // ivar: maAsset
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (readonly, nonatomic) NSInteger state;
@property (nonatomic) BOOL userInitiatedDownload; // ivar: _userInitiatedDownload


+(BOOL)nonUserInitiatedDownloadsAllowed;
-(BOOL)cancelDownloadAndReturnError:(*id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isPresentOnDisk;
-(BOOL)pauseDownloadAndReturnError:(*id)arg0 ;
-(BOOL)purgeAndReturnError:(*id)arg0 ;
-(BOOL)requiredDiskSpaceIsAvailable:(*NSInteger)arg0 error:(*id)arg1 ;
-(BOOL)requiredDiskSpaceIsAvailableForDownloadOptions:(id)arg0 requiredBytes:(*NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)resumeDownloadAndReturnError:(*id)arg0 ;
-(NSUInteger)hash;
-(id)_getLocalAttribute:(id)arg0 ;
-(id)assetServerUrl;
-(id)description;
-(id)identifier;
-(id)initWithAssetType:(id)arg0 attributes:(id)arg1 ;
-(id)initWithMAAsset:(id)arg0 ;
-(id)systemAppServerUrl;
-(void)_downloadWithOptions:(id)arg0 shouldFireCallback:(BOOL)arg1 ;
-(void)adjustDownloadOptions:(id)arg0 completion:(id)arg1 ;
-(void)beginDownloadWithOptions:(id)arg0 ;
-(void)cancelDownload:(id)arg0 ;
-(void)pauseDownload:(id)arg0 ;
-(void)purge:(id)arg0 ;
-(void)resumeDownload:(id)arg0 ;


@end


#endif