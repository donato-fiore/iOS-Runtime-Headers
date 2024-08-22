// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSSESSIONPROXY_H
#define CPSSESSIONPROXY_H

@class NSURL, NSNumber, NSString;
@protocol CPSSessionProxyDelegate;

#import <Foundation/Foundation.h>

#import "CPSSessionConfiguration.h"
#import "CPSClipMetadata.h"

@interface CPSSessionProxy : NSObject {
    os_unfair_lock_s _mutableIvarLock;
    BOOL _isCheckingAppAttributionBannerCanShow;
    id *_showAppAttributionBannerCallback;
}


@property (readonly, nonatomic) CGFloat appLaunchTime; // ivar: _appLaunchTime
@property (readonly, nonatomic) NSURL *applicationIconFileURL; // ivar: _applicationIconFileURL
@property (readonly, nonatomic) NSURL *businessIconURL; // ivar: _businessIconURL
@property (retain, nonatomic) CPSSessionConfiguration *configuration; // ivar: _configuration
@property (weak, nonatomic) NSObject<CPSSessionProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSNumber *estimatedProgress; // ivar: _estimatedProgress
@property (readonly, nonatomic) NSURL *heroImageFileURL; // ivar: _heroImageFileURL
@property (readonly, nonatomic, getter=isInvokedByPhysicalCode) BOOL invokedByPhysicalCode;
@property (copy, nonatomic) NSString *launchReason; // ivar: _launchReason
@property (readonly, nonatomic) CPSClipMetadata *metadata; // ivar: _metadata
@property (nonatomic) BOOL originIsControlCenter; // ivar: _originIsControlCenter
@property (copy, nonatomic) NSString *referrerBundleID; // ivar: _referrerBundleID
@property (copy, nonatomic) NSString *sourceBundleID; // ivar: _sourceBundleID
@property (readonly, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL usedByPPT; // ivar: _usedByPPT


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithURL:(id)arg0 ;
-(void)_checkAndConsumeShowsAppAttributionBannerIfNeeded;
-(void)cancel;
-(void)checkAndConsumeShowsAppAttributionBannerWithCompletion:(id)arg0 ;
-(void)connectToService;
-(void)didDetermineAvailability:(BOOL)arg0 ;
-(void)didFinishLoadingWithError:(id)arg0 ;
-(void)didFinishTestingAtTime:(CGFloat)arg0 ;
-(void)didInstallApplicationPlaceholder;
-(void)didRetrieveApplicationIcon:(id)arg0 ;
-(void)didRetrieveBusinessIcon:(id)arg0 ;
-(void)didRetrieveHeroImage:(id)arg0 ;
-(void)didUpdateInstallProgress:(id)arg0 ;
-(void)didUpdateMetadata:(id)arg0 ;
-(void)disconnect;
-(void)fetchClipMetadataAndImages;
-(void)getLastLaunchOptionsWithCompletion:(id)arg0 ;
-(void)installClip;
-(void)notifyWebClipActivationWithBundleID:(id)arg0 referrerBundleID:(id)arg1 ;
-(void)openClipWithLaunchOptions:(id)arg0 completion:(id)arg1 ;
-(void)prewarmClip;
-(void)prewarmClipWithCompletionHandler:(id)arg0 ;
-(void)remoteServiceDidCrash;


@end


#endif