// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXCURATEDLIBRARYFILTERTIPCONTROLLER_H
#define PXCURATEDLIBRARYFILTERTIPCONTROLLER_H

@class TPKContentController, UIViewController, TPKContent, NSString, UITraitCollection;
@protocol TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate, UIPopoverPresentationControllerDelegate, PXChangeObserver, PXCuratedLibraryFilterTipControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryGuestAssetTracker.h"

@interface PXCuratedLibraryFilterTipController : NSObject <TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate, UIPopoverPresentationControllerDelegate, PXChangeObserver>

 {
    TPKContentController *_libraryFilterTipContentController;
    UIViewController *_presentedTipViewController;
    TPKContent *_presentedContent;
    NSUInteger _presentedTipType;
    BOOL _isTipContentDelegate;
    BOOL _hasScheduledSharedLibraryFilterTip;
}


@property (nonatomic) BOOL curatedLibraryIsVisible; // ivar: _curatedLibraryIsVisible
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryFilterTipControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXCuratedLibraryGuestAssetTracker *guestAssetTracker; // ivar: _guestAssetTracker
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPresentingTipView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitAPIQueue; // ivar: _tipKitAPIQueue
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)_shouldShowFilterTipOfType:(NSUInteger)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 ;
-(NSInteger)adaptivePresentationStyleForPresentationController:(id)arg0 traitCollection:(id)arg1 ;
-(id)contentController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)initWithViewModel:(id)arg0 layout:(id)arg1 ;
-(struct CGRect )_anchorViewRect;
-(void)_cancelTimerForSharedLibraryTip;
// -(void)_dismissTipViewWithCompletion:(id)arg0 clientInitiated:(unk)arg1  ;
-(void)_donateCoreDuetSignalWithIdentifier:(id)arg0 ;
-(void)_presentSharedLibraryFilterTipIfPossible;
-(void)_presentTipViewControllerOfType:(NSUInteger)arg0 forContent:(id)arg1 ;
-(void)_sendTipActivationAnalytics;
-(void)_sendTipDismissalAnalytics;
-(void)_sendTipPresentationAnalytics;
-(void)_startTimerForSharedLibraryFilterTip;
-(void)_updateCanReceiveContent:(BOOL)arg0 ;
-(void)_updateControllerForSyndicatedAssetsTip;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)didActivateAnchorView;
-(void)didChangeFilterState:(id)arg0 ;
-(void)didLayoutAnchorView;
-(void)dismissTipViewWithCompletion:(id)arg0 ;
-(void)guestAssetsTracker:(id)arg0 canDisplayGuestAssets:(BOOL)arg1 ;
-(void)guestAssetsTracker:(id)arg0 isDisplayingGuestAssets:(BOOL)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)prepareForPopoverPresentation:(id)arg0 ;
-(void)presentationControllerDidDismiss:(id)arg0 ;
-(void)userDidChangeLibraryFilterState;


@end


#endif