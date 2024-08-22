// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CPSSESSION_H
#define CPSSESSION_H

@class NSMutableArray, NSURL, NSError, NSString, NSNumber;
@protocol CPSInstallationControllerDelegate, OS_dispatch_queue, CPSAppInfoFetching, CPSBusinessItemFetching;

#import <Foundation/Foundation.h>

#import "CPSImageLoader.h"
#import "CPSPromise.h"
#import "CPSSessionConfiguration.h"
#import "CPSClipLaunchOptions.h"
#import "CPSClipMetadata.h"

@interface CPSSession : NSObject <CPSInstallationControllerDelegate>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_proxyObjects;
    CPSImageLoader *_imageLoader;
    NSURL *_applicationIconFileURL;
    NSURL *_heroImageFileURL;
    NSURL *_businessIconFileURL;
    NSInteger _clipAvailabilityState;
    NSInteger _installationState;
    NSInteger _metadataFetchState;
    NSError *_metadataFetchError;
    BOOL _didFetchApplicationIcon;
    id *_metadataCompletion;
    id *_applicationIconFetchCompletion;
    CPSPromise *_businessIconFetchingPromise;
}


@property (retain, nonatomic) NSObject<CPSAppInfoFetching> *appInfoFetcher; // ivar: _appInfoFetcher
@property (readonly, nonatomic) NSURL *applicationIconFileURL;
@property (retain, nonatomic) NSObject<CPSBusinessItemFetching> *businessItemFetcher; // ivar: _businessItemFetcher
@property (retain, nonatomic) CPSSessionConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSNumber *estimatedProgress; // ivar: _estimatedProgress
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) CPSClipLaunchOptions *launchOptions; // ivar: _launchOptions
@property (readonly, nonatomic) NSString *logID;
@property (readonly, nonatomic) CPSClipMetadata *metadata; // ivar: _metadata
@property (nonatomic, getter=isOpeningWebClipFromDaemon) BOOL openingWebClipFromDaemon; // ivar: _openingWebClipFromDaemon
@property (readonly, nonatomic, getter=isPurgeable) BOOL purgeable;
@property (readonly, nonatomic) BOOL registeredForTest;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url; // ivar: _url


-(BOOL)checkAndConsumeShowsAppAttributionBannerLaunchOption;
-(id)_availabilityOptions;
-(id)_retrieveInstalledApplicationIconWithAppIconURL:(id)arg0 clipBundleID:(id)arg1 ;
-(id)initWithURL:(id)arg0 usingQueue:(id)arg1 ;
-(id)initWithURL:(id)arg0 usingQueue:(id)arg1 configuration:(id)arg2 ;
-(void)_didDetermineAvailability:(BOOL)arg0 ;
-(void)_didFetchBusinessIconWithURL:(id)arg0 ;
-(void)_didFinishLoadingWithError:(id)arg0 ;
-(void)_didUpdateMetadata:(id)arg0 ;
-(void)_evictFromCache;
-(void)_fetchAppMetadataWithBundleID:(id)arg0 url:(id)arg1 accountInvocationPolicy:(id)arg2 ;
-(void)_fetchBusinessIconIfNeeded;
-(void)_fetchBusinessMetadata;
-(void)_fetchParentApplicationMetadataWithBundleID:(id)arg0 ;
-(void)_notifyObserversOfMetadataFetchResultUpdates:(id)arg0 ;
-(void)_retrieveApplicationIconWithAppIconURL:(id)arg0 clipBundleID:(id)arg1 ;
-(void)_retrieveApplicationIconWithCompletionHandler:(id)arg0 ;
-(void)_retrieveHeroImageWithHeroImageURL:(id)arg0 ;
// -(void)_retrieveImageWithURL:(id)arg0 didFetchImage:(*BOOL)arg1 fileURL:(*id)arg2 fetchCompletion:(id)arg3 proxyCompletion:(unk)arg4  ;
-(void)_updateEntryPointForWebClip:(id)arg0 ;
-(void)_updateLocationConfirmationForRecord:(id)arg0 permissionGranted:(id)arg1 ;
-(void)_updateWebClipIcon:(id)arg0 metadata:(id)arg1 ;
-(void)addRemoteObjectProxy:(id)arg0 ;
-(void)clearMetadataAndRefetch;
-(void)didCompleteTestSessionAtTime:(CGFloat)arg0 ;
-(void)fetchHeroImage;
-(void)fetchMetadataWithCompletion:(id)arg0 ;
-(void)installationController:(id)arg0 didFinishWithError:(id)arg1 ;
-(void)installationController:(id)arg0 didUpdateProgress:(CGFloat)arg1 ;
-(void)installationControllerDidInstallPlaceholder:(id)arg0 ;
-(void)installationControllerWillStartInstall:(id)arg0 ;
-(void)removeRemoteObjectProxy:(id)arg0 ;
-(void)setPreloadedMetadata:(id)arg0 ;
-(void)updateClipDataForEntryPointWithWebClip:(id)arg0 launchOptions:(id)arg1 ;


@end


#endif