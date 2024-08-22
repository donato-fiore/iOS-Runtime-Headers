// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSETTINGSTIMELINEINSPECTORVIEWCONTROLLER_H
#define PXSETTINGSTIMELINEINSPECTORVIEWCONTROLLER_H

@class UIViewController, NSMutableDictionary, NSDate, NSString, UITextView, NSArray, UIImageView, UILabel, UISwitch, UISlider;
@protocol UINavigationControllerDelegate, PXDiagnosticsEnvironment;


#import "PXTimelineEntry.h"

@interface PXSettingsTimelineInspectorViewController : UIViewController <UINavigationControllerDelegate, PXDiagnosticsEnvironment>



@property (retain, nonatomic) NSMutableDictionary *assetByAssetLocalIdentifier; // ivar: _assetByAssetLocalIdentifier
@property (retain, nonatomic) NSDate *currentTime; // ivar: _currentTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PXTimelineEntry *entryInDisplay; // ivar: _entryInDisplay
@property (retain, nonatomic) UITextView *entryInfoTextView; // ivar: _entryInfoTextView
@property (retain, nonatomic) NSArray *filteredContent; // ivar: _filteredContent
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImageView *imageView; // ivar: _imageView
@property (nonatomic) BOOL showFilteredContent; // ivar: _showFilteredContent
@property (retain, nonatomic) UILabel *showFilteredContentLabel; // ivar: _showFilteredContentLabel
@property (retain, nonatomic) UISwitch *showFilteredContentSwitch; // ivar: _showFilteredContentSwitch
@property (retain, nonatomic) UILabel *sliderValueLabel; // ivar: _sliderValueLabel
@property (readonly) Class superclass;
@property (retain, nonatomic) UISlider *timeSlider; // ivar: _timeSlider
@property (retain, nonatomic) NSArray *timeline; // ivar: _timeline
@property (nonatomic) CGSize widgetSize; // ivar: _widgetSize


-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)initWithWidgetSizeClass:(NSUInteger)arg0 ;
-(id)px_diagnosticsItemProvidersForPoint:(struct CGPoint )arg0 inCoordinateSpace:(id)arg1 ;
-(struct CGRect )strokeRectFromCropRect:(struct CGRect )arg0 originalImageRect:(struct CGRect )arg1 targetImageRect:(struct CGRect )arg2 ;
-(void)displayFilteredContentIndex:(NSUInteger)arg0 ;
-(void)displaySliderTime:(id)arg0 ;
-(void)displayTimelineEntry:(id)arg0 ;
-(void)handleTap:(id)arg0 ;
-(void)sliderValueChanged:(id)arg0 ;
-(void)switchValueChanged:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif