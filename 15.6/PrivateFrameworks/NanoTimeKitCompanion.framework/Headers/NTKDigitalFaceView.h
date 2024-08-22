// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKDIGITALFACEVIEW_H
#define NTKDIGITALFACEVIEW_H



#import "NTKFaceView.h"
#import "NTKDigitalTimeLabel.h"

@interface NTKDigitalFaceView : NTKFaceView

@property (readonly, nonatomic) NTKDigitalTimeLabel *timeView;
@property (nonatomic) NSInteger viewMode; // ivar: _viewMode


-(BOOL)_timeLabelUsesLegibility;
-(NSUInteger)_timeLabelOptions;
-(id)_digitalTimeLabelStyleFromViewMode:(NSInteger)arg0 faceBounds:(struct CGRect )arg1 ;
-(void)_configureForTransitionFraction:(CGFloat)arg0 fromEditMode:(NSInteger)arg1 toEditMode:(NSInteger)arg2 ;
-(void)_createTimeViewIfNecessary;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)invalidateDigitalTimeLabelStyle;
-(void)layoutSubviews;


@end


#endif