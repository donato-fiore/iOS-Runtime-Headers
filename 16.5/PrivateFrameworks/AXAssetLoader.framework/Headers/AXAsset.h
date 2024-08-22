// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXASSET_H
#define AXASSET_H

@class NSNumber, NSString, NSURL, MAAsset, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AXImageCaptionModel.h"

@interface AXAsset : NSObject <NSSecureCoding>

 {
    NSNumber *_cachedComputedOnDiskSize;
    BOOL _didAttachProgressHandler;
}


@property (readonly, nonatomic) NSString *assetId; // ivar: _assetId
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (readonly, nonatomic) NSString *characterVoiceLanguage;
@property (readonly, nonatomic) NSString *characterVoiceName;
@property (readonly, nonatomic) NSUInteger compatibilityVersion; // ivar: _compatibilityVersion
@property (readonly, nonatomic) NSNumber *computedOnDiskSize;
@property (readonly, nonatomic) NSUInteger contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) NSNumber *downloadSize;
@property (readonly, nonatomic) NSUInteger formatVersion; // ivar: _formatVersion
@property (readonly, nonatomic) AXImageCaptionModel *imageCaptionModel;
@property (readonly, nonatomic) BOOL isDownloading; // ivar: _isDownloading
@property (readonly, nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (readonly, nonatomic) BOOL isUsingSoundPrint;
@property (retain, nonatomic) NSURL *localCopyURL; // ivar: _localCopyURL
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) MAAsset *maAsset; // ivar: _maAsset
@property (retain, nonatomic) NSURL *originalURL; // ivar: _originalURL
@property (readonly, nonatomic) NSDictionary *properties; // ivar: _properties
@property (readonly, nonatomic) NSString *ultronModelName;
@property (readonly, nonatomic) NSNumber *unarchivedFileSize;


+(BOOL)supportsSecureCoding;
+(id)archivedAssets:(id)arg0 error:(*id)arg1 ;
+(id)assetsFromMAAssets:(id)arg0 ;
+(id)downloadableAssets:(id)arg0 ;
+(id)installedAssets:(id)arg0 ;
+(id)newsestCompatibleImageCaptionModelAssetFromAssets:(id)arg0 withStage:(id)arg1 language:(id)arg2 isInstalled:(BOOL)arg3 isDownloadable:(BOOL)arg4 ;
+(id)unarchivedAssets:(id)arg0 error:(*id)arg1 ;
-(BOOL)assetStateIsInstalled:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEquivalentToMAAsset:(id)arg0 ;
-(BOOL)isOlderThanAsset:(id)arg0 ;
-(id)assertionForVersionLockedImageCaptionModelAsset:(id)arg0 ;
-(id)assetInfoDictionary;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMAAsset:(id)arg0 ;
-(void)attachProgressHandlerIfNeeded:(id)arg0 ;
-(void)copyLocally;
-(void)encodeWithCoder:(id)arg0 ;
-(void)refreshMAAsset;


@end


#endif