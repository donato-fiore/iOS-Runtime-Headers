// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPHOTOEDITREFRAMEHUD_H
#define PUPHOTOEDITREFRAMEHUD_H

@class UIView, UIColor, PXHUDVisualization, NSString, PXHUDView;



@interface PUPhotoEditReframeHUD : UIView {
    UIColor *_positiveColor;
    UIColor *_negativeColor;
}


@property (retain, nonatomic) PXHUDVisualization *buildingVisualization; // ivar: _buildingVisualization
@property (copy, nonatomic) NSString *detailText;
@property (retain, nonatomic) PXHUDVisualization *detailVisualization; // ivar: _detailVisualization
@property (retain, nonatomic) PXHUDView *hudView; // ivar: _hudView
@property (retain, nonatomic) PXHUDVisualization *overcaptureVisualization; // ivar: _overcaptureVisualization
@property (retain, nonatomic) PXHUDVisualization *pregatedVisualization; // ivar: _pregatedVisualization
@property (retain, nonatomic) PXHUDVisualization *reframedVisualization; // ivar: _reframedVisualization
@property (retain, nonatomic) PXHUDVisualization *resultHorizonVisualization; // ivar: _resultHorizonVisualization
@property (retain, nonatomic) PXHUDVisualization *resultPerspectiveVisualization; // ivar: _resultPerspectiveVisualization
@property (retain, nonatomic) PXHUDVisualization *resultReframeVisualization; // ivar: _resultReframeVisualization
@property (retain, nonatomic) PXHUDVisualization *stitchedVisualization; // ivar: _stitchedVisualization
@property (retain, nonatomic) PXHUDVisualization *subjectsVisualization; // ivar: _subjectsVisualization
@property (retain, nonatomic) PXHUDVisualization *tripodVisualization; // ivar: _tripodVisualization


-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)showStatsForPhoto:(id)arg0 ;


@end


#endif