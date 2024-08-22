// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SXFULLSCREENCAPTIONVIEW_H
#define SXFULLSCREENCAPTIONVIEW_H

@class UIView, UIVisualEffectView, NSString, UIScrollView, UISwipeGestureRecognizer, UITapGestureRecognizer;
@protocol SXAutoSizedCanvasControllerDelegate, SXStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate, SXComponentActionHandler, SXFullscreenCaptionViewDelegate, SXTextSourceFactory;


#import "SXAutoSizedCanvasController.h"
#import "SXFullscreenCaption.h"
#import "SXStandaloneTextInfo.h"
#import "SXStandaloneTextLayout.h"
#import "SXTextTangierDocumentRoot.h"
#import "SXTextSource.h"
#import "SXTextTangierStorage.h"

@interface SXFullscreenCaptionView : UIView <SXAutoSizedCanvasControllerDelegate, SXStandaloneTextLayoutDelegate, UIGestureRecognizerDelegate, UIScrollViewDelegate>



@property (readonly, nonatomic) NSObject<SXComponentActionHandler> *actionHandler; // ivar: _actionHandler
@property (retain, nonatomic) SXAutoSizedCanvasController *autoSizeCanvasController; // ivar: _autoSizeCanvasController
@property (retain, nonatomic) UIVisualEffectView *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) SXFullscreenCaption *caption; // ivar: _caption
@property (retain, nonatomic) SXStandaloneTextInfo *captionInfo; // ivar: _captionInfo
@property (retain, nonatomic) SXStandaloneTextLayout *captionLayout; // ivar: _captionLayout
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SXFullscreenCaptionViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SXTextTangierDocumentRoot *documentRoot; // ivar: _documentRoot
@property (readonly, nonatomic) BOOL expanded;
@property (readonly, nonatomic) int expansionMode; // ivar: _expansionMode
@property (nonatomic) UIEdgeInsets fullInsets; // ivar: _fullInsets
@property (nonatomic) CGSize fullSize; // ivar: _fullSize
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (retain, nonatomic) UISwipeGestureRecognizer *swipeGestureRecognizer; // ivar: _swipeGestureRecognizer
@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) CGRect temporaryLayoutRect; // ivar: _temporaryLayoutRect
@property (retain, nonatomic) SXTextSource *textSource; // ivar: _textSource
@property (readonly, nonatomic) NSObject<SXTextSourceFactory> *textSourceFactory; // ivar: _textSourceFactory
@property (retain, nonatomic) SXTextTangierStorage *textStorage; // ivar: _textStorage
@property (readonly, nonatomic) NSUInteger viewIndex; // ivar: _viewIndex


+(id)_overridePropertiesWithComponentStyle:(id)arg0 storage:(id)arg1 ;
+(void)_applyStyle:(id)arg0 toStorage:(id)arg1 ;
-(BOOL)forceFullExpandsionMode;
-(BOOL)gestureRecognizerShouldBegin:(id)arg0 ;
-(CGFloat)marginForTextLayout:(id)arg0 ;
-(CGFloat)widthForTextLayout:(id)arg0 ;
-(id)initWithTextSourceFactory:(id)arg0 actionHandler:(id)arg1 ;
-(struct CGPoint )positionForTextLayout:(id)arg0 ;
-(struct CGRect )determineFrameInSuperview:(id)arg0 ;
-(struct CGRect )frameWithSuperview:(id)arg0 size:(struct CGSize )arg1 forExpansionMode:(int)arg2 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)createBackgroundView;
-(void)createScrollView;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)handleSwipeGestureRecognizer:(id)arg0 ;
-(void)handleTapGestureRecognizer:(id)arg0 ;
-(void)initializeTangier;
-(void)layoutSubviews;
-(void)renderCaptionInTangier;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setNeedsLayout;
-(void)setupGestureRecognizers;
-(void)updateFrameAnimated:(BOOL)arg0 ;
-(void)updateWithCaption:(id)arg0 forViewIndex:(NSUInteger)arg1 animated:(BOOL)arg2 ;


@end


#endif