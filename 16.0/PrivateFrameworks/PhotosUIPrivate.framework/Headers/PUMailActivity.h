// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUMAILACTIVITY_H
#define PUMAILACTIVITY_H

@class UIMailActivity, UIViewController, PHAsset, MFMailComposeViewController, PLUIEditVideoViewController, PLProgressView, PLVideoRemaker, NSString;
@protocol MFMailComposeViewControllerDelegate, PLVideoRemakerDelegate, PXMomentShareSuggestionHandlingActivity, PXActivityItemSourceController;



@interface PUMailActivity : UIMailActivity <MFMailComposeViewControllerDelegate, PLVideoRemakerDelegate, PXMomentShareSuggestionHandlingActivity>

 {
    UIViewController *_referenceViewController;
    PHAsset *_videoAssetBeingTrimmed;
    MFMailComposeViewController *_mailComposeController;
    PLUIEditVideoViewController *_editVideoViewController;
    PLProgressView *_remakerProgressView;
    PLVideoRemaker *_videoRemaker;
    id *_remakerCompletionHandler;
    id *_strongSelf;
    BOOL _isSharingSingleVideo;
    BOOL _didCheckMailDropAvailable;
    BOOL _isMailDropAvailable;
    BOOL _canSendMailInNewScene;
    BOOL _didFallbackToPresentComposeControllerModally;
}


@property (nonatomic, setter=_setRemakerWasCancelled:) BOOL _remakerWasCancelled; // ivar: __remakerWasCancelled
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<PXActivityItemSourceController> *itemSourceController; // ivar: _itemSourceController
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *transcodedVideoFilePath; // ivar: _transcodedVideoFilePath


+(BOOL)allowedToModifyEmailAccounts;
+(BOOL)canPerformActivityAsIndividualItemsInSourceController:(id)arg0 ;
+(BOOL)canPerformActivityWithTotalCount:(NSUInteger)arg0 assetMediaTypeCount:(struct PXAssetMediaTypeCount )arg1 ;
+(BOOL)isMailDropEnabled;
+(id)_expirationStringForMomentShare:(id)arg0 ;
+(id)_momentShareLinkActivityItemsForURL:(id)arg0 momentShare:(id)arg1 ;
+(id)_momentShareLinkPrompt;
+(id)_momentShareLinkSubjectForMomentShare:(id)arg0 ;
+(id)_momentShareLinkTitleForMomentShare:(id)arg0 ;
+(void)openEmailAccountPrefs;
-(BOOL)_canPerformForIndividualAssetsWithActivityItems:(id)arg0 ;
-(BOOL)_canPerformWithLink;
-(BOOL)_dismissActivityFromViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_isMailDropEnabled;
-(BOOL)_momentShareLinkDidFail;
-(BOOL)_presentActivityOnViewController:(id)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(BOOL)_showTrimViewControllerIfNeededForVideoAsset:(id)arg0 ;
-(BOOL)canPerformWithActivityItems:(id)arg0 ;
-(id)activityViewController;
-(id)init;
-(id)mailComposeViewController;
-(void)_cleanupRemaker;
-(void)_composeMailForVideo:(id)arg0 trimmedFilePath:(id)arg1 ;
-(void)_prepareWithMomentShareLink:(id)arg0 ;
-(void)_pu_cleanup;
-(void)_remakeAndSendVideoAsset:(id)arg0 withTrimStartTime:(CGFloat)arg1 endTime:(CGFloat)arg2 ;
-(void)_removeTempVideoRemakerFile;
-(void)_showTrimViewControllerForVideo:(id)arg0 maximumTrimDuration:(CGFloat)arg1 trimButtonTitle:(id)arg2 ;
-(void)_transcodeAndSendVideo:(id)arg0 ;
-(void)activityDidFinish:(BOOL)arg0 ;
-(void)cancelRemaking;
-(void)dealloc;
-(void)editVideoViewController:(id)arg0 didTrimVideoWithOptions:(id)arg1 ;
-(void)editVideoViewControllerDidCancel:(id)arg0 ;
-(void)mailComposeController:(id)arg0 didFinishWithResult:(NSInteger)arg1 error:(id)arg2 ;
-(void)performActivity;
-(void)prepareWithActivityItems:(id)arg0 ;
// -(void)remakeVideoAsset:(id)arg0 withTrimStartTime:(CGFloat)arg1 endTime:(CGFloat)arg2 progressHandler:(id)arg3 completionHandler:(unk)arg4  ;
-(void)videoRemakerDidBeginRemaking:(id)arg0 ;
-(void)videoRemakerDidEndRemaking:(id)arg0 temporaryPath:(id)arg1 ;


@end


#endif