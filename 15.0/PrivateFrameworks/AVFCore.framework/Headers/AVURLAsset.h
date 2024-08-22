// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVURLASSET_H
#define AVURLASSET_H

@class NSURL, NSString, NSArray;
@protocol AVContentKeyRecipient;


#import "AVAsset.h"
#import "AVURLAssetInternal.h"
#import "AVAssetResourceLoader.h"

@interface AVURLAsset : AVAsset <AVContentKeyRecipient>

 {
    AVURLAssetInternal *_URLAsset;
}


@property (readonly, copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) BOOL mayRequireContentKeysForMediaDataProcessing;
@property (readonly, nonatomic) AVAssetResourceLoader *resourceLoader;
@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLPathComponentOnly;
@property (readonly, nonatomic) BOOL shouldMatchDataInCacheByURLWithoutQueryComponent;
@property (readonly, nonatomic) NSArray *variants;


+(BOOL)isPlayableExtendedMIMEType:(id)arg0 ;
+(NSInteger)_preferredRepresentationForItemProviderReadableTypeIdentifier:(id)arg0 ;
+(NSInteger)_preferredRepresentationForItemProviderWritableTypeIdentifier:(id)arg0 ;
+(NSInteger)itemProviderVisibilityForRepresentationWithTypeIdentifier:(id)arg0 ;
+(id)URLAssetWithURL:(id)arg0 options:(id)arg1 ;
+(id)_UTTypes;
+(id)_avfValidationPlist;
+(id)_figFileMIMETypes;
+(id)_figFilePathExtensions;
+(id)_figFileUTIs;
+(id)_figHFSFileTypes;
+(id)_figMIMETypes;
+(id)_figStreamingMIMETypes;
+(id)_figStreamingUTIs;
+(id)_fileUTTypes;
+(id)_getFigAssetCreationOptionsFromURLAssetInitializationOptions:(id)arg0 assetLoggingIdentifier:(id)arg1 figAssetCreationFlags:(*NSUInteger)arg2 error:(*id)arg3 ;
+(id)_getFigAssetiTunesStoreContentInfoFromURLAssetiTunesStoreContentInfo:(id)arg0 ;
+(id)_initializationOptionsClasses;
+(id)_objectWithItemProviderFileURL:(id)arg0 typeIdentifier:(id)arg1 isInPlace:(BOOL)arg2 error:(*id)arg3 ;
+(id)_streamingUTTypes;
+(id)audiovisualMIMETypes;
+(id)audiovisualTypes;
+(id)instanceIdentifierMapTable;
+(id)objectWithItemProviderData:(id)arg0 typeIdentifier:(id)arg1 error:(*id)arg2 ;
+(id)readableTypeIdentifiersForItemProvider;
+(id)userInfoObjectForURLAsset:(id)arg0 ;
+(id)userInfoObjectForURLAssetInstanceIdentifier:(id)arg0 ;
+(id)writableTypeIdentifiersForItemProvider;
+(void)setUserInfoObject:(id)arg0 forURLAsset:(id)arg1 ;
-(BOOL)_attachedToExternalContentKeySession;
-(BOOL)_hasResourceLoaderDelegate;
-(BOOL)_requiresInProcessOperation;
-(BOOL)_shouldOptimizeAccessForLinearMoviePlayback;
-(Class)_classForAssetTracks;
-(Class)_classForFigAssetInspectorLoader;
-(Class)_classForTrackInspectors;
-(NSUInteger)downloadToken;
-(NSUInteger)referenceRestrictions;
-(id)SHA1Digest;
-(id)_assetInspector;
-(id)_assetInspectorLoader;
-(id)_errorForFigNotificationPayload:(struct __CFDictionary *)arg0 key:(struct __CFString *)arg1 ;
-(id)_installHandlerForNSURLSessionConfiguration:(id)arg0 queue:(id)arg1 ;
-(id)_instanceIdentifier;
-(id)_loadFileRepresentationOfTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)_managedAssetCache;
-(id)_resourceLoaderWithRemoteHandlerContext:(id)arg0 ;
-(id)assetCache;
-(id)contentKeySession;
-(id)contentKeySpecifiersEligibleForPreloading;
-(id)creationOptions;
-(id)description;
-(id)identifyingTag;
-(id)identifyingTagClass;
-(id)init;
-(id)initWithFileURL:(id)arg0 offset:(NSInteger)arg1 length:(NSInteger)arg2 options:(id)arg3 ;
-(id)initWithURL:(id)arg0 options:(id)arg1 ;
-(id)loadDataWithTypeIdentifier:(id)arg0 forItemProviderCompletionHandler:(id)arg1 ;
-(id)lyrics;
-(id)tracks;
-(int)_attachToContentKeySession:(id)arg0 failedSinceAlreadyAttachedToAnotherSession:(*BOOL)arg1 ;
-(struct OpaqueFigFormatReader *)_formatReader;
-(struct OpaqueFigPlaybackItem *)_playbackItem;
-(void)_addFigAssetNotifications;
-(void)_ensureAssetDownloadCache;
-(void)_removeFigAssetNotifications;
-(void)_removeUserInfoObject;
-(void)_setAssetInspectorLoader:(id)arg0 ;
-(void)_setUserInfoObject:(id)arg0 ;
-(void)_tracksDidChange;
-(void)cancelLoading;
-(void)dealloc;
-(void)expire;


@end


#endif