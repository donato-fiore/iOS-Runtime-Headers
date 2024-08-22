// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBALLOONVIEW_H
#define CKBALLOONVIEW_H

@class CABackdropLayer, NSString, UITapGestureRecognizer, NSMutableArray, UIImage, UILongPressGestureRecognizer, UIImageView, UIColor;
@protocol CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate, CKBalloonViewDelegate;


#import "CKBalloonImageView.h"
#import "CKManualUpdater.h"
#import "CKInvisibleInkEffectController.h"

@interface CKBalloonView : CKBalloonImageView <CKInvisibleInkEffectHostView, UIGestureRecognizerDelegate>



@property (nonatomic) BOOL animationPaused; // ivar: _animationPaused
@property (retain, nonatomic) CABackdropLayer *backdropFilterLayer; // ivar: _backdropFilterLayer
@property (nonatomic) NSUInteger balloonCorners; // ivar: _balloonCorners
@property (nonatomic) CKBalloonDescriptor_t balloonDescriptor;
@property (nonatomic) char balloonShape; // ivar: _balloonShape
@property (nonatomic) char balloonStyle; // ivar: _balloonStyle
@property (nonatomic) char balloonTailShape; // ivar: _balloonTailShape
@property (nonatomic) BOOL canUseOpaqueMask; // ivar: _canUseOpaqueMask
@property (nonatomic) char color; // ivar: _color
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CKBalloonViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CKManualUpdater *displayUpdater; // ivar: _displayUpdater
@property (retain, nonatomic) UITapGestureRecognizer *doubleTapGestureRecognizer; // ivar: _doubleTapGestureRecognizer
@property (retain, nonatomic) NSMutableArray *filters; // ivar: _filters
@property (nonatomic) BOOL hasOverlay; // ivar: _hasOverlay
@property (nonatomic) BOOL hasTail; // ivar: _hasTail
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UIImage *imageForInvisibleInkEffectView;
@property (retain, nonatomic) CKInvisibleInkEffectController *invisibleInkEffectController; // ivar: _invisibleInkEffectController
@property (nonatomic) BOOL invisibleInkEffectEnabled;
@property (nonatomic) BOOL invisibleInkEffectPaused; // ivar: _invisibleInkEffectPaused
@property (readonly, nonatomic) Class invisibleInkEffectViewClass;
@property (retain, nonatomic) UILongPressGestureRecognizer *longPressGestureRecognizer; // ivar: _longPressGestureRecognizer
@property (readonly, nonatomic) BOOL needsGroupOpacity;
@property (nonatomic) char orientation; // ivar: _orientation
@property (retain, nonatomic) UIImageView *overlay; // ivar: _overlay
@property (readonly, nonatomic) UIColor *overlayColor;
@property (readonly, nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic, getter=isShowingMenu) BOOL showingMenu; // ivar: _showingMenu
@property (nonatomic) char strokeColor; // ivar: _strokeColor
@property (readonly) Class superclass;
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) UIEdgeInsets textAlignmentInsets; // ivar: _textAlignmentInsets
@property (nonatomic) BOOL useLargeAsset; // ivar: _useLargeAsset
@property (nonatomic) NSInteger userInterfaceLevel; // ivar: _userInterfaceLevel
@property (nonatomic) NSInteger userInterfaceStyle; // ivar: _userInterfaceStyle
@property (nonatomic) BOOL wantsMultilineMask; // ivar: _wantsMultilineMask
@property (nonatomic) BOOL wantsSkinnyMask; // ivar: _wantsSkinnyMask


-(BOOL)__im_ff_commSafetyUIEnabled;
-(id)createOverlayImageView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_dismissOverlay;
-(void)addFilter:(id)arg0 ;
-(void)addOverlaySubview:(id)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)clearFilters;
-(void)configureForChatItem:(id)arg0 ;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)cullSubviewsWithVisibleBounds:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)detachInvisibleInkEffectView;
-(void)doubleTapGestureRecognized:(id)arg0 ;
-(void)invisibleInkEffectViewWasResumed;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasUncovered;
-(void)layoutSublayersOfLayer:(id)arg0 ;
-(void)layoutSubviews;
-(void)longPressGestureRecognized:(id)arg0 ;
-(void)performTranscriptHideAnimation:(id)arg0 ;
-(void)performTranscriptInsertionAnimation:(id)arg0 ;
-(void)performTranscriptReloadAnimation:(id)arg0 ;
-(void)performTranscriptRemovalAnimation:(id)arg0 ;
-(void)performTranscriptRevealAnimation:(id)arg0 ;
-(void)prepareForAcknowledgementDismissal;
-(void)prepareForAcknowledgementDisplay;
-(void)prepareForDisplay;
-(void)prepareForDisplayIfNeeded;
-(void)prepareForReuse;
-(void)setNeedsPrepareForDisplay;
-(void)tapGestureRecognized:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBalloonForTraitCollection:(id)arg0 ;
-(void)updateRasterizationForInvisibleInkEffect;


@end


#endif