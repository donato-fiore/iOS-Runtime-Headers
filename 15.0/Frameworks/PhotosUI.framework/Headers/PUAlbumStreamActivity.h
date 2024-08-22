// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUALBUMSTREAMACTIVITY_H
#define PUALBUMSTREAMACTIVITY_H

@class PXActivity, UIViewController, PXVideoTrimQueueController, NSString;
@protocol PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate, PXActivityItemSourceController, PUAlbumStreamActivityDelegate, PLUserEditableAlbumProtocol;


#import "PUPhotoStreamComposeServiceViewController.h"

@interface PUAlbumStreamActivity : PXActivity <PXPhotoStreamComposeServiceDelegate, PXVideoTrimQueueControllerDelegate>

 {
    PUPhotoStreamComposeServiceViewController *_streamComposeViewController;
    CGFloat _startTime;
    CGFloat _endTime;
    UIViewController *_presenterViewController;
    UIViewController *_activityController;
    PXVideoTrimQueueController *_trimController;
    id<PXActivityItemSourceController> *_itemSourceController;
}


@property (weak, nonatomic) NSObject<PUAlbumStreamActivityDelegate> *albumStreamDelegate; // ivar: _albumStreamDelegate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL destinationAlbumWasCreated; // ivar: _destinationAlbumWasCreated
@property (retain, nonatomic) NSObject<PLUserEditableAlbumProtocol> *destinationStreamingAlbum; // ivar: _destinationStreamingAlbum
@property (readonly) NSUInteger hash;
@property (nonatomic, setter=setPresentedFromActivityViewController:) BOOL isPresentedFromActivityViewController; // ivar: _isPresentedFromActivityViewController
@property (weak, nonatomic) UIViewController *referenceViewController; // ivar: _referenceViewController
@property (readonly) Class superclass;


+(NSInteger)activityCategory;
+(id)customExportsOutputDirectoryForAsset:(id)arg0 ;
+(id)customExportsOutputDirectoryParent;
+(void)_recordRecentInvitationRecipient:(id)arg0 displayName:(id)arg1 date:(id)arg2 ;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_sharedAlbumAllowsAdding:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)_activityBundleImageConfiguration;
-(id)_selectedVideo;
-(id)_systemImageName;
-(id)activityImage;
-(id)activityTitle;
-(id)activityType;
-(id)activityViewController;
-(id)init;
-(id)itemSourceController;
-(void)_createStreamsPickerContainerWithExisting:(BOOL)arg0 ;
-(void)_handleDismissWithSuccess:(BOOL)arg0 ;
-(void)_performPresentationOnViewController:(id)arg0 completion:(id)arg1 ;
-(void)_prepareToPost:(id)arg0 albumName:(id)arg1 recipients:(id)arg2 comments:(id)arg3 ;
-(void)_publishAssets:(id)arg0 withSharingInfos:(id)arg1 customExportsInfo:(id)arg2 andTrimmedVideoPathInfo:(id)arg3 toAlbum:(id)arg4 orCreateWithName:(id)arg5 comment:(id)arg6 invitationRecipients:(id)arg7 wantsPublicWebsite:(BOOL)arg8 completion:(id)arg9 ;
-(void)controller:(id)arg0 didCancelTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 didFinishTrimmingVideoSources:(id)arg1 ;
-(void)controller:(id)arg0 dismissViewControllerWithCompletion:(id)arg1 ;
-(void)controller:(id)arg0 presentViewController:(id)arg1 ;
-(void)photoStreamComposeService:(id)arg0 didPostComment:(id)arg1 ;
-(void)photoStreamComposeServiceDidCancel:(id)arg0 ;
-(void)prepareWithActivityItems:(id)arg0 ;
-(void)presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)setItemSourceController:(id)arg0 ;


@end


#endif