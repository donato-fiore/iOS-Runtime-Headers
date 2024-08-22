// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPASSFACEVIEW_H
#define PKPASSFACEVIEW_H

@class PKPass, NSMutableSet, UIView, UIImageView, UIImage, CAFilter, NSMutableArray, PKRemoveableAnimationTrackerStore, PKPaymentService, NSArray, NSString, NSData, PKPassFaceViewRendererState;
@protocol PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver, PKPassFaceViewDelegate;


#import "WLEasyToHitCustomView.h"
#import "PKPassColorProfile.h"
#import "PKLiveRenderedCardFaceView.h"
#import "PKTransactionDataOverlayCardFaceView.h"
#import "PKDynamicLayerView.h"
#import "PKPassFaceTemplate.h"
#import "PKPassBucketTemplate.h"

@interface PKPassFaceView : WLEasyToHitCustomView <PKPaymentServiceDelegate, PKForegroundActiveArbiterObserver>

 {
    PKPass *_pass;
    PKPassColorProfile *_colorProfile;
    NSMutableSet *_headerInvariantViews;
    NSMutableSet *_bodyInvariantViews;
    NSMutableSet *_headerContentViews;
    NSMutableSet *_bodyContentViews;
    ? _flags;
    UIView *_contentView;
    UIImageView *_backgroundPlaceholderView;
    UIImageView *_shadowBackgroundView;
    UIImage *_placeholderFaceImage;
    UIImage *_faceImage;
    UIImage *_faceShadowImage;
    UIImage *_partialFaceImage;
    CAFilter *_dimmingFilter;
    CGFloat _dimmer;
    NSMutableArray *_bodyBucketViews;
    PKRemoveableAnimationTrackerStore *_delayedAnimations;
    PKLiveRenderedCardFaceView *_liveBackgroundView;
    PKTransactionDataOverlayCardFaceView *_transactionDataOverlayView;
    PKDynamicLayerView *_dynamicCardView;
    NSUInteger _contentViewCreatedRegions;
    NSUInteger _invariantViewCreatedRegions;
    BOOL _foregroundActive;
    PKPaymentService *_paymentService;
    BOOL _paused;
}


@property (nonatomic) NSInteger backgroundMode; // ivar: _backgroundMode
@property (readonly, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) BOOL bodyContentCreated;
@property (readonly, nonatomic) NSArray *buckets; // ivar: _buckets
@property (nonatomic) CGFloat clippedContentHeight; // ivar: _clippedContentHeight
@property (nonatomic) BOOL clipsContent; // ivar: _clipsContent
@property (readonly, nonatomic) CGSize cobrandLogoSize; // ivar: _cobrandLogoSize
@property (readonly, nonatomic) PKPassColorProfile *colorProfile;
@property (readonly, nonatomic) CGRect contentBounds;
@property (readonly, nonatomic) CGSize contentSize;
@property (readonly, nonatomic) UIView *contentView;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPassFaceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSData *dynamicBarcodeData; // ivar: _dynamicBarcodeData
@property (readonly, nonatomic) PKPassFaceTemplate *faceTemplate; // ivar: _faceTemplate
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PKPassBucketTemplate *headerBucketTemplate; // ivar: _headerBucketTemplate
@property (retain, nonatomic) NSMutableArray *headerBucketViews; // ivar: _headerBucketViews
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // ivar: _invalidated
@property (nonatomic) BOOL liveMotionEnabled; // ivar: _liveMotionEnabled
@property (nonatomic) BOOL modallyPresented; // ivar: _modallyPresented
@property (readonly, nonatomic) PKPass *pass;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic) PKPassFaceViewRendererState *rendererState;
@property (readonly, nonatomic) UIEdgeInsets shadowInsets;
@property (nonatomic) BOOL showsLiveRendering;
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (readonly) Class superclass;
@property (nonatomic) BOOL viewExpanded; // ivar: _viewExpanded
@property (nonatomic) NSUInteger visibleRegions; // ivar: _visibleRegions


+(Class)_faceClassForStyle:(NSInteger)arg0 ;
+(id)newFrontFaceViewForStyle:(NSInteger)arg0 ;
-(id)_relevantBuckets;
-(id)_viewSetForContentViewType:(NSInteger)arg0 ;
-(id)headerTemplate;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct UIEdgeInsets )alignmentRectInsets;
-(struct UIEdgeInsets )shadowBackgroundInsets;
-(void)_createBucketsIfNecessary;
-(void)_createContentViewsForRegions:(NSUInteger)arg0 ;
-(void)_createDimmingFilterIfNecessary;
-(void)_createInvariantViewsForRegions:(NSUInteger)arg0 ;
-(void)_flushContentViewsForRegions:(NSUInteger)arg0 ;
-(void)_handleTimeOrLocaleChange:(id)arg0 ;
-(void)_loadFaceImageIfNecessary;
-(void)_presentDiffRecursivelyDiff:(id)arg0 forBucketAtIndex:(NSUInteger)arg1 withBuckets:(id)arg2 completion:(id)arg3 ;
-(void)_recreateFieldDerivedContent;
-(void)_setBalances:(id)arg0 ;
-(void)_setShowsBackgroundView:(BOOL)arg0 ;
-(void)_setShowsBodyViews:(BOOL)arg0 ;
-(void)_setShowsHeaderViews:(BOOL)arg0 ;
-(void)_updateEffectiveShowsBackgroundView;
-(void)_updateForeignBalances;
-(void)createBodyContentViews;
-(void)createBodyInvariantViews;
-(void)createContentViewsWithFade:(BOOL)arg0 ;
-(void)createHeaderContentViews;
-(void)createHeaderInvariantViews;
-(void)dealloc;
-(void)didAuthenticate;
-(void)didDismiss;
-(void)didInvalidate;
-(void)didPresent;
-(void)didTransact;
-(void)foregroundActiveArbiter:(id)arg0 didUpdateForegroundActiveState:(struct ? )arg1 ;
-(void)insertContentView:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)invalidate;
-(void)layoutSubviews;
-(void)paymentPassWithUniqueIdentifier:(id)arg0 didReceiveBalanceUpdate:(id)arg1 ;
-(void)presentDiff:(id)arg0 completion:(id)arg1 ;
-(void)removeContentView:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)setDimmer:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)updateShadow:(CGFloat)arg0 animated:(BOOL)arg1 withDelay:(CGFloat)arg2 ;


@end


#endif