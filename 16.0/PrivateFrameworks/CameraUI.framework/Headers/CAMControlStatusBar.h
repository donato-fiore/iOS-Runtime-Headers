// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMCONTROLSTATUSBAR_H
#define CAMCONTROLSTATUSBAR_H

@class UIView, NSSet, NSMutableDictionary, NSString, NSArray;
@protocol CAMControlStatusIndicatorDelegate, CAMAccessibilityHUDItemProvider, CAMControlStatusBarDelegate;


#import "CAMApertureStatusIndicator.h"
#import "CAMDirectionalIndicator.h"
#import "CAMExposureBiasStatusIndicator.h"
#import "CAMFilterStatusIndicator.h"
#import "CAMFlashStatusIndicator.h"
#import "CAMHDRStatusIndicator.h"
#import "CAMIntensityStatusIndicator.h"
#import "CAMLivePhotoStatusIndicator.h"
#import "CAMLowLightStatusIndicator.h"
#import "CAMProResStatusIndicator.h"
#import "CAMRAWStatusIndicator.h"
#import "CAMSemanticStyleStatusIndicator.h"
#import "CAMSharedLibraryStatusIndicator.h"
#import "CAMTimerStatusIndicator.h"
#import "CAMVideoConfigurationStatusIndicator.h"
#import "CAMVideoStabilizationStatusIndicator.h"

@interface CAMControlStatusBar : UIView <CAMControlStatusIndicatorDelegate, CAMAccessibilityHUDItemProvider>



@property (retain, nonatomic, setter=_setAllDesiredTypes:) NSSet *_allDesiredTypes; // ivar: __allDesiredTypes
@property (retain, nonatomic, setter=_setAllVisibleTypes:) NSSet *_allVisibleTypes; // ivar: __allVisibleTypes
@property (nonatomic, getter=_isDirectionIndicatorHiddenForSpace, setter=_setDirectionIndicatorHiddenForSpace:) BOOL _directionIndicatorHiddenForSpace; // ivar: __directionIndicatorHiddenForSpace
@property (readonly, nonatomic) NSMutableDictionary *_statusIndicatorsByType; // ivar: __statusIndicatorsByType
@property (readonly, nonatomic) CAMApertureStatusIndicator *apertureIndicator;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CAMControlStatusBarDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CAMDirectionalIndicator *directionIndicator; // ivar: _directionIndicator
@property (nonatomic, getter=isDirectionIndicatorVisible) BOOL directionIndicatorVisible; // ivar: _directionIndicatorVisible
@property (readonly, nonatomic) CAMExposureBiasStatusIndicator *exposureBiasIndicator;
@property (readonly, nonatomic) CAMFilterStatusIndicator *filterIndicator;
@property (readonly, nonatomic) CAMFlashStatusIndicator *flashIndicator;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CAMHDRStatusIndicator *hdrIndicator;
@property (readonly, nonatomic) CAMIntensityStatusIndicator *intensityIndicator;
@property (readonly, nonatomic) CAMLivePhotoStatusIndicator *livePhotoIndicator;
@property (readonly, nonatomic) CAMLowLightStatusIndicator *lowLightIndicator;
@property (nonatomic) NSInteger orientation; // ivar: _orientation
@property (retain, nonatomic) UIView *primaryAccessoryControl; // ivar: _primaryAccessoryControl
@property (copy, nonatomic) NSArray *primaryDesiredIndicatorTypes; // ivar: _primaryDesiredIndicatorTypes
@property (copy, nonatomic) NSArray *primaryVisibleIndicatorTypes;
@property (readonly, nonatomic) CAMProResStatusIndicator *proResIndicator;
@property (readonly, nonatomic) CAMRAWStatusIndicator *rawIndicator;
@property (retain, nonatomic) UIView *secondaryAccessoryControl; // ivar: _secondaryAccessoryControl
@property (copy, nonatomic) NSArray *secondaryDesiredIndicatorTypes; // ivar: _secondaryDesiredIndicatorTypes
@property (readonly, nonatomic) CAMSemanticStyleStatusIndicator *semanticStyleIndicator;
@property (readonly, nonatomic) CAMSharedLibraryStatusIndicator *sharedLibraryIndicator;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CAMTimerStatusIndicator *timerIndicator;
@property (readonly, nonatomic) CAMVideoConfigurationStatusIndicator *videoConfigurationIndicator;
@property (readonly, nonatomic) CAMVideoStabilizationStatusIndicator *videoStabilizationIndicator;


-(BOOL)isIndicatorDesiredForType:(NSUInteger)arg0 ;
-(id)_createIndicatorForType:(NSUInteger)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)hudItemForAccessibilityHUDManager:(id)arg0 ;
-(id)indicatorForType:(NSUInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_ensureDesiredIndicators;
-(void)_handleApertureStatusIndicatorTapped:(id)arg0 ;
-(void)_handleExposureBiasStatusIndicatorTapped:(id)arg0 ;
-(void)_handleFilterStatusIndicatorTapped:(id)arg0 ;
-(void)_handleFlashStatusIndicatorTapped:(id)arg0 ;
-(void)_handleHDRStatusIndicatorTapped:(id)arg0 ;
-(void)_handleIntensityStatusIndicatorTapped:(id)arg0 ;
-(void)_handleLivePhotoStatusIndicatorTapped:(id)arg0 ;
-(void)_handleLowLightStatusIndicatorTapped:(id)arg0 ;
-(void)_handleProResStatusIndicatorTapped:(id)arg0 ;
-(void)_handleRAWStatusIndicatorTapped:(id)arg0 ;
-(void)_handleSemanticStyleStatusIndicatorTapped:(id)arg0 ;
-(void)_handleSharedLibraryIndicatorTapped:(id)arg0 ;
-(void)_handleTimerStatusIndicatorTapped:(id)arg0 ;
-(void)_handleVideoStabilizationIndicatorTapped:(id)arg0 ;
-(void)_installIndicatorIfNeededForType:(NSUInteger)arg0 ;
-(void)_iterateViewsForHUDManager:(id)arg0 withItemFoundBlock:(id)arg1 ;
-(void)_layoutAllDesiredTypes:(id)arg0 atOrigin:(NSInteger)arg1 ;
-(void)_layoutDesiredViewsForTypes:(id)arg0 inDesiredTypes:(id)arg1 atOrigin:(NSInteger)arg2 ;
-(void)_loadIndicatorIfNeededForType:(NSUInteger)arg0 ;
-(void)_prelayoutForNewTypes:(id)arg0 oldTypes:(id)arg1 atOrigin:(NSInteger)arg2 ;
-(void)_updateDirectionIndicatorAlphaAnimated:(BOOL)arg0 ;
-(void)_updateIndicatorsVisibilityAnimated:(BOOL)arg0 ;
-(void)controlStatusIndicatorDidChangeIntrinsicContentSize:(id)arg0 animated:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)selectedByAccessibilityHUDManager:(id)arg0 ;


@end


#endif