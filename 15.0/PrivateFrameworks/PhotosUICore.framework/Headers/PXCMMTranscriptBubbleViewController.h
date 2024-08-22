// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXCMMTRANSCRIPTBUBBLEVIEWCONTROLLER_H
#define PXCMMTRANSCRIPTBUBBLEVIEWCONTROLLER_H

@class PHPhotoLibrary, PHFetchResult, NSString, NSError, PHMomentShare, NSURL;
@protocol PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate, PXUIImageProvider, PXCMMTranscriptBubbleTouchDelegate;


#import "PXTranscriptBubbleViewController.h"
#import "PXCMMTranscriptBubbleView.h"
#import "PXCMMTranscriptBubbleStatusView.h"
#import "PXCMMSpecManager.h"
#import "PXCMMPreviewAsset.h"
#import "PXCMMPreviewUIImageProvider.h"
#import "PXCMMStackBubbleView.h"
#import "PXMomentShareStatusPresentation.h"

@interface PXCMMTranscriptBubbleViewController : PXTranscriptBubbleViewController <PXPhotoLibraryUIChangeObserver, PXChangeObserver, PXTouchingUIGestureRecognizerDelegate>

 {
    PHPhotoLibrary *_photoLibrary;
    PHFetchResult *_backingFetchResult;
    PHFetchResult *_keyAssetFetch;
    NSInteger _saveInProgressTotal;
    PXCMMTranscriptBubbleView *_bubbleView;
    PXCMMTranscriptBubbleStatusView *_errorStatusView;
    PXCMMTranscriptBubbleStatusView *_loadingStatusView;
    id<PXUIImageProvider> *_mediaProvider;
    PXCMMSpecManager *_specManager;
    PXCMMPreviewAsset *_previewAsset;
    PXCMMPreviewUIImageProvider *_previewImageProvider;
    BOOL _readyForBubbleStateTransitions;
    BOOL _isExpungingAndRefetching;
    BOOL _triggeredForcedSync;
    BOOL _useStackBubbleView;
    PXCMMStackBubbleView *_stackBubbleView;
}


@property (nonatomic) NSInteger bubbleState; // ivar: _bubbleState
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (readonly, nonatomic) BOOL isPending; // ivar: _isPending
@property (readonly, nonatomic) BOOL isSender; // ivar: _isSender
@property (readonly, nonatomic) PHMomentShare *momentShare;
@property (retain, nonatomic) PXMomentShareStatusPresentation *momentShareStatusPresentation; // ivar: _momentShareStatusPresentation
@property (readonly) Class superclass;
@property (nonatomic) NSInteger targetState; // ivar: _targetState
@property (weak, nonatomic) NSObject<PXCMMTranscriptBubbleTouchDelegate> *touchDelegate; // ivar: _touchDelegate
@property (readonly, nonatomic) NSURL *url; // ivar: _url


+(BOOL)_isPermanentFailureURL:(id)arg0 ;
+(void)_registerPermanentFailureURL:(id)arg0 ;
-(BOOL)_canFetchAssetsFromMomentShare:(id)arg0 ;
-(BOOL)_shouldNavigateToContent;
-(BOOL)_shouldOpenCloudSettings;
-(BOOL)_shouldOpenInSafari;
-(BOOL)_shouldRetryOnTap;
-(BOOL)_shouldShowContent;
-(id)_debugStatusDescription;
-(id)_fetchKeyAssetsFromBackingCollection;
-(id)_primaryDescription;
-(id)_secondaryDescription;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithURL:(id)arg0 isSender:(BOOL)arg1 isPending:(BOOL)arg2 ;
-(struct CGSize )contentSizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )workaroundSizeForSize:(struct CGSize )arg0 ;
-(void)_acceptMomentShareIfNeeded:(id)arg0 ;
-(void)_autoAcceptMomentShareIfNeeded:(id)arg0 ;
-(void)_doubleTapGesture:(id)arg0 ;
-(void)_ensureBubbleStateTransition;
-(void)_fetchMomentShareFromNetworkURL:(id)arg0 ;
-(void)_installGestures;
-(void)_longPressGesture:(id)arg0 ;
-(void)_momentShareURL:(id)arg0 fetchDidFailWithError:(id)arg1 ;
-(void)_panGesture:(id)arg0 ;
-(void)_readyForStateTransition;
-(void)_retryMomentShareFetch;
-(void)_tapGesture:(id)arg0 ;
-(void)_triggerForcedSyncIfNeeded;
-(void)_updateBubbleState;
-(void)_updateBubbleView;
-(void)_updateContent;
-(void)_updateMomentShareStatusPresentation;
-(void)dealloc;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoLibraryDidChangeOnMainQueue:(id)arg0 ;
-(void)touchingUIGestureRecognizerWillBeginTouching:(id)arg0 ;
-(void)touchingUIGestureRecognizerWillEndTouching:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif