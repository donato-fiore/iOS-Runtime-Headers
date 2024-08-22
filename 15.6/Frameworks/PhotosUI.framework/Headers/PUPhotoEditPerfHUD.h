// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOEDITPERFHUD_H
#define PUPHOTOEDITPERFHUD_H

@class UIView, PXTimeInterval, PXHUDTimeIntervalVisualization, NSString, PXHUDVisualization, PXHUDBoxedValueVisualization, PXHUDView;



@interface PUPhotoEditPerfHUD : UIView

@property (retain, nonatomic) PXTimeInterval *autoCalcInterval; // ivar: _autoCalcInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *autoCalcVisualization; // ivar: _autoCalcVisualization
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) PXHUDVisualization *detailVisualization; // ivar: _detailVisualization
@property (retain, nonatomic) PXTimeInterval *enterEditTimeInterval; // ivar: _enterEditTimeInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *enterEditVisualization; // ivar: _enterEditVisualization
@property (retain, nonatomic) PXTimeInterval *exitEditTimeInterval; // ivar: _exitEditTimeInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *exitEditVisualization; // ivar: _exitEditVisualization
@property (retain, nonatomic) PXTimeInterval *filterInterval; // ivar: _filterInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *filterVisualization; // ivar: _filterVisualization
@property (nonatomic, getter=isFirstSinceBoot) BOOL firstSinceBoot; // ivar: _firstSinceBoot
@property (retain, nonatomic) PXHUDBoxedValueVisualization *firstSinceBootVisualization; // ivar: _firstSinceBootVisualization
@property (nonatomic, getter=isFirstSinceLaunch) BOOL firstSinceLaunch; // ivar: _firstSinceLaunch
@property (retain, nonatomic) PXHUDBoxedValueVisualization *firstSinceLaunchVisualization; // ivar: _firstSinceLaunchVisualization
@property (retain, nonatomic) PXHUDView *hudView; // ivar: _hudView
@property (retain, nonatomic) PXTimeInterval *resourceCheckingInterval; // ivar: _resourceCheckingInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceCheckingVisualization; // ivar: _resourceCheckingVisualization
@property (retain, nonatomic) PXTimeInterval *resourceDownloadInterval; // ivar: _resourceDownloadInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceDownloadVisualization; // ivar: _resourceDownloadVisualization
@property (retain, nonatomic) PXTimeInterval *resourceLoadingInterval; // ivar: _resourceLoadingInterval
@property (retain, nonatomic) PXHUDTimeIntervalVisualization *resourceLoadingVisualization; // ivar: _resourceLoadingVisualization


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;


@end


#endif