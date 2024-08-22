// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVAPPDOCUMENTREQUESTCONTROLLER_H
#define _TVAPPDOCUMENTREQUESTCONTROLLER_H

@class TVAppDocumentController, UIImage, NSString, IKDocumentServiceRequest, UIViewController<TVMediaController>, IKUpdateServiceRequest;
@protocol IKDocumentServiceRequestDelegate, TVTemplateFeaturesManagerDelegate, TVMediaControllerDelegate, TVMediaPlaying, IKServiceRequestDelegate, TVMediaControllerHosting, TVObserving, TVMediaPlaybackManagerDelegate, TVMediaProviding, TVShowcasing;


#import "TVTemplateFeaturesManager.h"
#import "TVMediaPlaybackManager.h"
#import "TVObservableEventController.h"
#import "TVMediaInfo.h"
#import "_TVSwipeUpMessageView.h"

@interface _TVAppDocumentRequestController : TVAppDocumentController <IKDocumentServiceRequestDelegate, TVTemplateFeaturesManagerDelegate, TVMediaControllerDelegate, TVMediaPlaying, IKServiceRequestDelegate, TVMediaControllerHosting, TVObserving, TVMediaPlaybackManagerDelegate>

 {
    ? _flags;
    ? _adrcDelegateFlags;
}


@property (readonly, nonatomic) UIImage *coverImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IKDocumentServiceRequest *documentServiceRequest; // ivar: _documentServiceRequest
@property (readonly, nonatomic) TVTemplateFeaturesManager *featuresManager; // ivar: _featuresManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPlaying;
@property (readonly, nonatomic) BOOL isUIHidden;
@property (retain, nonatomic) UIViewController<TVMediaController> *mediaController; // ivar: _mediaController
@property (retain, nonatomic) TVMediaPlaybackManager *mediaPlaybackManager; // ivar: _mediaPlaybackManager
@property (weak, nonatomic) NSObject<TVMediaProviding> *mediaProvider; // ivar: _mediaProvider
@property (retain, nonatomic) TVObservableEventController *observableEventController; // ivar: _observableEventController
@property (readonly, nonatomic) TVMediaInfo *selectedMediaInfo; // ivar: _selectedMediaInfo
@property (readonly, nonatomic) CGFloat showcaseFactor; // ivar: _showcaseFactor
@property (nonatomic) CGFloat showcaseInset; // ivar: _showcaseInset
@property (weak, nonatomic) NSObject<TVShowcasing> *showcasingController; // ivar: _showcasingController
@property (readonly) Class superclass;
@property (retain, nonatomic) _TVSwipeUpMessageView *swipeUpMessageView; // ivar: _swipeUpMessageView
@property (retain, nonatomic) IKUpdateServiceRequest *updateServiceRequest; // ivar: _updateServiceRequest


-(BOOL)automaticallyProvidesMediaController;
-(BOOL)handleEvent:(id)arg0 targetResponder:(id)arg1 viewElement:(id)arg2 extraInfo:(*id)arg3 ;
-(BOOL)tv_handleEventForDocument:(id)arg0 eventName:(id)arg1 targetResponder:(id)arg2 viewElement:(id)arg3 extraInfo:(*id)arg4 ;
-(id)_hostingFocusEnvironment;
-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 fromViewController:(id)arg1 ;
-(id)customAnimatorForNavigationControllerOperation:(NSInteger)arg0 toViewController:(id)arg1 ;
-(id)initWithAppDocument:(id)arg0 ;
-(id)initWithDocumentServiceRequest:(id)arg0 ;
-(id)initWithDocumentServiceRequest:(id)arg0 loadImmediately:(BOOL)arg1 ;
-(id)interactionPreviewControllerForViewController:(id)arg0 presentingView:(id)arg1 presentingElement:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(id)relinquishOwnership;
-(id)tv_featuresManagerForDocument:(id)arg0 ;
-(id)tv_interactionPreviewControllerForViewController:(id)arg0 presentingView:(id)arg1 presentingElement:(id)arg2 ;
-(void)_hostMediaControllerIfPossible;
-(void)_updateMediaInfo;
-(void)_updateShowcaseFactor;
-(void)addObserver:(id)arg0 forEvent:(id)arg1 ;
-(void)adoptMediaController:(id)arg0 ;
-(void)coverImageDidChangeForMediaController:(id)arg0 ;
-(void)dealloc;
-(void)didChangeDocumentContext;
-(void)didCompleteDocumentCreationWithStatus:(NSInteger)arg0 errorDictionary:(id)arg1 ;
-(void)documentDidChangeForDocumentServiceRequest:(id)arg0 ;
-(void)evaluateSwipeUpMessageForMediaPlaybackManager:(id)arg0 ;
-(void)featuresManager:(id)arg0 currentContextDidChangeForFeature:(id)arg1 ;
-(void)handleEvent:(id)arg0 sender:(id)arg1 withUserInfo:(id)arg2 ;
-(void)mediaInfoDidChange;
// -(void)mediaPlaybackManager:(id)arg0 shouldHideUI:(BOOL)arg1 animated:(BOOL)arg2 animations:(id)arg3 completion:(unk)arg4  ;
-(void)removeObserver:(id)arg0 ;
-(void)removeObserver:(id)arg0 forEvent:(id)arg1 ;
-(void)sendInitialRequestIfNeeded;
-(void)serviceRequest:(id)arg0 didCompleteWithStatus:(NSInteger)arg1 errorDictionary:(id)arg2 ;
-(void)setAppDelegate:(id)arg0 ;
-(void)shouldHideSupplementaryUI:(BOOL)arg0 animated:(BOOL)arg1 completion:(id)arg2 ;
-(void)stateDidChangeForMediaController:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)willHostTemplateViewController:(id)arg0 usesTransitions:(*BOOL)arg1 ;


@end


#endif