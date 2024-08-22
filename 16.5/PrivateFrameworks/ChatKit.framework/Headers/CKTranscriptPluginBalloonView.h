// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKTRANSCRIPTPLUGINBALLOONVIEW_H
#define CKTRANSCRIPTPLUGINBALLOONVIEW_H

@class IMBalloonPluginDataSource, NSString, UIView, UIView<CKTranscriptPluginView>, UIViewController;
@protocol CKCustomMaskDuringPrint, CKTranscriptPluginViewDelegate;


#import "CKBalloonView.h"
#import "CKBalloonImageView.h"
#import "CKInteractiveBalloonImageView.h"

@interface CKTranscriptPluginBalloonView : CKBalloonView <CKCustomMaskDuringPrint, CKTranscriptPluginViewDelegate>

 {
    NSInteger _userInterfaceStyle;
    NSInteger _userInterfaceLevel;
}


@property (retain, nonatomic) IMBalloonPluginDataSource *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isInteractive; // ivar: _isInteractive
@property (nonatomic) BOOL isSyndicationOnboarding; // ivar: _isSyndicationOnboarding
@property (readonly, nonatomic) CGRect maskFrame;
@property (nonatomic) BOOL mayReparentPluginViews; // ivar: _mayReparentPluginViews
@property (retain, nonatomic) CKBalloonImageView *outlineMask; // ivar: _outlineMask
@property (retain, nonatomic) UIView *pluginSnapshotView; // ivar: _pluginSnapshotView
@property (retain, nonatomic) UIView *pluginSnapshotViewForThrowAnimation; // ivar: _pluginSnapshotViewForThrowAnimation
@property (retain, nonatomic) UIView<CKTranscriptPluginView> *pluginView; // ivar: _pluginView
@property (weak, nonatomic) UIViewController *pluginViewController; // ivar: _pluginViewController
@property (readonly, nonatomic) BOOL shouldMaskWhenOpaque;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressMask;
@property (nonatomic) BOOL suppressMask; // ivar: _suppressMask
@property (retain, nonatomic) CKInteractiveBalloonImageView *tailMask; // ivar: _tailMask


-(BOOL)canUseOpaqueMask;
-(BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1 ;
-(Class)invisibleInkEffectViewClass;
-(NSInteger)userInterfaceLevel;
-(NSInteger)userInterfaceStyle;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)imageForInvisibleInkEffectView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)overlayColor;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 textAlignmentInsets:(struct UIEdgeInsets *)arg1 ;
-(void)_pluginViewReadyForSnapshot:(id)arg0 ;
-(void)_reparentCurrentPluginView;
-(void)_setAndAddPluginViewAsSubview:(id)arg0 ;
-(void)addFilter:(id)arg0 ;
-(void)attachInvisibleInkEffectView;
-(void)clearFilters;
-(void)configureForComposition:(id)arg0 ;
-(void)configureForTranscriptPlugin:(id)arg0 context:(id)arg1 ;
-(void)detachInvisibleInkEffectView;
-(void)invisibleInkEffectViewWasUncovered;
-(void)layoutSubviews;
-(void)pluginViewRequestsPresentationAction:(id)arg0 ;
-(void)prepareForDisplay;
-(void)prepareForReuse;
-(void)setCanUseOpaqueMask:(BOOL)arg0 ;
-(void)setUserInterfaceLevel:(NSInteger)arg0 ;
-(void)setUserInterfaceStyle:(NSInteger)arg0 ;
-(void)updateBalloonMasks;
-(void)willRemoveSubview:(id)arg0 ;


@end


#endif