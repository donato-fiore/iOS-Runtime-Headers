// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKPASSVIEW_H
#define PKPASSVIEW_H

@class UIView, PKPassFaceViewRendererState, UITapGestureRecognizer, PKPasscodeLockManager, NSString, NSMutableArray, PKPass;
@protocol UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver, OS_dispatch_source, WLCardViewDelegate;


#import "PKPassFrontFaceView.h"
#import "PKPassColorProfile.h"

@interface PKPassView : UIView <UIGestureRecognizerDelegate, PKPassFaceViewDelegate, PKPasscodeLockManagerObserver>

 {
    PKPassFrontFaceView *_frontFace;
    PKPassColorProfile *_colorProfile;
    PKPassFaceViewRendererState *_rendererState;
    UITapGestureRecognizer *_tapRecognizer;
    NSInteger _priorContentMode;
    PKPasscodeLockManager *_passcodeLockManager;
    NSString *_suppressingIdentifier;
    BOOL _contentLoading;
    BOOL _contentLoaded;
    NSObject<OS_dispatch_source> *_contentModeUpdateTimer;
    NSMutableArray *_delayedAnimations;
    BOOL _invalidated;
}


@property (nonatomic) NSInteger contentMode; // ivar: _contentMode
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<WLCardViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL frontFaceBodyContentCreated;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isFrontFaceExpanded;
@property (nonatomic) CGFloat modalShadowVisibility; // ivar: _modalShadowVisibility
@property (nonatomic, getter=isModallyPresented) BOOL modallyPresented; // ivar: _modallyPresented
@property (readonly, retain, nonatomic) PKPass *pass; // ivar: _pass
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger suppressedContent; // ivar: _suppressedContent
@property (readonly, nonatomic) NSString *uniqueID;


-(BOOL)_visibleFaceShouldClipForCurrentViewMode:(*CGFloat)arg0 ;
-(BOOL)canShowBarcode;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(BOOL)needsAuthentication;
-(NSInteger)_frontFaceBackgroundModeForContentMode;
-(NSUInteger)_regionsForCurrentModes;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithPass:(id)arg0 ;
-(id)initWithPass:(id)arg0 content:(NSInteger)arg1 ;
-(id)initWithPass:(id)arg0 content:(NSInteger)arg1 suppressedContent:(NSUInteger)arg2 ;
-(id)initWithPass:(id)arg0 content:(NSInteger)arg1 suppressedContent:(NSUInteger)arg2 rendererState:(id)arg3 ;
-(id)item;
-(id)snapshotOfFrontFace;
-(id)snapshotOfFrontFaceWithRequestedSize:(struct CGSize )arg0 ;
-(id)snapshotViewOfVisibleFaceAfterScreenUpdates:(BOOL)arg0 ;
-(struct CGRect )frameOfVisibleFace;
-(struct CGSize )sizeOfFront;
-(struct CGSize )sizeOfFrontFace;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_applyContentMode:(BOOL)arg0 ;
-(void)_updateFrontFaceSuppressedContent;
-(void)_updateHighEndLayerShadowAnimated:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)_updateLayerShadowAnimated:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)_updateLowEndLayerShadowAnimated:(BOOL)arg0 withDelay:(CGFloat)arg1 ;
-(void)dealloc;
-(void)didAuthenticate;
-(void)didTransact;
-(void)drawFrontFaceAtSize:(struct CGSize )arg0 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)passFaceViewExpandButtonTapped:(id)arg0 ;
-(void)passcodeLockManager:(id)arg0 didReceivePasscodeSet:(BOOL)arg1 ;
-(void)presentDiff:(id)arg0 completion:(id)arg1 ;
-(void)setDimmer:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setFrontFaceExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setPaymentBarcodeData:(id)arg0 ;
-(void)tapRecognized:(id)arg0 ;
-(void)updateValidityDisplay;


@end


#endif