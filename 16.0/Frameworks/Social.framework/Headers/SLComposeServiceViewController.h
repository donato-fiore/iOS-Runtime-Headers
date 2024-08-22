// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLCOMPOSESERVICEVIEWCONTROLLER_H
#define SLCOMPOSESERVICEVIEWCONTROLLER_H

@class UIViewController, NSMutableArray, UIImage, NSNumber, UIAlertController, UIView, NSString, UITextView;
@protocol UINavigationControllerDelegate, UITextViewDelegate, SLSheetViewHostProtocol;


#import "SLSheetMasklayer.h"
#import "SLSheetPreviewImageSource.h"
#import "SLSheetContentView.h"
#import "SLSheetNavigationController.h"
#import "SLSheetRootViewController.h"

@interface SLComposeServiceViewController : UIViewController <UINavigationControllerDelegate, UITextViewDelegate>

 {
    NSObject<SLSheetViewHostProtocol> *_hostProxy;
    NSUInteger _unfulfilledItemProviderRepresentations;
    NSMutableArray *_attachments;
    UIImage *_serviceIconImage;
    NSNumber *_charactersRemaining;
    SLSheetMasklayer *_vignetteLayer;
    UIAlertController *_alertController;
    BOOL _isShowingLocationDeniedAlert;
    BOOL _isPresentingActionViewController;
    BOOL _autoCompletionViewControllerAffectsSheetSize;
    SLSheetPreviewImageSource *_previewImageSource;
    UIView *_maskView;
    BOOL _didFirstSheetActionLoad;
    BOOL _didCallPresentSheet;
    BOOL _triggerPresentationAnimationOnKeyboard;
    BOOL _hasPresentedSheet;
    BOOL _inPostButtonTapped;
    BOOL _waitingForAnimateAlongsideTransitionBlock;
    CGRect _sheetFrameStartingRotation;
    UIViewController *_viewControllerForTrackingSheetSize;
}


@property (retain, nonatomic) UIViewController *autoCompletionViewController; // ivar: _autoCompletionViewController
@property (retain, nonatomic) NSNumber *charactersRemaining;
@property (retain) NSMutableArray *constraints; // ivar: _constraints
@property (readonly, nonatomic) NSString *contentText;
@property (retain, nonatomic) SLSheetContentView *contentView; // ivar: _contentView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger maxImageAttachmentSize; // ivar: _maxImageAttachmentSize
@property (retain, nonatomic) SLSheetNavigationController *navigationController; // ivar: _navigationController
@property (copy, nonatomic) NSString *placeholder; // ivar: _placeholder
@property (nonatomic) BOOL preventSheetPositionChanges; // ivar: _preventSheetPositionChanges
@property (retain, nonatomic) SLSheetRootViewController *sheetRootViewController; // ivar: _sheetRootViewController
@property (readonly) UIView *sheetView;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressKeyboard; // ivar: _suppressKeyboard
@property (readonly, nonatomic) UITextView *textView;
@property (readonly) BOOL wasPresented; // ivar: _wasPresented


+(BOOL)_preventsAppearanceProxyCustomization;
+(BOOL)_shouldForwardViewWillTransitionToSize;
+(id)_imageAttachmentLoadDownsamplePreviewQueue;
-(BOOL)_areAttachmentsReady;
-(BOOL)isContentValid;
-(BOOL)shouldAutorotate;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(CGFloat)_sheetMinBottomMarginForVerticalSizeClass;
-(NSInteger)_previewDisplayFormat;
-(id)URLAttachments;
-(id)attachments;
-(id)configurationItems;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithServiceIconImage:(id)arg0 ;
-(id)loadPreviewView;
-(id)previewImageSource;
-(id)sheetActions;
-(id)text;
-(struct CGRect )sheetFrameForViewController:(id)arg0 ;
-(struct CGRect )sheetFrameForViewController:(id)arg0 topSpaceProportion:(CGFloat)arg1 topSpaceOffset:(CGFloat)arg2 ;
-(struct CGSize )_intrinsicSheetSize;
-(void)_addAttachment:(id)arg0 ;
-(void)_adjustContentViewIntrinsicHeightForPreviewView;
-(void)_animateCardSendFinished;
-(void)_animateSheetCancelFinished;
-(void)_animateSheetPresentationFinished;
-(void)_animateVignetteMaskFromSheetFrame:(struct CGRect )arg0 toSheetFrame:(struct CGRect )arg1 duration:(CGFloat)arg2 ;
-(void)_convertExtensionItemProvidersToAttachments:(id)arg0 ;
-(void)_downsampleImageAttachment:(id)arg0 ;
-(void)_imageAttachmentDataDidLoad:(id)arg0 ;
-(void)_loadImageAttachmentData:(id)arg0 ;
-(void)_loadPreviewView;
-(void)_performCommonInitialization:(id)arg0 ;
-(void)_positionSheetViewAnimatedForViewController:(id)arg0 ;
-(void)_positionSheetViewForViewController:(id)arg0 ;
-(void)_positionVignetteForSheetFrame:(struct CGRect )arg0 ;
-(void)_presentSheet;
-(void)_presentedViewControllerContentSizeDidChange;
-(void)_setViewControllerForTrackingSheetSize:(id)arg0 ;
-(void)_updateContentViewWithCharactersRemaining;
-(void)_willAppearInRemoteViewController;
-(void)addAttachment:(id)arg0 ;
-(void)animateCardSendOrientation:(NSInteger)arg0 ;
-(void)animateSheetCancelWithDuration:(CGFloat)arg0 ;
-(void)animateSheetPresentationWithDuration:(CGFloat)arg0 ;
-(void)cancel;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)createPreviewIfNeeded;
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)didSelectCancel;
-(void)didSelectPost;
-(void)didSendWithSuccess:(BOOL)arg0 error:(id)arg1 ;
-(void)hideKeyboardAnimated:(BOOL)arg0 ;
-(void)hideKeyboardWithAnimationTime:(CGFloat)arg0 ;
-(void)keyboardDidChange:(id)arg0 ;
-(void)keyboardWillHide:(id)arg0 ;
-(void)keyboardWillShow:(id)arg0 ;
-(void)loadView;
-(void)navigationController:(id)arg0 didShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)navigationController:(id)arg0 willShowViewController:(id)arg1 animated:(BOOL)arg2 ;
-(void)networkActivityIndicatorNotification:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)popConfigurationViewController;
-(void)positionSheetView;
-(void)postButtonTapped:(id)arg0 ;
-(void)presentSettingsAlertWithTitle:(id)arg0 message:(id)arg1 targetURL:(id)arg2 ;
-(void)presentationAnimationDidFinish;
-(void)pushActionViewController:(id)arg0 ;
-(void)pushConfigurationViewController:(id)arg0 ;
-(void)reloadConfigurationItems;
-(void)reloadSheetActions;
-(void)send;
-(void)setHostProxy:(id)arg0 ;
-(void)setPostButtonTitle:(id)arg0 ;
-(void)setServiceIconImage:(id)arg0 ;
-(void)setSheetFrame:(struct CGRect )arg0 ;
-(void)setTitle:(id)arg0 ;
-(void)shouldShowNetworkActivityIndicator:(BOOL)arg0 ;
-(void)showKeyboardAnimated:(BOOL)arg0 ;
-(void)showKeyboardWithAnimationTime:(CGFloat)arg0 ;
-(void)textViewDidChange:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateKeyboardSize;
-(void)updateSheetForVerticalSizeClass;
-(void)validateContent;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif