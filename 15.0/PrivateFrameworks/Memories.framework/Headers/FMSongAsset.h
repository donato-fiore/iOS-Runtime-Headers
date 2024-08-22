// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FMSONGASSET_H
#define FMSONGASSET_H

@class NSString, NSURL;

#import <Foundation/Foundation.h>


@interface FMSongAsset : NSObject {
    CGFloat _downloadProgress;
}


@property (readonly) NSString *assetID; // ivar: _assetID
@property (readonly) NSUInteger assetStatus; // ivar: _assetStatus
@property (readonly, nonatomic) NSInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSInteger contentVersion; // ivar: _contentVersion
@property (readonly) NSURL *localURL; // ivar: _localURL
@property (retain) NSString *songUID; // ivar: _songUID


-(BOOL)contentUpdateAvaliable;
-(BOOL)isCloudBacked;
-(BOOL)updateDownloadProgress:(CGFloat)arg0 ;
-(CGFloat)downloadProgress;
-(NSInteger)compatibilityVersionForAssetLocation:(NSUInteger)arg0 ;
-(NSInteger)contentVersionForAssetLocation:(NSUInteger)arg0 ;
-(id)initWithAssetID:(id)arg0 assetStatus:(NSUInteger)arg1 localURL:(id)arg2 contentVersion:(NSInteger)arg3 compatibilityVersion:(NSInteger)arg4 ;
-(void)cancelDownload;
-(void)purgeLocalCache;
-(void)requestDownload;
-(void)requestDownloadWithOptions:(id)arg0 ;


@end


#endif