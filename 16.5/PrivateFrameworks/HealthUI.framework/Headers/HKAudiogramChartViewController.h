// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAUDIOGRAMCHARTVIEWCONTROLLER_H
#define HKAUDIOGRAMCHARTVIEWCONTROLLER_H

@class NSArray, NSString, NSLayoutConstraint, UIButton, UIStackView;
@protocol HKLollipopDelegate, HKDisplayTypeSectionedContextViewDelegate, HKScalarGraphCollectionViewDelegate, HKSampleTypeUpdateControllerObserver;


#import "HKViewController.h"
#import "_HKAudiogramAnnotationViewDataSource.h"
#import "_HKAudiogramHeader.h"
#import "HKDisplayTypeSectionedContextView.h"
#import "HKLollipopController.h"
#import "HKScalarGraphCollectionViewController.h"
#import "HKUnitPreferenceController.h"
#import "HKSampleTypeUpdateController.h"
#import "HKAxis.h"

@interface HKAudiogramChartViewController : HKViewController <HKLollipopDelegate, HKDisplayTypeSectionedContextViewDelegate, HKScalarGraphCollectionViewDelegate, HKSampleTypeUpdateControllerObserver>



@property (retain, nonatomic) _HKAudiogramAnnotationViewDataSource *annotationViewDataSource; // ivar: _annotationViewDataSource
@property (retain, nonatomic) _HKAudiogramHeader *audiogramHeader; // ivar: _audiogramHeader
@property (retain, nonatomic) NSArray *audiograms; // ivar: _audiograms
@property (nonatomic) BOOL audiogramsFetched; // ivar: _audiogramsFetched
@property (retain, nonatomic) HKDisplayTypeSectionedContextView *contextView; // ivar: _contextView
@property (nonatomic) NSInteger currentAudiogramIndex; // ivar: _currentAudiogramIndex
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSLayoutConstraint *leadingMarginConstraint; // ivar: _leadingMarginConstraint
@property (retain, nonatomic) HKLollipopController *lollipopController; // ivar: _lollipopController
@property (nonatomic) CGFloat minimumAudiogramHeight; // ivar: _minimumAudiogramHeight
@property (retain, nonatomic) HKScalarGraphCollectionViewController *scalarGraphCollectionController; // ivar: _scalarGraphCollectionController
@property (retain, nonatomic) NSArray *sections; // ivar: _sections
@property (nonatomic) NSInteger selectedOverlayEar; // ivar: _selectedOverlayEar
@property (retain, nonatomic) UIButton *showAllFiltersButton; // ivar: _showAllFiltersButton
@property (retain, nonatomic) UIStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) NSLayoutConstraint *stackViewHeightConstraint; // ivar: _stackViewHeightConstraint
@property (readonly) Class superclass;
@property (retain, nonatomic) NSLayoutConstraint *trailingMarginConstraint; // ivar: _trailingMarginConstraint
@property (retain, nonatomic) HKUnitPreferenceController *unitController; // ivar: _unitController
@property (retain, nonatomic) HKSampleTypeUpdateController *updateController; // ivar: _updateController
@property (retain, nonatomic) HKAxis *yAxis; // ivar: _yAxis


+(BOOL)testChartPointCreation:(id)arg0 leftEarSeries:(BOOL)arg1 expectedChartPoints:(id)arg2 failureMessage:(*id)arg3 ;
+(id)_chartPointsFromSensitivityData:(id)arg0 leftEarSeries:(BOOL)arg1 ;
-(BOOL)shouldScrollToSample:(id)arg0 ;
-(CGFloat)lollipopExtensionLength;
-(NSInteger)_defaultLineStyleForLeftEar:(BOOL)arg0 ;
-(NSInteger)_secondaryLineStyleForLeftEar:(BOOL)arg0 ;
-(NSInteger)numberOfItemsInCollection;
-(id)_accessibleColorFromColor:(id)arg0 ;
-(id)_audiogramDisplayType;
-(id)_audiogramLabelColorForStyle:(NSInteger)arg0 ;
-(id)_audiogramLineColorForStyle:(NSInteger)arg0 ;
-(id)_audiogramPointMarkerColorForStyle:(NSInteger)arg0 ;
-(id)_audiogramPresentationStyleWithStyle:(NSInteger)arg0 isOverlay:(BOOL)arg1 ;
-(id)_audiogramSeriesForOverlay:(id)arg0 forLeftEar:(BOOL)arg1 ;
-(id)_audiogramSeriesWithAudiogram:(id)arg0 forLeftEar:(BOOL)arg1 withLineStyle:(NSInteger)arg2 legendAnnotation:(BOOL)arg3 ;
-(id)_audiogramStrokeStyleWithColor:(id)arg0 dottedLines:(BOOL)arg1 ;
-(id)_averageLineColor;
-(id)_averageSectionFromAudiogram:(id)arg0 ;
-(id)_buildAnnotationViewDataSourceWithUnitController:(id)arg0 ;
-(id)_buildAudiogramHeader;
-(id)_buildContextItem;
-(id)_buildYAxisForSensitivity;
-(id)_currentValueTitleStringFromSample:(id)arg0 ;
-(id)_currentValueValueStringFromSample:(id)arg0 ;
-(id)_defaultLabelStyleForStyle:(NSInteger)arg0 axis:(BOOL)arg1 ;
-(id)_disabledLineColor;
-(id)_disabledPointMarkerColor;
-(id)_findNavigationController;
-(id)_indexPathForCurrentSelections;
-(id)_leftEarSensitivityForAudiogram:(id)arg0 ;
-(id)_localizedLegendEntryKey:(BOOL)arg0 ;
-(id)_numberFromSensitivity:(id)arg0 ;
-(id)_primaryAnnotationColor;
-(id)_primaryLineColor;
-(id)_primaryPointMarkerColor;
-(id)_rightEarSensitivityForAudiogram:(id)arg0 ;
-(id)_secondaryAnnotationColor;
-(id)_secondaryLineColor;
-(id)_secondaryPointMarkerColor;
-(id)_sectionsFromAudiogram:(id)arg0 ;
-(id)_setupSeriesForAudiogramSample:(id)arg0 leftStyle:(NSInteger)arg1 rightStyle:(NSInteger)arg2 ;
-(id)graphSeriesForIndex:(NSInteger)arg0 ;
-(id)graphViewControllerForIndex:(NSInteger)arg0 ;
-(id)headerViewForLollipop;
-(id)initWithUnitController:(id)arg0 sampleTypeUpdateController:(id)arg1 minimumAudiogramHeight:(CGFloat)arg2 ;
-(id)lollipopAnnotationColor;
-(id)lollipopFieldColor;
-(void)_addContextView;
-(void)_addControllerAsChildController:(id)arg0 ;
-(void)_applyDynamicInsets:(struct UIEdgeInsets )arg0 ;
-(void)_pinView:(id)arg0 toParentGuide:(id)arg1 ;
-(void)_resetCurrentGraph;
-(void)_setupFixedFrequencyAxisForGraphView:(id)arg0 ;
-(void)_setupInitialUI;
-(void)_updateAudiogramSamples:(id)arg0 error:(id)arg1 ;
-(void)_updateHeaderState;
-(void)_updateOverlayPillsAndHeaderWithSample:(id)arg0 ;
-(void)contextView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)contextView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)graphCollectionView:(id)arg0 didChangeVisibleIndex:(NSInteger)arg1 ;
-(void)queryForAudiogramsUsingHealthStore:(id)arg0 ;
-(void)updateAnnotationDataSource:(id)arg0 pointContexts:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveHighFrequencyUpdateForType:(id)arg1 ;
-(void)updateController:(id)arg0 didReceiveUpdateForType:(id)arg1 samplesAdded:(id)arg2 objectsRemoved:(id)arg3 recoveringFromError:(BOOL)arg4 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif