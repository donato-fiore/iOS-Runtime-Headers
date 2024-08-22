// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC8VIDEOSUI18UNIFIEDOVERLAYVIEW_H
#define _TTC8VIDEOSUI18UNIFIEDOVERLAYVIEW_H

@class VUIImageView;
@protocol VUIScorecardViewDelegate, VUISportsScoreboardManagerDelegate;


#import "VUIBaseView.h"
#import "_TtC8VideosUI21StyledProgressBarView.h"
#import "VUIScorecardView.h"
#import "VUILabel.h"
#import "VUITextBadgeView.h"

@interface _TtC8VideosUI18UnifiedOverlayView : VUIBaseView <VUIScorecardViewDelegate, VUISportsScoreboardManagerDelegate>

 {
    ? overlayLayout;
    ? progressView;
    ? appImageView;
    ? logoImageView;
    ? subtitleLabel;
    ? badgeView;
    ? textBadge;
    ? protectionView;
    ? unfocusedProtectionView;
    ? scorecardView;
    ? cornerRadius;
    ? logoSize;
    ? backgroundImageForMaterial;
    ? isFilteredUpNext;
    ? forcesProtectionOnFocus;
    ? wantsUnfocusedCornerBlur;
    ? scoreboardViewModel;
    ? originalScoreboardViewModel;
    ? backgroundImageHasChanged;
    ? scorecardViewBackgroundImage;
    ? endingTimestamp;
    ? startingTimestamp;
    ? textBadgeHasMaterial;
    ? pendingOperation;
    ? isOperationCancelledObserver;
    ? isOperationFinishedObserver;
    ? gradientSizeHeightMultiplier;
    ? overlayUpdater;
}


@property (nonatomic, readonly) VUIImageView *accessibilityAppImageView;
@property (nonatomic, readonly) VUIBaseView *accessibilityBadgeView;
@property (nonatomic, readonly) VUIImageView *accessibilityLogoImageView;
@property (nonatomic, readonly) _TtC8VideosUI21StyledProgressBarView *accessibilityProgressView;
@property (nonatomic, readonly) VUIScorecardView *accessibilityScorecardView;
@property (nonatomic, readonly) VUILabel *accessibilitySubtitleLabel;
@property (nonatomic, readonly) VUITextBadgeView *accessibilityTextBadge;
@property (nonatomic, readonly) VUILabel *accessibilityTextLabel;
@property (nonatomic, retain) VUILabel *textLabel; // ivar: textLabel
@property (nonatomic, readonly) BOOL vuiDebugUI;


-(CGFloat)maximumWidthForScorecardView:(id)arg0 ;
-(NSInteger)numberOfRowsInScorecardView:(id)arg0 ;
-(NSInteger)numberOfScoreValuesForScorecardView:(id)arg0 inRow:(NSInteger)arg1 ;
-(NSInteger)styleForScorecardView:(id)arg0 ;
-(id)backgroundImageForScorecardViewMaterial:(id)arg0 ;
-(id)getJSContextDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)scoreValue:(id)arg0 inRow:(NSInteger)arg1 atIndex:(NSInteger)arg2 ;
-(int)backgroundBlendModeForScoreValueInRow:(NSInteger)arg0 atIndex:(NSInteger)arg1 ;
-(struct CGSize )vui_layoutSubviews:(struct CGSize )arg0 computationOnly:(BOOL)arg1 ;
-(void)dealloc;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)updateScoreboard:(id)arg0 ;
-(void)vui_setSelected:(BOOL)arg0 animated:(BOOL)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)vui_willMoveToWindow:(id)arg0 ;


@end


#endif