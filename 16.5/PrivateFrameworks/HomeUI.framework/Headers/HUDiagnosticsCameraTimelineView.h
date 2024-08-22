// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUDIAGNOSTICSCAMERATIMELINEVIEW_H
#define HUDIAGNOSTICSCAMERATIMELINEVIEW_H

@class UIView, UILabel, UIButton;



@interface HUDiagnosticsCameraTimelineView : UIView

@property (retain, nonatomic) UILabel *cameraStatusLabel; // ivar: _cameraStatusLabel
@property (retain, nonatomic) UILabel *currentEventLabel; // ivar: _currentEventLabel
@property (retain, nonatomic) UILabel *currentPositionLabel; // ivar: _currentPositionLabel
@property (retain, nonatomic) UILabel *currentTimelineStateLabel; // ivar: _currentTimelineStateLabel
@property (retain, nonatomic) UIButton *moreButton; // ivar: _moreButton


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)updateWithPlaybackEngine:(id)arg0 ;


@end


#endif