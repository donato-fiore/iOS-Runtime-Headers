// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKANALOGFACEVIEW_H
#define NTKANALOGFACEVIEW_H

@class UIView;


#import "NTKFaceView.h"
#import "NTKAnalogHandsView.h"

@interface NTKAnalogFaceView : NTKFaceView

@property (nonatomic, getter=_contentViewsAreOpaque, setter=_setContentViewsOpaque:) BOOL _contentViewsOpaque; // ivar: __contentViewsOpaque
@property (nonatomic, setter=_setTimeViewBehindContentView:) BOOL _timeViewBehindContentView; // ivar: __timeViewBehindContentView
@property (readonly, nonatomic) UIView *dialComplicationContainerView; // ivar: _dialComplicationContainerView
@property (retain, nonatomic) NTKAnalogHandsView *timeView;
@property (retain, nonatomic) UIView *timeViewContainer; // ivar: _timeViewContainer


-(BOOL)_canStartTimeScrubbing;
-(BOOL)_isAnalog;
-(BOOL)_isComplicationSlotInsideDial:(id)arg0 ;
-(BOOL)_needsForegroundContainerView;
-(BOOL)_shouldRasterizeForegroundContainerViewForEditMode:(NSInteger)arg0 ;
-(BOOL)_timeViewBehindContentForEditMode:(NSInteger)arg0 ;
-(NSInteger)_backgroundedTimeViewEditModes;
-(id)_complicationContainerViewForSlot:(id)arg0 ;
-(id)initWithFaceStyle:(NSInteger)arg0 forDevice:(id)arg1 clientIdentifier:(id)arg2 ;
-(struct CGPoint )_contentCenterOffset;
-(void)_applyDataMode;
-(void)_applyShowContentForUnadornedSnapshot;
-(void)_cleanupAfterEditing;
-(void)_configureForEditMode:(NSInteger)arg0 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_configureTimeView:(id)arg0 ;
-(void)_createTimeViewIfNecessary;
-(void)_endScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_handleLocaleDidChange;
-(void)_loadContentToReplaceUnadornedSnapshot;
-(void)_loadSnapshotContentViews;
-(void)_prepareForEditing;
-(void)_scrubToDate:(id)arg0 animated:(BOOL)arg1 ;
-(void)_startScrubbingAnimated:(BOOL)arg0 withCompletion:(id)arg1 ;
-(void)_unloadSnapshotContentViews;
-(void)_updateDateComplicationPositionIfNecessary;
-(void)dealloc;
-(void)layoutSubviews;


@end


#endif