// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXCURATEDLIBRARYFILTERTIPCONTROLLER_H
#define PXCURATEDLIBRARYFILTERTIPCONTROLLER_H

@class TPKContentController, TPKContentPopoverViewController, TPKContent, NSString, UITraitCollection;
@protocol TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate, PXCuratedLibraryFilterTipControllerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "PXCuratedLibraryGuestAssetTracker.h"

@interface PXCuratedLibraryFilterTipController : NSObject <TPKContentControllerDelegate, PXCuratedLibraryGuestAssetTrackerDelegate>

 {
    TPKContentController *_libraryFilterTipContentController;
    TPKContentPopoverViewController *_libraryFilterTipContentViewController;
    TPKContent *_presentedContent;
    BOOL _isTipContentDelegate;
}


@property (nonatomic) BOOL canPresentTip; // ivar: _canPresentTip
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXCuratedLibraryFilterTipControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PXCuratedLibraryGuestAssetTracker *guestAssetTracker; // ivar: _guestAssetTracker
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isPresentingTipView;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *tipKitAPIQueue; // ivar: _tipKitAPIQueue
@property (copy, nonatomic) UITraitCollection *traitCollection; // ivar: _traitCollection


-(BOOL)_shouldShowFilterTip;
-(id)contentController:(id)arg0 clientContextMapForKeys:(id)arg1 ;
-(id)contentController:(id)arg0 contentView:(id)arg1 iconForCustomizationID:(NSInteger)arg2 ;
-(id)initWithViewModel:(id)arg0 layout:(id)arg1 ;
-(struct CGRect )_anchorViewRect;
// -(void)_dismissTipViewWithCompletion:(id)arg0 clientInitiated:(unk)arg1  ;
-(void)_donateCoreDuetSignalWithIdentifier:(id)arg0 ;
-(void)_presentTipForContent:(id)arg0 ;
-(void)_setupMockFilterTipController;
-(void)_updateCanReceiveContent:(BOOL)arg0 ;
-(void)_updateController;
-(void)contentController:(id)arg0 contentDidBecomeAvailable:(id)arg1 animated:(BOOL)arg2 ;
-(void)contentController:(id)arg0 didFinishWithContent:(id)arg1 animated:(BOOL)arg2 ;
-(void)didActivateAnchorView;
-(void)didChangeFilterState:(id)arg0 ;
-(void)didLayoutAnchorView;
-(void)dismissTipViewWithCompletion:(id)arg0 ;
-(void)guestAssetsTracker:(id)arg0 canDisplayGuestAssets:(BOOL)arg1 ;
-(void)guestAssetsTracker:(id)arg0 isDisplayingGuestAssets:(BOOL)arg1 ;


@end


#endif