// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSDOWNLOAD_H
#define SSDOWNLOAD_H

@class NSMutableDictionary, NSNumber, NSDictionary, NSArray, NSString;
@protocol SSXPCCoding;


#import "SSEntity.h"
#import "SSDownloadMetadata.h"
#import "SSDownloadStatus.h"
#import "SSXPCConnection.h"
#import "SSDownloadPolicy.h"

@interface SSDownload : SSEntity <SSXPCCoding>

 {
    NSMutableDictionary *_localAssets;
    SSDownloadMetadata *_metadata;
    NSNumber *_prioritizeAboveDownload;
    SSDownloadStatus *_status;
}


@property (readonly, getter=_XPCConnection) SSXPCConnection *_XPCConnection;
@property (readonly) NSDictionary *_localAssets;
@property (retain, nonatomic) NSArray *assets;
@property (readonly, getter=isCancelable) BOOL cancelable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *downloadIdentifier;
@property (copy) SSDownloadPolicy *downloadPolicy;
@property (readonly) NSInteger downloadSizeLimit;
@property (readonly, nonatomic, getter=isExternal) BOOL external;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) SSDownloadMetadata *metadata;
@property (readonly) NSInteger persistentIdentifier;
@property (retain, nonatomic) SSDownloadStatus *status;
@property (readonly) Class superclass;


+(NSInteger)_existsMessage;
+(NSInteger)_getExternalValuesMessage;
+(NSInteger)_getValueMessage;
+(NSInteger)_setValuesMessage;
-(BOOL)addAsset:(id)arg0 forType:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(BOOL)isEligibleForRestore:(*id)arg0 ;
-(BOOL)removeAsset:(id)arg0 ;
-(CGFloat)estimatedSecondsRemaining;
-(CGFloat)percentComplete;
-(NSInteger)bytesDownloaded;
-(NSInteger)bytesTotal;
-(id)_errorWithData:(id)arg0 ;
-(id)_errorWithXPCReply:(id)arg0 ;
-(id)_initWithLocalPropertyValues:(id)arg0 ;
-(id)_newAssetWithURL:(id)arg0 assetType:(id)arg1 ;
-(id)assetsForType:(id)arg0 ;
-(id)backgroundNetworkingJobGroupName;
-(id)copyXPCEncoding;
-(id)downloadPhaseIdentifier;
-(id)failureError;
-(id)initWithDownloadMetadata:(id)arg0 ;
-(id)initWithPersistentIdentifier:(NSInteger)arg0 ;
-(id)networkConstraints;
-(void)_addCachedExternalValues:(id)arg0 ;
-(void)_addCachedPropertyValues:(id)arg0 ;
-(void)_applyPhase:(id)arg0 toStatus:(id)arg1 ;
-(void)_resetLocalIVars;
-(void)dealloc;
-(void)handleWithDownloadHandler:(id)arg0 completionBlock:(id)arg1 ;
-(void)pause;
-(void)prioritizeAboveDownload:(id)arg0 completionBlock:(id)arg1 ;
-(void)restart;
-(void)resume;
-(void)setBackgroundNetworkingJobGroupName:(id)arg0 ;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg0 ;
-(void)setDownloadHandler:(id)arg0 completionBlock:(id)arg1 ;
-(void)setNetworkConstraints:(id)arg0 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg0 ;


@end


#endif