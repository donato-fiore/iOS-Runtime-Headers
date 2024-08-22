// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSBOOKDOWNLOAD_H
#define SSBOOKDOWNLOAD_H

@class NSString;
@protocol SSBookDownloadQueue, SSBookDownloadStatus;


#import "SSDownload.h"

@interface SSBookDownload : SSDownload {
    id<SSBookDownloadQueue> *_downloadQueue;
}


@property (readonly, nonatomic) NSString *downloadID;
@property (retain, nonatomic) NSString *downloadPhaseIdentifierOverride; // ivar: _downloadPhaseIdentifierOverride
@property (readonly, nonatomic) NSObject<SSBookDownloadStatus> *downloadStatus; // ivar: _downloadStatus


-(BOOL)addAsset:(id)arg0 forType:(id)arg1 ;
-(BOOL)isBackgroundNetworkingUserInitiated;
-(BOOL)isCancelable;
-(BOOL)isEligibleForRestore:(*id)arg0 ;
-(BOOL)removeAsset:(id)arg0 ;
-(CGFloat)estimatedSecondsRemaining;
-(CGFloat)percentComplete;
-(NSInteger)bytesDownloaded;
-(NSInteger)bytesTotal;
-(NSInteger)downloadSizeLimit;
-(NSInteger)persistentIdentifier;
-(id)assetsForType:(id)arg0 ;
-(id)backgroundNetworkingJobGroupName;
-(id)downloadPhaseIdentifier;
-(id)downloadPolicy;
-(id)initWithDownloadStatus:(id)arg0 ;
-(id)metadata;
-(id)networkConstraints;
-(id)status;
-(id)valueForProperty:(id)arg0 ;
-(void)_becomeManagedOnConnection:(id)arg0 ;
-(void)pause;
-(void)prioritizeAboveDownload:(id)arg0 completionBlock:(id)arg1 ;
-(void)restart;
-(void)resume;
-(void)setBackgroundNetworkingJobGroupName:(id)arg0 ;
-(void)setBackgroundNetworkingUserInitiated:(BOOL)arg0 ;
-(void)setDownloadHandler:(id)arg0 completionBlock:(id)arg1 ;
-(void)setDownloadPolicy:(id)arg0 ;
-(void)setMetadata:(id)arg0 ;
-(void)setNetworkConstraints:(id)arg0 ;
-(void)setStatus:(id)arg0 ;
-(void)setValuesWithStoreDownloadMetadata:(id)arg0 ;


@end


#endif