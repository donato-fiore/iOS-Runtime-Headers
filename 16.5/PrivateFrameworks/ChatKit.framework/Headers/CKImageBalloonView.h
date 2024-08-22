// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKIMAGEBALLOONVIEW_H
#define CKIMAGEBALLOONVIEW_H

@class NSString, NSArray, UIImageView;
@protocol CKCustomMaskDuringPrint, CKAnimationTimerObserver;


#import "CKBalloonView.h"
#import "CKAnimatedImage.h"
#import "CKBalloonImageView.h"

@interface CKImageBalloonView : CKBalloonView <CKCustomMaskDuringPrint, CKAnimationTimerObserver>



@property (retain, nonatomic) CKAnimatedImage *animatedImage; // ivar: _animatedImage
@property (nonatomic) NSUInteger animationFrameOffset; // ivar: _animationFrameOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSArray *frames; // ivar: _frames
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *irisBadgeView; // ivar: _irisBadgeView
@property (nonatomic) BOOL isIrisAsset; // ivar: _isIrisAsset
@property (retain, nonatomic) CKBalloonImageView *outlineMask; // ivar: _outlineMask
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic) BOOL suppressMask; // ivar: _suppressMask
@property (retain, nonatomic) CKBalloonImageView *tailMask; // ivar: _tailMask


-(BOOL)needsGroupOpacity;
-(Class)invisibleInkEffectViewClass;
-(id)imageForInvisibleInkEffectView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)addFilter:(id)arg0 ;
-(void)animationTimerFired:(NSUInteger)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)clearFilters;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 ;
-(void)configureForMediaObject:(id)arg0 previewWidth:(CGFloat)arg1 orientation:(char)arg2 hasInvisibleInkEffect:(BOOL)arg3 ;
-(void)configureForMessagePart:(id)arg0 ;
-(void)configureForTranscriptPlugin:(id)arg0 ;
-(void)dealloc;
-(void)detachInvisibleInkEffectView;
-(void)didMoveToWindow;
-(void)invisibleInkEffectViewWasResumed;
-(void)invisibleInkEffectViewWasSuspended;
-(void)invisibleInkEffectViewWasUncovered;
-(void)layoutSubviews;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setCanUseOpaqueMask:(BOOL)arg0 ;
-(void)setHasTail:(BOOL)arg0 ;
-(void)updateAnimationTimerObserving;


@end


#endif