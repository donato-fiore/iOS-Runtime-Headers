// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SSDOWNLOADASSET_H
#define SSDOWNLOADASSET_H

@class NSURLRequest, NSString, NSArray;


#import "SSEntity.h"
#import "SSURLRequestProperties.h"

@interface SSDownloadAsset : SSEntity {
    NSInteger _assetType;
    SSURLRequestProperties *_localProperties;
}


@property (readonly, retain) NSURLRequest *URLRequest;
@property (readonly) SSURLRequestProperties *URLRequestProperties;
@property (readonly) SSURLRequestProperties *_localProperties;
@property (readonly) NSString *downloadFileName;
@property (readonly) NSString *downloadPath;
@property (readonly, getter=isExternal) BOOL external;
@property (readonly) NSInteger fileSize;
@property (readonly) NSString *finalizedPath;
@property (readonly) NSArray *sinfs;


+(NSInteger)_existsMessage;
+(NSInteger)_getExternalValuesMessage;
+(NSInteger)_getValueMessage;
+(NSInteger)_setValuesMessage;
+(id)assetWithURL:(id)arg0 type:(NSInteger)arg1 ;
-(NSInteger)_legacyAssetType;
-(NSInteger)assetType;
-(NSInteger)bytesDownloaded;
-(NSInteger)bytesUploadTotal;
-(NSInteger)bytesUploaded;
-(id)copyXPCEncoding;
-(id)initWithURLRequest:(id)arg0 ;
-(id)initWithURLRequest:(id)arg0 type:(NSInteger)arg1 ;
-(id)initWithURLRequestProperties:(id)arg0 ;
-(void)_resetLocalIVars;
-(void)dealloc;


@end


#endif