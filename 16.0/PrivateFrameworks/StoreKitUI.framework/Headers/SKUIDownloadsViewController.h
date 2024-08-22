// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIDOWNLOADSVIEWCONTROLLER_H
#define SKUIDOWNLOADSVIEWCONTROLLER_H

@class SSDownloadManager, NSMutableDictionary, NSCache, UIImage, NSString, NSArray;
@protocol SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate;


#import "SKUIViewController.h"
#import "SKUIImageDataConsumer.h"
#import "SKUIIPhoneDownloadsViewController.h"
#import "SKUIIPadDownloadsViewController.h"

@interface SKUIDownloadsViewController : SKUIViewController <SSDownloadManagerObserver, SKUIDownloadsChildViewControllerDelegate>

 {
    SKUIImageDataConsumer *_consumer;
    SSDownloadManager *_downloadManager;
    NSMutableDictionary *_imageOperations;
    NSCache *_images;
    SKUIIPhoneDownloadsViewController *_iphoneViewController;
    SKUIIPadDownloadsViewController *_ipadViewController;
    UIImage *_nullImage;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSArray *downloads; // ivar: _downloads
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)_sizeClassForSize:(struct CGSize )arg0 ;
-(id)childViewController:(id)arg0 artworkForDownload:(id)arg1 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)_reloadBadge;
-(void)_reloadManagerFromServer;
-(void)_reloadView;
-(void)_reloadViewControllerWithSize:(struct CGSize )arg0 ;
-(void)_setArtwork:(id)arg0 forURLString:(id)arg1 ;
-(void)childViewController:(id)arg0 performActionForDownload:(id)arg1 ;
-(void)childViewController:(id)arg0 removeDownloads:(id)arg1 ;
-(void)dealloc;
-(void)downloadManager:(id)arg0 downloadStatesDidChange:(id)arg1 ;
-(void)downloadManagerDownloadsDidChange:(id)arg0 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;


@end


#endif