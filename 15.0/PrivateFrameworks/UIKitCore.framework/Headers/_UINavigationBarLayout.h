// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARLAYOUT_H
#define _UINAVIGATIONBARLAYOUT_H

@class NSMutableArray, NSArray, NSString;
@protocol NSCopying, _UINavigationBarTransitionContextParticipant;

#import <Foundation/Foundation.h>

#import "_UIBarInsertLayoutData.h"
#import "UIView.h"
#import "_UIBarBackground.h"
#import "_UINavigationBarPalette.h"
#import "_UIBarBackgroundLayout.h"
#import "_UINavigationBarContentView.h"
#import "_UINavigationBarContentViewLayout.h"
#import "_UINavigationBarLargeTitleView.h"
#import "_UINavigationBarLargeTitleViewLayout.h"
#import "_UINavigationBarModernPromptView.h"
#import "_UINavigationControllerRefreshControlHost.h"
#import "UISearchBar.h"
#import "UILabel.h"

@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant>

 {
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_canvasViewLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
}


@property (retain, nonatomic) UIView *animationContentClippingView; // ivar: _animationContentClippingView
@property (nonatomic) NSInteger apiVersion; // ivar: _apiVersion
@property (nonatomic) BOOL backgroundCoversContentOnly; // ivar: _backgroundCoversContentOnly
@property (nonatomic) CGFloat backgroundExtension; // ivar: _backgroundExtension
@property (retain, nonatomic) _UIBarBackground *backgroundView; // ivar: _backgroundView
@property (readonly, nonatomic) CGRect backgroundViewLayoutFrame;
@property (retain, nonatomic) _UINavigationBarPalette *bottomPalette; // ivar: _bottomPalette
@property (readonly, nonatomic) CGRect bottomPaletteLayoutFrame;
@property (retain, nonatomic) UIView *canvasView; // ivar: _canvasView
@property (readonly, nonatomic) CGRect canvasViewLayoutFrame;
@property (readonly, nonatomic) CGFloat chromelessTransitionProgress; // ivar: _chromelessTransitionProgress
@property (nonatomic) BOOL clientCanUpdateChromelessTransitionProgress; // ivar: _clientCanUpdateChromelessTransitionProgress
@property (nonatomic) BOOL clientUsesManualScrollEdgeAppearanceProgressSPI; // ivar: _clientUsesManualScrollEdgeAppearanceProgressSPI
@property (nonatomic) BOOL clientWantsBackgroundHidden; // ivar: _clientWantsBackgroundHidden
@property (nonatomic) BOOL clientWantsToPreserveSearchBarAcrossTransitions; // ivar: _clientWantsToPreserveSearchBarAcrossTransitions
@property (retain, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout; // ivar: _compactBackgroundViewLayout
@property (readonly, nonatomic) CGFloat computedBackgroundViewAlpha; // ivar: _computedBackgroundViewAlpha
@property (retain, nonatomic) _UINavigationBarContentView *contentView; // ivar: _contentView
@property (retain, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout; // ivar: _contentViewLayout
@property (readonly, nonatomic) CGRect contentViewLayoutFrame;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesSearchBarWhenScrolling; // ivar: _hidesSearchBarWhenScrolling
@property (readonly, nonatomic) CGFloat largeTitleExposure; // ivar: _largeTitleExposure
@property (retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // ivar: _largeTitleView
@property (nonatomic) NSDirectionalEdgeInsets largeTitleViewInsets; // ivar: _largeTitleViewInsets
@property (retain, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout; // ivar: _largeTitleViewLayout
@property (readonly, nonatomic) CGRect largeTitleViewLayoutFrame;
@property (readonly, nonatomic) ? layoutHeights;
@property (nonatomic) CGSize layoutSize; // ivar: _layoutSize
@property (nonatomic) CGFloat manualScrollEdgeAppearanceProgress; // ivar: _manualScrollEdgeAppearanceProgress
@property (retain, nonatomic) _UINavigationBarModernPromptView *promptView; // ivar: _promptView
@property (readonly, nonatomic) CGRect promptViewLayoutFrame;
@property (retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // ivar: _refreshControlHost
@property (readonly, nonatomic) CGRect refreshControlLayoutFrame;
@property (nonatomic) NSInteger representedSearchLayoutState; // ivar: _representedSearchLayoutState
@property (nonatomic) CGFloat requestedBackgroundViewAlpha; // ivar: _requestedBackgroundViewAlpha
@property (readonly, copy, nonatomic) NSArray *restingHeights;
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (readonly, nonatomic) CGRect searchBarLayoutFrame;
@property (retain, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout; // ivar: _standardBackgroundViewLayout
@property (readonly) Class superclass;
@property (nonatomic) BOOL useManualScrollEdgeAppearance; // ivar: _useManualScrollEdgeAppearance
@property (readonly, nonatomic, getter=isVariableHeight) BOOL variableHeight;
@property (retain, nonatomic) UILabel *weeTitleLabel; // ivar: _weeTitleLabel
@property (readonly, nonatomic) CGRect weeTitleLabelLayoutFrame;


-(BOOL)isBackgroundForScrollEdge;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(id)layoutForMeasuringWidth:(CGFloat)arg0 ;
-(struct CGRect )_backgroundViewLayoutFrameWithRelevantMaxY:(CGFloat)arg0 ;
-(struct CGRect )_bottomPaletteLayoutFrameWithSearchBarMaxY:(CGFloat)arg0 ;
-(struct CGRect )_canvasViewLayoutFrameWithPromptMaxY:(CGFloat)arg0 ;
-(struct CGRect )_contentViewLayoutFrameWithPromptMaxY:(CGFloat)arg0 ;
-(struct CGRect )_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(CGFloat)arg0 ;
-(struct CGRect )_refreshControlLayoutFrameWithContentOrCanvasMaxY:(CGFloat)arg0 ;
-(struct CGRect )_searchBarLayoutFrameWithLargeTitleMaxY:(CGFloat)arg0 ;
-(struct CGRect )backgroundViewLayoutFrameForcingExpandedHeight:(BOOL)arg0 ;
-(void)_addLayoutItem:(id)arg0 ;
-(void)_removeLayoutItem:(id)arg0 ;
-(void)_reprioritizeLayoutItem:(id)arg0 toPriority:(NSInteger)arg1 ;
-(void)_resolveContentAndCanvasLayouts;
-(void)_updateLargeTitleViewLayoutItem;
-(void)_updateLayoutOutputs;
-(void)_updateLayoutParametersForWidth:(CGFloat)arg0 ;
-(void)_updateRefreshControlLayoutData;
-(void)ensureBackButtonTruncationOccursWithContext:(id)arg0 ;
-(void)finalizeStateFromTransition:(id)arg0 ;
-(void)installViewsInNavigationBar:(id)arg0 ;
-(void)interleaveViewsWithLayout:(id)arg0 inNavigationBar:(id)arg1 ;
-(void)layoutViews;
-(void)prepareToRecordToState:(id)arg0 ;
-(void)recordFromStateForTransition:(id)arg0 ;
-(void)recordToStateForTransition:(id)arg0 ;
-(void)removeAllViews;
-(void)removeViewsNotInLayout:(id)arg0 ;
-(void)updateLayout;


@end


#endif