// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SSSOFTWAREDOWNLOAD_H
#define SSSOFTWAREDOWNLOAD_H

@class ASDJob;


#import "SSDownload.h"

@interface SSSoftwareDownload : SSDownload

@property (readonly, nonatomic) ASDJob *job; // ivar: _job


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
-(id)assetsForType:(id)arg0 ;
-(id)backgroundNetworkingJobGroupName;
-(id)downloadPhaseIdentifier;
-(id)downloadPolicy;
-(id)failureError;
-(id)initWithJob:(id)arg0 ;
-(id)initWithPersistentIdentifier:(NSInteger)arg0 ;
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